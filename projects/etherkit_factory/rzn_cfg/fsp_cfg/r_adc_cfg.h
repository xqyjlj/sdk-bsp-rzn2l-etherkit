/* generated configuration header file - do not edit */
#ifndef R_ADC_CFG_H_
#define R_ADC_CFG_H_
#define ADC_CFG_PARAM_CHECKING_ENABLE (BSP_CFG_PARAM_CHECKING_ENABLE)
#define ADC_CFG_MULTIPLEX_INTERRUPT_SUPPORTED (0)
#if ADC_CFG_MULTIPLEX_INTERRUPT_SUPPORTED
 #define ADC_CFG_MULTIPLEX_INTERRUPT_ENABLE         BSP_INTERRUPT_ENABLE
 #define ADC_CFG_MULTIPLEX_INTERRUPT_DISABLE        BSP_INTERRUPT_DISABLE
#else
 #define ADC_CFG_MULTIPLEX_INTERRUPT_ENABLE
 #define ADC_CFG_MULTIPLEX_INTERRUPT_DISABLE
#endif
#endif /* R_ADC_CFG_H_ */
