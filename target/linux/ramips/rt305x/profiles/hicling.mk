#
# Copyright (C) 2013 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#


define Profile/LOCATOR
	NAME:=HICLING LOCATOR
	PACKAGES:=\
		kmod-usb-core kmod-usb-ohci kmod-usb2 kmod-ledtrig-netdev
endef

define Profile/LOCATOR/Description
	Package set for HICLING LOCATOR board
endef

$(eval $(call Profile,LOCATOR))

