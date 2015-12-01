SRC_DIR = ../rt2860v2
EXTRA_CFLAGS = -I$(src)/$(SRC_DIR)/include -I$(src)/$(SRC_DIR)/ate/include
DRV_NAME = mt7620_sta
obj-m += $(DRV_NAME).o


$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_md5.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_sha2.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_hmac.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/mlme.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_wep.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/action.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/ba_action.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_data.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rtmp_init.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rtmp_init_inf.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_tkip.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_aes.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_sync.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_sanity.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_info.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_wpa.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_radar.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/spectrum.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rt_os_util.o

$(DRV_NAME)-objs += $(SRC_DIR)/common/rtmp_timer.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rt_channel.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_profile.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_asic.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rtmp_swmcu.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_cfg.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/eeprom.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/ee_flash.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/ps.o

$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_mac_pci.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_data_pci.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_aes.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_arc4.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_cmd.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_wpa_adhoc.o

$(DRV_NAME)-objs += $(SRC_DIR)/rate_ctrl/ra_ctrl.o
$(DRV_NAME)-objs += $(SRC_DIR)/rate_ctrl/alg_legacy.o

$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_rf_cal.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_loft_cal.o

$(DRV_NAME)-objs += $(SRC_DIR)/sta/assoc.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/auth.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/auth_rsp.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/sync.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/sanity.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/rtmp_data.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/connect.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/wpa.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/sta_cfg.o

$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_proc.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_linux.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_profile.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_main_dev.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/sta_ioctl.o
$(DRV_NAME)-objs += $(SRC_DIR)/chips/rtmp_chip.o

$(DRV_NAME)-objs += $(SRC_DIR)/ate/common/rt_ate.o
$(DRV_NAME)-objs += $(SRC_DIR)/ate/common/rt_qa.o
$(DRV_NAME)-objs += $(SRC_DIR)/ate/common/ate_pci.o

$(DRV_NAME)-objs += $(SRC_DIR)/chips/rtmp_chip.o

$(DRV_NAME)-objs +=  $(SRC_DIR)/os/linux/rbus_main_dev.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/os/linux/rt_pci_rbus.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/os/linux/rt_rbus_pci_util.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/os/linux/rt_rbus_pci_drv.o

ifeq ($(CONFIG_RALINK_RT2880),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt2880.o
endif

ifeq ($(CONFIG_RALINK_RT2883),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt2883.o
endif

ifeq ($(CONFIG_RALINK_RT3883),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt3883.o
$(DRV_NAME)-objs += $(SRC_DIR)/ate/chips/rt3883_ate.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/rate_ctrl/alg_grp.o
endif

ifeq ($(CONFIG_RALINK_RT3052),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt305x.o
endif

ifeq ($(CONFIG_RALINK_RT3352),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt305x.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt3352.o
endif

ifeq ($(CONFIG_RT3x52),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt305x.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt3352.o
endif

ifeq ($(CONFIG_RALINK_RT5350),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt305x.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt5350.o
endif

ifeq ($(CONFIG_RALINK_RT6352),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt6352.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/ate/chips/rt6352_ate.o
endif

ifeq ($(CONFIG_RALINK_MT7620),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/rt_rf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/chips/rt6352.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/ate/chips/rt6352_ate.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_LED),y)
$(DRV_NAME)-objs += $(SRC_DIR)/common/rt_led.o
endif

#ifeq ($(CONFIG_$(DRV_NAME)_WMM_ACM),y)
#$(DRV_NAME)-objs += $(SRC_DIR)/common/acm_edca.o
#$(DRV_NAME)-objs += $(SRC_DIR)/common/acm_comm.o
#$(DRV_NAME)-objs += $(SRC_DIR)/common/acm_iocl.o
#endif

#ifeq ($(CONFIG_$(DRV_NAME)_WAPI),y)
#$(DRV_NAME)-objs += $(SRC_DIR)/common/wapi.o
#$(DRV_NAME)-objs += wapi_sms4.obj
#$(DRV_NAME)-objs += wapi_crypt.obj
#endif

#ifeq ($(CONFIG_RT2860V2_RT3XXX_STA_ANTENNA_DIVERSITY),y)
#$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/ap_diversity.o
#endif

ifeq ($(CONFIG_$(DRV_NAME)_DLS),y)
$(DRV_NAME)-objs += $(SRC_DIR)/sta/dls.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_WSC),y)
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc_tlv.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_biginteger.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_dh.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_WSC_V2),y)
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc_v2.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_VIDEO_TURBINE),y)
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_video.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_P2P),y)
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_inf.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_mbss.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_assoc.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_auth.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_connect.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_mlme.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_sanity.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_sync.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_wpa.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_data.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/uapsd.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_autoChSel.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_qload.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/p2pcli.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/p2pcli_ctrl.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/p2pcli_sync.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/p2pcli_auth.o
$(DRV_NAME)-objs += $(SRC_DIR)/sta/p2pcli_assoc.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_mat.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_mat_iparp.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_mat_pppoe.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/cmm_mat_ipv6.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_dbg.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_cfg.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_packet.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_action.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_table.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_ctrl.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_disc_mng.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_nego_mng.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_dbg.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_packet.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_action.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_table.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_ctrl.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_disc_mng.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/p2p_nego_mng.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc_tlv.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/wsc_ufd.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_biginteger.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/crypt_dh.o
$(DRV_NAME)-objs += $(SRC_DIR)/ap/ap_mbss_inf.o
$(DRV_NAME)-objs += $(SRC_DIR)/common/rt_os_util.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/ap_ioctl.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/sta_ioctl.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_linux.o
$(DRV_NAME)-objs += $(SRC_DIR)/os/linux/rt_main_dev.o
endif

ifeq ($(CONFIG_$(DRV_NAME)_TXBF),y)
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/cmm_txbf.o
$(DRV_NAME)-objs +=  $(SRC_DIR)/common/cmm_txbf_cal.o
endif

###################
#  CFLAGS
##################
EXTRA_CFLAGS += -DAGGREGATION_SUPPORT -DPIGGYBACK_SUPPORT -DWMM_SUPPORT  -DLINUX \
	       -Wall -Wstrict-prototypes -Wno-trigraphs 

EXTRA_CFLAGS += -DCONFIG_STA_SUPPORT -DDBG -DRALINK_ATE -DRALINK_QA -DRTMP_RBUS_SUPPORT -DRTMP_MAC_PCI
EXTRA_CFLAGS += -DDOT11_N_SUPPORT -DRELEASE_EXCLUDE -DSTATS_COUNT_SUPPORT
EXTRA_CFLAGS += -DCONFIG_RT2880_ATE_CMD_NEW -DCONFIG_SWMCU_SUPPORT
#EXTRA_CFLAGS += -DCONFIG_RA_NAT_NONE

ifeq ($(CONFIG_RALINK_RT2880),y)
EXTRA_CFLAGS += -DRT2880
endif

ifeq ($(CONFIG_RALINK_RT2883),y)
EXTRA_CFLAGS += -DRT2883 -DRTMP_RF_RW_SUPPORT -DDOT11N_SS3_SUPPORT -DCONFIG_RALINK_RT2883
ifeq ($(CONFIG_$(DRV_NAME)_TXBF),y)
EXTRA_CFLAGS += -DTXBF_SUPPORT
endif
EXTRA_CFLAGS += -DSTREAM_MODE_SUPPORT
endif

ifeq ($(CONFIG_RALINK_RT3883),y)
EXTRA_CFLAGS += -DRT3883 -DRTMP_RF_RW_SUPPORT -DDOT11N_SS3_SUPPORT -DCONFIG_RALINK_RT3883 -DRTMP_FLASH_SUPPORT
ifeq ($(CONFIG_$(DRV_NAME)_TXBF),y)
EXTRA_CFLAGS += -DTXBF_SUPPORT -DSTA_ITXBF_SUPPORT
endif
EXTRA_CFLAGS += -DSTREAM_MODE_SUPPORT
EXTRA_CFLAGS += -DRANGE_EXT_SUPPORT -DNEW_RATE_ADAPT_SUPPORT
endif

ifeq ($(CONFIG_RALINK_RT3052),y)
EXTRA_CFLAGS += -DSPECIFIC_VCORECAL_SUPPORT
ifeq ($(CONFIG_RALINK_RT3350),y)
EXTRA_CFLAGS += -DRT3350 -DRT305x -DRTMP_RF_RW_SUPPORT
else
EXTRA_CFLAGS += -DRT3052 -DRT305x -DRTMP_RF_RW_SUPPORT
endif
endif

ifeq ($(CONFIG_RALINK_RT3352),y)
EXTRA_CFLAGS += -DRT3352 -DRT305x -DRTMP_RF_RW_SUPPORT -DSPECIFIC_BCN_BUF_SUPPORT -DVCORECAL_SUPPORT
endif

ifeq ($(CONFIG_RT3x52),y)
EXTRA_CFLAGS += -DRT3052 -DRT3352 -DRT305x -DRTMP_RF_RW_SUPPORT -DSPECIFIC_BCN_BUF_SUPPORT -DVCORECAL_SUPPORT
endif

ifeq ($(CONFIG_RALINK_RT5350),y)
EXTRA_CFLAGS += -DRT5350 -DRT305x -DRTMP_RF_RW_SUPPORT -DVCORECAL_SUPPORT -DCONFIG_SWMCU_SUPPORT
endif

ifeq ($(CONFIG_RALINK_RT6352),y)
EXTRA_CFLAGS += -DRT6352 -DRTMP_RF_RW_SUPPORT -DRF_BANK -DRTMP_FLASH_SUPPORT -DCONFIG_SWMCU_SUPPORT
EXTRA_CFLAGS += -DRESOURCE_PRE_ALLOC
EXTRA_CFLAGS += -DVCORECAL_SUPPORT
EXTRA_CFLAGS += -DENHANCED_STAT_DISPLAY
EXTRA_CFLAGS += -DRTMP_TEMPERATURE_CALIBRATION
endif

ifeq ($(CONFIG_RALINK_MT7620),y)
EXTRA_CFLAGS += -DRT6352 -DRTMP_RF_RW_SUPPORT -DRF_BANK -DRTMP_FLASH_SUPPORT -DCONFIG_SWMCU_SUPPORT
EXTRA_CFLAGS += -DRESOURCE_PRE_ALLOC
EXTRA_CFLAGS += -DVCORECAL_SUPPORT
EXTRA_CFLAGS += -DENHANCED_STAT_DISPLAY
EXTRA_CFLAGS += -DRTMP_TEMPERATURE_CALIBRATION
endif

ifeq ($(CONFIG_$(DRV_NAME)_WPA_SUPPLICANT),y)
EXTRA_CFLAGS += -DWPA_SUPPLICANT_SUPPORT
endif

#ifeq ($(CONFIG_$(DRV_NAME)_WMM_ACM),y)
#EXTRA_CFLAGS += -DWMM_ACM_SUPPORT
#endif

ifeq ($(CONFIG_$(DRV_NAME)_LED),y)
EXTRA_CFLAGS += -DLED_CONTROL_SUPPORT -DCONFIG_SWMCU_SUPPORT
ifeq ($(CONFIG_$(DRV_NAME)_WSC),y)
EXTRA_CFLAGS += -DWSC_LED_SUPPORT
endif
endif

ifeq ($(CONFIG_RT2860V2_SNMP),y)
EXTRA_CFLAGS += -DSNMP_SUPPORT
endif

#ifeq ($(CONFIG_$(DRV_NAME)_CARRIER),y)
#EXTRA_CFLAGS += -DCARRIER_DETECTION_SUPPORT
#endif

ifeq ($(CONFIG_RT2860V2_EXT_CHANNEL_LIST),y)
EXTRA_CFLAGS   += -DEXT_BUILD_CHANNEL_LIST
endif

#ifeq ($(CONFIG_$(DRV_NAME)_IDS),y)
#EXTRA_CFLAGS += -DIDS_SUPPORT
#endif

ifeq ($(CONFIG_$(DRV_NAME)_DLS),y)
EXTRA_CFLAGS += -DQOS_DLS_SUPPORT
endif

#ifeq ($(CONFIG_$(DRV_NAME)_WAPI),y)
#EXTRA_CFLAGS += -DWAPI_SUPPORT
#ifeq ($(CONFIG_RALINK_RT3052),y)
#EXTRA_CFLAGS += -DSOFT_ENCRYPT
#endif
#endif

ifeq ($(CONFIG_RT2860V2_HW_STA_ANTENNA_DIVERSITY),y)
EXTRA_CFLAGS += -DHW_ANTENNA_DIVERSITY_SUPPORT
endif

ifeq ($(CONFIG_$(DRV_NAME)_WSC),y)
EXTRA_CFLAGS += -DWSC_STA_SUPPORT
endif

ifeq ($(CONFIG_$(DRV_NAME)_WSC_V2),y)
EXTRA_CFLAGS += -DWSC_V2_SUPPORT
endif

ifeq ($(CONFIG_$(DRV_NAME)_VIDEO_TURBINE),y)
EXTRA_CFLAGS += -DVIDEO_TURBINE_SUPPORT
endif

ifeq ($(CONFIG_RA_NETWORK_WORKQUEUE_BH),y)
EXTRA_CFLAGS   += -DWORKQUEUE_BH
endif

ifeq ($(CONFIG_$(DRV_NAME)_RTMP_INTERNAL_TX_ALC),y)
EXTRA_CFLAGS   += -DRTMP_INTERNAL_TX_ALC
endif

ifeq ($(CONFIG_$(DRV_NAME)_INTELLIGENT_RATE_ADAPTION),y)
EXTRA_CFLAGS   += -DNEW_RATE_ADAPT_SUPPORT
endif

ifeq ($(CONFIG_$(DRV_NAME)_80211N_DRAFT3),y)
EXTRA_CFLAGS += -DDOT11N_DRAFT3
endif

ifeq ($(CONFIG_$(DRV_NAME)_P2P),y)
EXTRA_CFLAGS += -DP2P_SUPPORT -DAPCLI_SUPPORT -DMAT_SUPPORT -DAP_SCAN_SUPPORT -DP2P_APCLI_SUPPORT -DCONFIG_AP_SUPPORT -DCONFIG_APSTA_MIXED_SUPPORT -DUAPSD_SUPPORT -DMBSS_SUPPORT -DIAPP_SUPPORT -DDOT1X_SUPPORT -DAP_SCAN_SUPPORT -DWSC_AP_SUPPORT -DWSC_STA_SUPPORT
endif
