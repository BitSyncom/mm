/*
 * Author: Xiangfu Liu <xiangfu@openmobilefree.net>
 * Bitcoin:	1CanaaniJzgps8EV6Sfmpb7T8RutpaeyFn
 *
 * This is free and unencumbered software released into the public domain.
 * For details see the UNLICENSE file at the root of the source tree.
 */

#ifndef __SYSTEM_CONFIG_H_
#define __SYSTEM_CONFIG_H_

#define CPU_FREQUENCY		(50 * 1000 * 1000)
#define UART_BAUD_RATE          (115200)

#define SPI_BASE		(0x80000000)
#define UART0_BASE		(0x80000100)
#define GPIO_BASE		(0x80000200)
#define UART1_BASE		(0x80000300)
#define SHA256_BASE		(0x80000400)
#define PHYI_BASE		(0x80000500)
#define PHYO_BASE		(0x80000600)
#define TWIRE_BASE		(0x80000700)


/* Line control register */
#define LM32_UART_LCR_WLS0 (0x0001)
#define LM32_UART_LCR_WLS1 (0x0002)
#define LM32_UART_LCR_8BIT (LM32_UART_LCR_WLS1 | LM32_UART_LCR_WLS0)

/* Modem control register */
#define LM32_UART_MCR_DTR  (0x0001)
#define LM32_UART_MCR_RTS  (0x0002)


struct lm32_uart {
	volatile unsigned char rxtx;
	volatile unsigned char ier;
	volatile unsigned char iir;
	volatile unsigned char lcr;
	volatile unsigned char mcr;
	volatile unsigned char lsr;
	volatile unsigned char msr;
	volatile unsigned short div;
};

#endif /* __SYSTEM_CONFIG_H_ */