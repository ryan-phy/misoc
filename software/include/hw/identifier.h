#ifndef __HW_IDENTIFIER_H
#define __HW_IDENTIFIER_H

#include <hw/common.h>
#include <csrbase.h>

#define IDENTIFIER_CSR(x)		MMPTR(IDENTIFIER_BASE+(x))

#define CSR_IDENTIFIER_SYSTEMH		IDENTIFIER_CSR(0x00)
#define CSR_IDENTIFIER_SYSTEML		IDENTIFIER_CSR(0x04)
#define CSR_IDENTIFIER_VERSIONH		IDENTIFIER_CSR(0x08)
#define CSR_IDENTIFIER_VERSIONL		IDENTIFIER_CSR(0x0C)
#define CSR_IDENTIFIER_FREQ3		IDENTIFIER_CSR(0x10)
#define CSR_IDENTIFIER_FREQ2		IDENTIFIER_CSR(0x14)
#define CSR_IDENTIFIER_FREQ1		IDENTIFIER_CSR(0x18)
#define CSR_IDENTIFIER_FREQ0		IDENTIFIER_CSR(0x1C)

#endif /* __HW_IDENTIFIER_H */