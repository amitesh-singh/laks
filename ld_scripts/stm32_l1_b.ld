MEMORY {
	flash (rx) : org = 0x08000000, len = 128k
	ram (rwx)  : org = 0x20000000, len = 16k
	eep (r)  : org = 0x08080000, len = 4k
}

INCLUDE "arm_flash_ram.ld"
