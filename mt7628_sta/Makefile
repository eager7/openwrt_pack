#  
# Copyright (C) 2008 OpenWrt.org  
#  
# This is free software, licensed under the GNU General Public License v2.  
# See /LICENSE for more information.  
#  

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=$(shell pwd | sed 's/\/.*.\///g')
PKG_CONFIG:=$(shell echo $(PKG_NAME) | tr '[a-z]' '[A-Z]')
PKG_RELEASE:=1
P4REV:=140820
include $(INCLUDE_DIR)/package.mk
  
PKG_CONFIG = $(shell echo $(PKG_NAME) | tr '[a-z]' '[A-Z]')

define KernelPackage/$(PKG_NAME)
  CATEGORY:=Kernel
  TITLE:=$(PKG_NAME)
  DEPENDS:=@TARGET_ramips +wireless-tools +maccalc
  DEFAULT:=y if CONFIG_TARGET_ramips_mt7628n
  FILES:=$(PKG_BUILD_DIR)/mt_wifi_sta/mt7628_sta.$(LINUX_KMOD_SUFFIX)
endef

define KernelPackage/$(PKG_NAME)/config
	source "$(SOURCE)/config.in"
endef
PKG_KCONFIG:=CONFIG_RALINK_MT7628=y CONFIG_MT_MAC=y CONFIG_MT_STA_SUPPORT=y

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
	SUBDIRS="$(PKG_BUILD_DIR)/mt_wifi_sta" \
	$(PKG_KCONFIG)

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
