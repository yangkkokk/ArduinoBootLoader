#ifndef net_h
#define net_h

#if defined(__WIZ_W5100__)
	#include "w5100.h"
#elif defined(__WIZ_W5200__)
	#include "w5200.h"
#elif defined(__WIZ_W5500__)
	#include "w5500.h"
#else
	#error "Unknown PHY. Cannot find the proper network driver."
#endif

/* Network settings */
#define IP_ADDR     10,0,0,97
#define SUB_MASK    255,255,255,0
#define GW_ADDR     10,0,0,99
#define MAC_ADDR    0xAE,0x35,0xC1,0xEE,0x23,0x56

void netInit(void);

#endif
