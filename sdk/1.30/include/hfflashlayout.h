
#ifndef _HF_FLASH_LAYOUT_H_H_H_
#define _HF_FLASH_LAYOUT_H_H_H_

//#define CONFIG_FLASH_SIZE_1MB

#ifdef CONFIG_FLASH_SIZE_1MB

#define MAX_SOFTWARE_CODE_SIZE				(400*1024)		//512KB
#define MAX_USERCONFIG_SIZE					(16*1024)
#define MAX_5931_FW_SIZE						(152*1024)

// LPB100		1M Flash
#define BOOT_CONFIG								0x000F5000
#define BOOT_CONFIG_BACKUP					0x000F6000
#define SOFTWARE_CODE_ADDR_END				0x00064000
#define USERPAGE 								0x00064000		// 400K
#define CONFIGPAGE 								0x00064800
#define USERPAGE_BACKUP 						0x00065000
#define CONFIGPAGE_BACKUP 						0x00065800
#define F_SETTING_ADDRESS       					0x00066000 
#define F_CONFIG_ADDRESS       					0x00066800
#define NVRAM_ADDR_MAC             					0x00067000
#define WIFI_FIRMWARE_ADDR					0x00068000
#define WIFI_FIRMWARE_ADDR_END				0x0008E000		// end of firmware
#define UPGRADE_ADDRESS						0x0008F000
#define UPGRADE_ADDRESS_END					0x000F3000
#define WEB_SCAN_TMPBUF                 				0x000F8000
#define APSTA_CHANNEL_ADDR                 			0x000FA000
#define ERROR_NUMBER_ADDR              				0x000FB000
#define TIMER_ADJUST_FACTOR_ADDR              		0x000FC000

#define USER_BIN_FILE_OFFSET					0x000FD000
#define USER_BIN_FILE_SIZE						4*1024
#define USER_BIN_FILE_BAK_OFFSET				0x000FE000
#define MODULE_DIFFERENT_ADDR					0x000FF000

// 2M Flash
#define WEB_ADDRESS							0x00100000//0x0008F000//For test
#define WEB_ADDRESS_END						0x00132000//0x000F3000//for test

#else

#define CONFIG_FLASH_SIZE_2MB
// LPB100		2M Flash
#define BOOT_CONFIG								0x000F5000
#define BOOT_CONFIG_BACKUP					0x000F6000

#define MAX_SOFTWARE_CODE_SIZE				(512*1024)		//512KB
#define MAX_USERCONFIG_SIZE					(16*1024)
#define MAX_5931_FW_SIZE						(152*1024)
#define HFUFLASH_SIZE							(128*1024)
#define HFUFLASH1_SIZE							(100*1024)

#define SOFTWARE_CODE_ADDR_END				0x00080000
#define UFLASH_ADDRESS							0x00099000
#define USERPAGE 								0x000BE000
#define CONFIGPAGE 								0x000BE800
#define USERPAGE_BACKUP 						0x000BF000
#define CONFIGPAGE_BACKUP 						0x000BF800
#define F_SETTING_ADDRESS       					0x000C0000 
#define F_CONFIG_ADDRESS       					0x000C0800
#define NVRAM_ADDR_MAC             					0x000C1000
#define WIFI_FIRMWARE_ADDR					0x000C6000
#define WIFI_FIRMWARE_ADDR_END				0x000EC000		// end of firmware

#define WEB_SCAN_TMPBUF                 				0x000F8000
#define APSTA_CHANNEL_ADDR                 			0x000FA000
#define ERROR_NUMBER_ADDR              				0x000FB000
#define TIMER_ADJUST_FACTOR_ADDR              		0x000FC000

#define USER_BIN_FILE_OFFSET					0x000FD000
#define USER_BIN_FILE_SIZE						4*1024
#define USER_BIN_FILE_BAK_OFFSET				0x000FE000
#define MODULE_DIFFERENT_ADDR					0x000FF000


// 2M Flash
#define WEB_ADDRESS							0x00100000//0x0008F000//For test
#define WEB_ADDRESS_END						0x00132000//0x000F3000//for test

#define UFLASH1_ADDRESS						0x00157000

#define UPGRADE_ADDRESS						0x00180000
#define UPGRADE_ADDRESS_END					0x001FFFFF

#endif

#endif



