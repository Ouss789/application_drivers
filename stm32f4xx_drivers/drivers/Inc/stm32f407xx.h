#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#define FLASH_BASEADDR          0x08000000U
#define SRAM1_BASEADDR          0x20000000U
#define SRAM2_BASEADDR          0x2001C000U
#define ROM_BASEADDR            0X1FFF0000U
#define SRAM                    SRAM1_BASEADDR

/*AHBx and APBx Bus peripheral base address*/

#define PERIPH_BASE             0x40000000U
#define APB1PERIPH_BASE         PERIPH_BASE
#define APB2PERIPH_BASE         0x40010000U
#define AHB1PERIPH_BASE         0x40020000U
#define AHB2PERIPH_BASE         0x50000000U

/*Base addresses of pripherals hanging on AHB1 bus*/

#define GPIOA_BASEADDR          (AHB1PERIPH_BASE+0x00000)
#define GPIOB_BASEADDR          (AHB1PERIPH_BASE+0x04000)
#define GPIOC_BASEADDR          (AHB1PERIPH_BASE+0x08000)
#define GPIOD_BASEADDR          (AHB1PERIPH_BASE+0x0C000)
#define GPIOE_BASEADDR          (AHB1PERIPH_BASE+0x10000)
#define GPIOF_BASEADDR          (AHB1PERIPH_BASE+0x14000)
#define GPIOG_BASEADDR          (AHB1PERIPH_BASE+0x18000)
#define GPIOH_BASEADDR          (AHB1PERIPH_BASE+0x1C000)
#define GPIOI_BASEADDR          (AHB1PERIPH_BASE+0x20000)

/*Base addresses of pripherals hanging on APB1 bus*/

#define SPI2_BASEADDR           (APB1PERIPH_BASE + 0x2800)
#define SPI3_BASEADDR           (APB1PERIPH_BASE + 0x2C00)
#define USART2_BASEADDR         (APB1PERIPH_BASE + 0x4400)
#define USART3_BASEADDR         (APB1PERIPH_BASE + 0x4800)
#define USRT4_BASEADDR          (APB1PERIPH_BASE + 0x4C00)
#define UART5_BASEADDR          (APB1PERIPH_BASE + 0x5000)
#define I2C1_BASEADDR           (APB1PERIPH_BASE + 0x5400)
#define I2C2_BASEADDR           (APB1PERIPH_BASE + 0x5800)
#define I2C3_BASEADDR           (APB1PERIPH_BASE + 0x5C00)

/*Base addresses of pripherals hanging on APB2 bus*/

#define SPI1_BASEADDR           (APB2PERIPH_BASE + 0x3400)
#define USART1_BASEADDR         (APB2PERIPH_BASE + 0x1000)
#define USART6_BASEADDR         (APB2PERIPH_BASE + 0x1400)
#define EXTI_BASEADDR           (APB2PERIPH_BASE + 0x3C00)
#define SYSCFG_BASEADDR         (APB2PERIPH_BASE + 0x3800)



#endif /*INC_STM32F407XX_H_*/
