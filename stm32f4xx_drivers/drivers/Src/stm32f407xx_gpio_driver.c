#include "stm32f407xx_gpio_diver.h"


void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi){
    if (EnorDi==ENABLE){
        if (pGPIOx==GPIOA)
        {
            GPIOA_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOB)
        {
            GPIOB_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOC)
        {
            GPIOC_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOD)
        {
            GPIOD_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOE)
        {
            GPIOE_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOF)
        {
            GPIOF_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOG)
        {
            GPIOG_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOH)
        {
            GPIOH_PCLCK_EN();
        }
        else if (pGPIOx ==GPIOI)
        {
            GPIOI_PCLCK_EN();
        }
        else if (pGPIOx = GPIOJ)
        {
            GPIOJ_PCLCK_EN();
        }
        else if (pGPIOx = GPIOK)
        {
            GPIOK_PCLCK_EN();
        }


    }
    else
    {
        
        if (pGPIOx==GPIOA)
        {
            GPIOA_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOB)
        {
            GPIOB_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOC)
        {
            GPIOC_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOD)
        {
            GPIOD_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOE)
        {
            GPIOE_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOF)
        {
            GPIOF_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOG)
        {
            GPIOG_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOH)
        {
            GPIOH_PCLCK_DE();
        }
        else if (pGPIOx ==GPIOI)
        {
            GPIOI_PCLCK_DE();
        }
        else if (pGPIOx = GPIOJ)
        {
            GPIOJ_PCLCK_DE();
        }
        else if (pGPIOx = GPIOK)
        {
            GPIOK_PCLCK_DE();
        }

    }


}

/* GPIO init and deinit*/
void GPIO_Init(GPIO_Handle_t *pGPIOHandle){



}
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx){



}

/* Datat read and write */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNuber){




}
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx){



}
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNuber, uint8_t Value){



}
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint8_t PinNuber, uint16_t Value){



}
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNuber){




}

/* IRQ configuration and ISR handling*/
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi){



}
void GPIO_IRQHandling(uint8_t PinNuber){



}