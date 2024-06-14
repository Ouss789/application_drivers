#include <stdint.h>


#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_



#define __vo                    volatile               

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
#define GPIOJ_BASEADDR          (AHB1PERIPH_BASE+0x24000)
#define GPIOK_BASEADDR          (AHB1PERIPH_BASE+0x28000)
#define RCC_BASEADDR            (AHB1PERIPH_BASE+3800)

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

/*define structures for gpios*/
typedef struct
{
    /* data */
    __vo uint32_t MODER;
    __vo uint32_t OTYPER;
    __vo uint32_t OSPEEDR;
    __vo uint32_t PUPDR;
    __vo uint32_t IDR;
    __vo uint32_t ODR;
    __vo uint32_t BSRR;
    __vo uint32_t LCKR;
    __vo uint32_t AFR[2];

}GPIO_RegDef_t;

typedef struct
{
    /* data */
    __vo uint32_t RCC_CR;
    __vo uint32_t RCC_PLLCFGR;
    __vo uint32_t RCC_CFGR;
    __vo uint32_t RCC_CIR;
    __vo uint32_t RCC_AHB1RSTR;
    __vo uint32_t RCC_AHB2RSTR;
    __vo uint32_t RCC_AHB3RSTR;
    __vo uint32_t RCC_APB1RSTR;
    __vo uint32_t RCC_APB2RSTR;
    uint32_t RESERVED1[2];
    __vo uint32_t RCC_AHB1ENR;
    __vo uint32_t RCC_AHB2ENR;
    __vo uint32_t RCC_AHB3ENR;
    uint32_t RESERVED2[2];
    __vo uint32_t RCC_APB1ENR;
    __vo uint32_t RCC_APB2ENR;
    uint32_t RESERVED3[2];
    __vo uint32_t RCC_AHB1LPENR;
    __vo uint32_t RCC_AHB2LPENR;
    __vo uint32_t RCC_AHB3LPENR;
    uint32_t RESERVED4;
    __vo uint32_t RCC_APB1LPENR;
    __vo uint32_t RCC_APB2LPENR;
    uint32_t RESERVED5[2];
    __vo uint32_t RCC_BDCR;
    __vo uint32_t RCC_CSR;
    uint32_t RESERVED6[2];
    __vo uint32_t RCC_SSCGR;
    __vo uint32_t RCC_PLLI2SCFGR;
    __vo uint32_t RCC_PLLSAICFGR;
    __vo uint32_t RCC_DCKCFGR;
}RCC_RegDef_t;


/*Peripheral definition */

#define GPIOA       ((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB       ((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC       ((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD       ((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE       ((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF       ((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG       ((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH       ((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define GPIOI       ((GPIO_RegDef_t*)GPIOI_BASEADDR)
#define GPIOJ       ((GPIO_RegDef_t*)GPIOJ_BASEADDR)
#define GPIOK       ((GPIO_RegDef_t*)GPIOK_BASEADDR)


#define RCC         ((RCC_RegDef_t*)RCC_BASEADDR)

/*clock enable macros for gpio*/

#define GPIOA_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<0)
#define GPIOB_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<1)
#define GPIOC_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<2)
#define GPIOD_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<3)
#define GPIOE_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<4)
#define GPIOF_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<5)
#define GPIOG_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<6)
#define GPIOH_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<7)
#define GPIOI_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<8)
#define GPIOJ_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<9)
#define GPIOK_PCLCK_EN()        RCC->RCC_AHB1ENR |=(1<<10)

/*clock enable macros for I2Cx*/

#define I2C1_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<21)
#define I2C2_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<22)
#define I2C3_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<23)

/*clock enable macros for SPIx*/

#define SPI1_PCLCK_EN()         RCC->RCC_APB2ENR |=(1<<12)
#define SPI2_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<14)
#define SPI3_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<15)

/*clock enable macros for USARTx and UARTx*/

#define USART1_PCLCK_EN()         RCC->RCC_APB2ENR |=(1<<4)
#define USART2_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<17)
#define USART3_PCLCK_EN()         RCC->RCC_APB1ENR |=(1<<18)
#define USART6_PCLCK_EN()         RCC->RCC_APB2ENR |=(1<<5)
#define UART5_PCLCK_EN()          RCC->RCC_APB1ENR |=(1<<20)

/*CLOCK ENABLE FOR SYSCFGEN: System configuration controller*/
#define SYSCFGEN_PCLCK_EN()       RCC->RCC_APB2ENR |=(1<<14)



/*clock desable macros for gpio*/

#define GPIOA_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<0)
#define GPIOB_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<1)
#define GPIOC_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<2)
#define GPIOD_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<3)
#define GPIOE_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<4)
#define GPIOF_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<5)
#define GPIOG_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<6)
#define GPIOH_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<7)
#define GPIOI_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<8)
#define GPIOJ_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<9)
#define GPIOK_PCLCK_DE()        RCC->RCC_AHB1ENR &=~(1<<10)

/*clock desable macros for I2Cx*/

#define I2C1_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<21)
#define I2C2_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<22)
#define I2C3_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<23)

/*clock desable macros for SPIx*/

#define SPI1_PCLCK_DE()         RCC->RCC_APB2ENR &=~(1<<12)
#define SPI2_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<14)
#define SPI3_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<15)

/*clock desable macros for USARTx and UARTx*/

#define USART1_PCLCK_DE()         RCC->RCC_APB2ENR &=~(1<<4)
#define USART2_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<17)
#define USART3_PCLCK_DE()         RCC->RCC_APB1ENR &=~(1<<18)
#define USART6_PCLCK_DE()         RCC->RCC_APB2ENR &=~(1<<5)
#define UART5_PCLCK_DE()          RCC->RCC_APB1ENR &=~(1<<20)

/*CLOCK ENABLE FOR SYSCFGEN: System configuration controller*/
#define SYSCFGEN_PCLCK_DE()       RCC->RCC_APB2ENR &=~(1<<14)

/* Some generic macros */

#define ENABLE                  1
#define DISABLE                 0
#define SET                     ENABLE
#define RESET                   DISABLE
#define GPIO_PIN_SET            SET
#define GPIO_PIN_RESET          RESET



#endif /*INC_STM32F407XX_H_*/