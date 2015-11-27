#
# Copyright (C) 2010 Jo-Philipp Wich <xm@subsignal.org>
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/package.mk

PKG_NAME:=$(shell pwd | sed 's/\/.*.\///g')
PKG_BIN_NAME:=hello_world
START_SCRIPT:=hello_script
PKG_RELEASE:=1

PKG_BUILD_DIR:= $(BUILD_DIR)/$(PKG_NAME)

define Package/$(PKG_NAME)
  CATEGORY:=PCT
  TITLE:=$(PKG_NAME)
  DEPENDS:=+libc
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Build/Compile
	$(MAKE) -C "$(PKG_BUILD_DIR)" $(MAKE_FLAGS) $(MAKE_VARS)
endef

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/$(PKG_BIN_NAME) $(1)/bin/
	$(INSTALL_DIR) $(1)/etc/init.d/
	$(INSTALL_BIN) ./files/$(START_SCRIPT) $(1)/etc/init.d
endef

define Package/$(PKG_NAME)/postinst
echo "Enabling rc.d symlink for $(PKG_NAME)"
[ -n "$${IPKG_INSTROOT}" ] || /etc/init.d/$(START_SCRIPT) enable || true
endef

$(eval $(call BuildPackage,$(PKG_NAME)))
