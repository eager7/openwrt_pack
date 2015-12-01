#  
# Copyright (C) 2008 OpenWrt.org  
#  
# This is free software, licensed under the GNU General Public License v2.  
# See /LICENSE for more information.  
#  

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=mt7620_driver
PKG_RELEASE:=1
P4REV:=140820
include $(INCLUDE_DIR)/package.mk
  
PKG_CONFIG = $(shell echo $(PKG_NAME) | tr '[a-z]' '[A-Z]')
PKG_KCONFIG:=CONFIG_RT2860V2_STA CONFIG_RT2860V2_STA_WPA_SUPPLICANT CONFIG_RT2860V2_STA_WSC \
CONFIG_RT2860V2_STA_80211N_DRAFT3 RTMP_RF_RW_SUPPORT RALINK_MT7620

src:=../rt2860v2
EXTRA_CFLAGS = -I$(src)/include -I$(src)/ate/include

define KernelPackage/$(PKG_NAME)
  CATEGORY:=Kernel
  TITLE:=$(PKG_NAME)
  DEPENDS:=@TARGET_ramips +wireless-tools +maccalc
  DEFAULT:=y if (CONFIG_TARGET_ramips_mt7620n || CONFIG_TARGET_ramips_mt7620a)
  FILES:=$(PKG_BUILD_DIR)/rt2860v2_sta/mt7620_sta.$(LINUX_KMOD_SUFFIX)
endef

define KernelPackage/$(PKG_NAME)/config
	source "$(SOURCE)/config.in"
endef

define KernelPackage/$(PKG_NAME)/description
  Kernel module to $(PKG_NAME)
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) -R ./src/* $(PKG_BUILD_DIR)/
endef

MAKE_OPTS:= \
	ARCH="$(LINUX_KARCH)" \
	CROSS_COMPILE="$(TARGET_CROSS)" \
	SUBDIRS="$(PKG_BUILD_DIR)/rt2860v2_sta" \
	$(EXTRA_CFLAGS) \
	$(foreach c, $(PKG_KCONFIG),$(if $(CONFIG_$c),CONFIG_$(c)=y))

define Build/Compile
	$(MAKE) -C "$(LINUX_DIR)" \
		$(MAKE_OPTS) \
		modules
endef

define KernelPackage/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/lib/wifi/
	#$(INSTALL_BIN) ./files/mt7620.sh $(1)/lib/wifi/
	$(INSTALL_DIR) $(1)/etc/wireless/mt7620/
	$(INSTALL_BIN) ./files/RT2860STA.dat $(1)/etc/wireless/mt7620/
	$(INSTALL_BIN) ./files/SingleSKU.dat $(1)/etc/wireless/mt7620/
	echo p$(P4REV) > $(1)/etc/wireless/mt7620/version
endef

$(eval $(call KernelPackage,$(PKG_NAME)))
