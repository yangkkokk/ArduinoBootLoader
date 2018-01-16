#include <avr/eeprom.h>

/* EEPROM partitioning */
#define EEPROM_MAJVER   ((uint8_t*)0)
#define EEPROM_MINVER   ((uint8_t*)1)
#define EEPROM_RELEASE  ((uint8_t*)2)
#define EEPROM_IMG_STAT ((uint8_t*)3)
#define EEPROM_SIG_1    ((uint8_t*)4)
#define EEPROM_SIG_2    ((uint8_t*)5)
#define EEPROM_DATA     ((uint8_t*)6)
#define EEPROM_GW       ((uint8_t*)6)
#define EEPROM_SN       ((uint8_t*)10)
#define EEPROM_MAC      ((uint8_t*)14)
#define EEPROM_IP       ((uint8_t*)20)
#define EEPROM_SIG_3	((uint8_t*)24)
#define EEPROM_PORT     ((uint8_t*)25)
#define EEPROM_SIG_4    ((uint8_t*)27)
#define EEPROM_PASS     ((uint8_t*)28)
#define EEPROM_END      ((uint8_t*)64)

#define EEPROM_SETTINGS_SIZE 18
#define REGISTER_BLOCK_SIZE  28

/* EEPROM values */
#define ARIADNE_MAJVER 0
#define ARIADNE_MINVER 4
#define ARIADNE_RELEASE 1

#define EEPROM_IMG_OK_VALUE  (0xFF) //initially there is a correct code uploaded
#define EEPROM_IMG_BAD_VALUE (0x00)

#define EEPROM_SIG_1_VALUE   (0x55)
#define EEPROM_SIG_2_VALUE   (0xAA)
#define EEPROM_SIG_3_VALUE   (0xBB)
#define EEPROM_SIG_4_VALUE   (0xCC)
