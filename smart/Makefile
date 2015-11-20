#
# Copyright (C) 2010 Jo-Philipp Wich <xm@subsignal.org>
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

TARGET := smart_config
PKG_NAME:=smart
PKG_RELEASE:=1.0

PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)


define Package/$(PKG_NAME)
  SECTION:=nxp
  CATEGORY:=NXP
  TITLE:=smart -- new zigbee daemon for kiwi
  DEPENDS:=+libjson-c +libdaemon +libpthread +libsqlite3
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/$(TARGET) $(1)/bin/
	$(INSTALL_DIR) $(1)/etc/init.d/
endef

$(eval $(call BuildPackage,$(PKG_NAME)))
