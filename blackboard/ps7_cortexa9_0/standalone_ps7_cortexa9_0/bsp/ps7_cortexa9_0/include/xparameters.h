#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definition for CPU ID */
#define XPAR_CPU_ID 0U

/* Definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 666666687


/******************************************************************/

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0000000
#define STDOUT_BASEADDRESS 0xE0000000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_ZYNQ
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver AXIVDMA */
#define XPAR_XAXIVDMA_NUM_INSTANCES 1U

/* Definitions for peripheral HDMI_VDMA */
#define XPAR_HDMI_VDMA_DEVICE_ID 0U
#define XPAR_HDMI_VDMA_BASEADDR 0x43000000U
#define XPAR_HDMI_VDMA_HIGHADDR 0x4300FFFFU
#define XPAR_HDMI_VDMA_NUM_FSTORES 1U
#define XPAR_HDMI_VDMA_INCLUDE_MM2S 1U
#define XPAR_HDMI_VDMA_INCLUDE_MM2S_DRE 0U
#define XPAR_HDMI_VDMA_M_AXI_MM2S_DATA_WIDTH 64U
#define XPAR_HDMI_VDMA_INCLUDE_S2MM 0U
#define XPAR_HDMI_VDMA_INCLUDE_S2MM_DRE 0U
#define XPAR_HDMI_VDMA_M_AXI_S2MM_DATA_WIDTH 64U
#define XPAR_HDMI_VDMA_AXI_MM2S_ACLK_FREQ_HZ 0U
#define XPAR_HDMI_VDMA_AXI_S2MM_ACLK_FREQ_HZ 0U
#define XPAR_HDMI_VDMA_MM2S_GENLOCK_MODE 0U
#define XPAR_HDMI_VDMA_MM2S_GENLOCK_NUM_MASTERS 1U
#define XPAR_HDMI_VDMA_S2MM_GENLOCK_MODE 0U
#define XPAR_HDMI_VDMA_S2MM_GENLOCK_NUM_MASTERS 1U
#define XPAR_HDMI_VDMA_INCLUDE_SG 0U
#define XPAR_HDMI_VDMA_ENABLE_VIDPRMTR_READS 1U
#define XPAR_HDMI_VDMA_USE_FSYNC 1U
#define XPAR_HDMI_VDMA_FLUSH_ON_FSYNC 1U
#define XPAR_HDMI_VDMA_MM2S_LINEBUFFER_DEPTH 2048U
#define XPAR_HDMI_VDMA_S2MM_LINEBUFFER_DEPTH 512U
#define XPAR_HDMI_VDMA_INCLUDE_INTERNAL_GENLOCK 1U
#define XPAR_HDMI_VDMA_S2MM_SOF_ENABLE 1U
#define XPAR_HDMI_VDMA_M_AXIS_MM2S_TDATA_WIDTH 32U
#define XPAR_HDMI_VDMA_S_AXIS_S2MM_TDATA_WIDTH 32U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_1 0U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_5 0U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_6 1U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_7 1U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_9 0U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_13 0U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_14 1U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_INFO_15 1U
#define XPAR_HDMI_VDMA_ENABLE_DEBUG_ALL 0U
#define XPAR_HDMI_VDMA_ADDR_WIDTH 32U
#define XPAR_HDMI_VDMA_ENABLE_VERT_FLIP 0U


/******************************************************************/

/* Canonical definitions for peripheral HDMI_VDMA */
#define XPAR_AXIVDMA_0_DEVICE_ID XPAR_HDMI_VDMA_DEVICE_ID
#define XPAR_AXIVDMA_0_BASEADDR 0x43000000U
#define XPAR_AXIVDMA_0_HIGHADDR 0x4300FFFFU
#define XPAR_AXIVDMA_0_NUM_FSTORES 1U
#define XPAR_AXIVDMA_0_INCLUDE_MM2S 1U
#define XPAR_AXIVDMA_0_INCLUDE_MM2S_DRE 0U
#define XPAR_AXIVDMA_0_M_AXI_MM2S_DATA_WIDTH 64U
#define XPAR_AXIVDMA_0_INCLUDE_S2MM 0U
#define XPAR_AXIVDMA_0_INCLUDE_S2MM_DRE 0U
#define XPAR_AXIVDMA_0_M_AXI_S2MM_DATA_WIDTH 64U
#define XPAR_AXIVDMA_0_AXI_MM2S_ACLK_FREQ_HZ 0U
#define XPAR_AXIVDMA_0_AXI_S2MM_ACLK_FREQ_HZ 0U
#define XPAR_AXIVDMA_0_MM2S_GENLOCK_MODE 0U
#define XPAR_AXIVDMA_0_MM2S_GENLOCK_NUM_MASTERS 1U
#define XPAR_AXIVDMA_0_S2MM_GENLOCK_MODE 0U
#define XPAR_AXIVDMA_0_S2MM_GENLOCK_NUM_MASTERS 1U
#define XPAR_AXIVDMA_0_INCLUDE_SG 0U
#define XPAR_AXIVDMA_0_ENABLE_VIDPRMTR_READS 1U
#define XPAR_AXIVDMA_0_USE_FSYNC 1U
#define XPAR_AXIVDMA_0_FLUSH_ON_FSYNC 1U
#define XPAR_AXIVDMA_0_MM2S_LINEBUFFER_DEPTH 2048U
#define XPAR_AXIVDMA_0_S2MM_LINEBUFFER_DEPTH 512U
#define XPAR_AXIVDMA_0_INCLUDE_INTERNAL_GENLOCK 1U
#define XPAR_AXIVDMA_0_S2MM_SOF_ENABLE 1U
#define XPAR_AXIVDMA_0_M_AXIS_MM2S_TDATA_WIDTH 32U
#define XPAR_AXIVDMA_0_S_AXIS_S2MM_TDATA_WIDTH 32U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_1 0U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_5 0U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_6 1U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_7 1U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_9 0U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_13 0U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_14 1U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_INFO_15 1U
#define XPAR_AXIVDMA_0_ENABLE_DEBUG_ALL 0U
#define XPAR_AXIVDMA_0_c_addr_width 32U
#define XPAR_AXIVDMA_0_c_enable_vert_flip 0U


/******************************************************************/

/* Definitions for driver CLK_WIZ */
#define XPAR_XCLK_WIZ_NUM_INSTANCES 1

/* Definitions for peripheral CLK_WIZ */
#define XPAR_CLK_WIZ_DEVICE_ID 0
#define XPAR_CLK_WIZ_BASEADDR 0x43C40000
#define XPAR_CLK_WIZ_HIGHADDR 0x43C4FFFF
#define XPAR_CLK_WIZ_ENABLE_CLOCK_MONITOR 0
#define XPAR_CLK_WIZ_ENABLE_USER_CLOCK0 0
#define XPAR_CLK_WIZ_ENABLE_USER_CLOCK1 0
#define XPAR_CLK_WIZ_ENABLE_USER_CLOCK2 0
#define XPAR_CLK_WIZ_ENABLE_USER_CLOCK3 0
#define XPAR_CLK_WIZ_REF_CLK_FREQ 100.0
#define XPAR_CLK_WIZ_USER_CLK_FREQ0 100.0
#define XPAR_CLK_WIZ_USER_CLK_FREQ1 100.0
#define XPAR_CLK_WIZ_USER_CLK_FREQ2 100.0
#define XPAR_CLK_WIZ_USER_CLK_FREQ3 100.0
#define XPAR_CLK_WIZ_PRECISION 1
#define XPAR_CLK_WIZ_ENABLE_PLL0 0
#define XPAR_CLK_WIZ_ENABLE_PLL1 0
#define XPAR_CLK_WIZ_PRIM_IN_FREQ 100.000
#define XPAR_CLK_WIZ_NUM_OUT_CLKS 2


/******************************************************************/

/* Canonical definitions for peripheral CLK_WIZ */
#define XPAR_CLK_WIZ_0_DEVICE_ID XPAR_CLK_WIZ_DEVICE_ID
#define XPAR_CLK_WIZ_0_BASEADDR 0x43C40000
#define XPAR_CLK_WIZ_0_HIGHADDR 0x43C4FFFF
#define XPAR_CLK_WIZ_0_ENABLE_CLOCK_MONITOR 0
#define XPAR_CLK_WIZ_0_ENABLE_USER_CLOCK0 0
#define XPAR_CLK_WIZ_0_ENABLE_USER_CLOCK1 0
#define XPAR_CLK_WIZ_0_ENABLE_USER_CLOCK2 0
#define XPAR_CLK_WIZ_0_ENABLE_USER_CLOCK3 0
#define XPAR_CLK_WIZ_0_REF_CLK_FREQ 100.0
#define XPAR_CLK_WIZ_0_USER_CLK_FREQ0 100.0
#define XPAR_CLK_WIZ_0_USER_CLK_FREQ1 100.0
#define XPAR_CLK_WIZ_0_USER_CLK_FREQ2 100.0
#define XPAR_CLK_WIZ_0_USER_CLK_FREQ3 100.0
#define XPAR_CLK_WIZ_0_PRECISION 1
#define XPAR_CLK_WIZ_0_Enable_PLL0 0
#define XPAR_CLK_WIZ_0_Enable_PLL1 0
#define XPAR_CLK_WIZ_0_PRIM_IN_FREQ 100.000
#define XPAR_CLK_WIZ_0_NUM_OUT_CLKS 2


/******************************************************************/


/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x1FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0U
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000U
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000U
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/


/* Peripheral Definitions for peripheral PDM_AUDIO */
#define XPAR_PDM_AUDIO_S_AXI_BASEADDR 0x43C20000
#define XPAR_PDM_AUDIO_S_AXI_HIGHADDR 0x43C2FFFF


/* Peripheral Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Peripheral Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Peripheral Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Peripheral Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Peripheral Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Peripheral Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Peripheral Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Peripheral Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Peripheral Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Peripheral Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Peripheral Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Peripheral Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Peripheral Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Peripheral Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Peripheral Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Peripheral Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Peripheral Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/* Peripheral Definitions for peripheral RGB_PWM */
#define XPAR_RGB_PWM_S_AXI_BASEADDR 0x43C00000
#define XPAR_RGB_PWM_S_AXI_HIGHADDR 0x43C0FFFF


/* Peripheral Definitions for peripheral SEVEN_SEG_DISPLAY */
#define XPAR_SEVEN_SEG_DISPLAY_S_AXI_BASEADDR 0x43C10000
#define XPAR_SEVEN_SEG_DISPLAY_S_AXI_HIGHADDR 0x43C1FFFF


/******************************************************************/


/* Canonical Definitions for peripheral PDM_AUDIO */
#define XPAR_PDM_AUDIO_0_S_AXI_BASEADDR 0x43C20000
#define XPAR_PDM_AUDIO_0_S_AXI_HIGHADDR 0x43C2FFFF






































/* Canonical Definitions for peripheral RGB_PWM */
#define XPAR_AXI_PWM_0_S_AXI_BASEADDR 0x43C00000
#define XPAR_AXI_PWM_0_S_AXI_HIGHADDR 0x43C0FFFF


/* Canonical Definitions for peripheral SEVEN_SEG_DISPLAY */
#define XPAR_SEVEN_SEG_DISPLAY_0_S_AXI_BASEADDR 0x43C10000
#define XPAR_SEVEN_SEG_DISPLAY_0_S_AXI_HIGHADDR 0x43C1FFFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 4

/* Definitions for peripheral GPIO_BTN */
#define XPAR_GPIO_BTN_BASEADDR 0x41200000
#define XPAR_GPIO_BTN_HIGHADDR 0x4120FFFF
#define XPAR_GPIO_BTN_DEVICE_ID 0
#define XPAR_GPIO_BTN_INTERRUPT_PRESENT 1
#define XPAR_GPIO_BTN_IS_DUAL 0


/* Definitions for peripheral GPIO_HDMI */
#define XPAR_GPIO_HDMI_BASEADDR 0x41230000
#define XPAR_GPIO_HDMI_HIGHADDR 0x4123FFFF
#define XPAR_GPIO_HDMI_DEVICE_ID 1
#define XPAR_GPIO_HDMI_INTERRUPT_PRESENT 1
#define XPAR_GPIO_HDMI_IS_DUAL 0


/* Definitions for peripheral GPIO_LED */
#define XPAR_GPIO_LED_BASEADDR 0x41210000
#define XPAR_GPIO_LED_HIGHADDR 0x4121FFFF
#define XPAR_GPIO_LED_DEVICE_ID 2
#define XPAR_GPIO_LED_INTERRUPT_PRESENT 1
#define XPAR_GPIO_LED_IS_DUAL 0


/* Definitions for peripheral GPIO_SW */
#define XPAR_GPIO_SW_BASEADDR 0x41220000
#define XPAR_GPIO_SW_HIGHADDR 0x4122FFFF
#define XPAR_GPIO_SW_DEVICE_ID 3
#define XPAR_GPIO_SW_INTERRUPT_PRESENT 1
#define XPAR_GPIO_SW_IS_DUAL 0


/******************************************************************/

/* Canonical definitions for peripheral GPIO_BTN */
#define XPAR_GPIO_0_BASEADDR 0x41200000
#define XPAR_GPIO_0_HIGHADDR 0x4120FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_GPIO_BTN_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 1
#define XPAR_GPIO_0_IS_DUAL 0

/* Canonical definitions for peripheral GPIO_HDMI */
#define XPAR_GPIO_1_BASEADDR 0x41230000
#define XPAR_GPIO_1_HIGHADDR 0x4123FFFF
#define XPAR_GPIO_1_DEVICE_ID XPAR_GPIO_HDMI_DEVICE_ID
#define XPAR_GPIO_1_INTERRUPT_PRESENT 1
#define XPAR_GPIO_1_IS_DUAL 0

/* Canonical definitions for peripheral GPIO_LED */
#define XPAR_GPIO_2_BASEADDR 0x41210000
#define XPAR_GPIO_2_HIGHADDR 0x4121FFFF
#define XPAR_GPIO_2_DEVICE_ID XPAR_GPIO_LED_DEVICE_ID
#define XPAR_GPIO_2_INTERRUPT_PRESENT 1
#define XPAR_GPIO_2_IS_DUAL 0

/* Canonical definitions for peripheral GPIO_SW */
#define XPAR_GPIO_3_BASEADDR 0x41220000
#define XPAR_GPIO_3_HIGHADDR 0x4122FFFF
#define XPAR_GPIO_3_DEVICE_ID XPAR_GPIO_SW_DEVICE_ID
#define XPAR_GPIO_3_INTERRUPT_PRESENT 1
#define XPAR_GPIO_3_IS_DUAL 0


/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 1

/* Definitions for peripheral IIC_HDMI */
#define XPAR_IIC_HDMI_DEVICE_ID 0
#define XPAR_IIC_HDMI_BASEADDR 0x41600000
#define XPAR_IIC_HDMI_HIGHADDR 0x4160FFFF
#define XPAR_IIC_HDMI_TEN_BIT_ADR 0
#define XPAR_IIC_HDMI_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral IIC_HDMI */
#define XPAR_IIC_0_DEVICE_ID XPAR_IIC_HDMI_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x41600000
#define XPAR_IIC_0_HIGHADDR 0x4160FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver IICPS */
#define XPAR_XIICPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_I2C_1 */
#define XPAR_PS7_I2C_1_DEVICE_ID 0
#define XPAR_PS7_I2C_1_BASEADDR 0xE0005000
#define XPAR_PS7_I2C_1_HIGHADDR 0xE0005FFF
#define XPAR_PS7_I2C_1_I2C_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Canonical definitions for peripheral PS7_I2C_1 */
#define XPAR_XIICPS_0_DEVICE_ID XPAR_PS7_I2C_1_DEVICE_ID
#define XPAR_XIICPS_0_BASEADDR 0xE0005000
#define XPAR_XIICPS_0_HIGHADDR 0xE0005FFF
#define XPAR_XIICPS_0_I2C_CLK_FREQ_HZ 111111115


/******************************************************************/

/* Definition for input Clock */
/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0
#define XPAR_PS7_QSPI_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0
#define XPAR_XQSPIPS_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_PDM_AUDIO_SPKLINTR_INTR 61U
#define XPAR_FABRIC_PDM_AUDIO_SPKRINTR_INTR 62U
#define XPAR_FABRIC_PDM_AUDIO_MICINTR_INTR 63U
#define XPAR_FABRIC_ESP32_UART1_INTERRUPT_INTR 64U
#define XPAR_FABRIC_GPIO_SW_IP2INTC_IRPT_INTR 65U
#define XPAR_FABRIC_GPIO_LED_IP2INTC_IRPT_INTR 66U
#define XPAR_FABRIC_GPIO_BTN_IP2INTC_IRPT_INTR 67U
#define XPAR_FABRIC_GPIO_HDMI_IP2INTC_IRPT_INTR 68U
#define XPAR_FABRIC_IIC_HDMI_IIC2INTC_IRPT_INTR 84U
#define XPAR_FABRIC_HDMI_VDMA_MM2S_INTROUT_INTR 85U
#define XPAR_FABRIC_HDMI_V_TC_IRQ_INTR 86U
#define XPAR_FABRIC_GYRO_DRDY_M_INTR 87U
#define XPAR_FABRIC_GYRO_INT1_AG_INTR 88U
#define XPAR_FABRIC_GYRO_INT_M_INTR 89U
#define XPAR_FABRIC_XADC_WIZ_IP2INTC_IRPT_INTR 90U
#define XPAR_FABRIC_PWM_SERVO_4_INTERRUPT_INTR 91U

/******************************************************************/

/* Canonical definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_UARTLITE_0_VEC_ID XPAR_FABRIC_ESP32_UART1_INTERRUPT_INTR
#define XPAR_FABRIC_GPIO_3_VEC_ID XPAR_FABRIC_GPIO_SW_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_GPIO_2_VEC_ID XPAR_FABRIC_GPIO_LED_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_GPIO_0_VEC_ID XPAR_FABRIC_GPIO_BTN_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_GPIO_1_VEC_ID XPAR_FABRIC_GPIO_HDMI_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_IIC_0_VEC_ID XPAR_FABRIC_IIC_HDMI_IIC2INTC_IRPT_INTR
#define XPAR_FABRIC_AXIVDMA_0_VEC_ID XPAR_FABRIC_HDMI_VDMA_MM2S_INTROUT_INTR
#define XPAR_FABRIC_VTC_0_VEC_ID XPAR_FABRIC_HDMI_V_TC_IRQ_INTR
#define XPAR_FABRIC_SYSMON_0_VEC_ID XPAR_FABRIC_XADC_WIZ_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_TMRCTR_0_VEC_ID XPAR_FABRIC_PWM_SERVO_4_INTERRUPT_INTR

/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0U
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100U
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FFU
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0U
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100U
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FFU
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_PS7_SD_0_HAS_CD 1
#define XPAR_PS7_SD_0_HAS_WP 0
#define XPAR_PS7_SD_0_BUS_WIDTH 0
#define XPAR_PS7_SD_0_MIO_BANK 0
#define XPAR_PS7_SD_0_HAS_EMIO 0
#define XPAR_PS7_SD_0_SLOT_TYPE 0
#define XPAR_PS7_SD_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_PS7_SD_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_200_SDR_OTAP_DLY 0
#define XPAR_PS7_SD_0_CLK_200_DDR_OTAP_DLY 0


/******************************************************************/

#define XPAR_PS7_SD_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_XSDPS_0_HAS_CD 1
#define XPAR_XSDPS_0_HAS_WP 0
#define XPAR_XSDPS_0_BUS_WIDTH 0
#define XPAR_XSDPS_0_MIO_BANK 0
#define XPAR_XSDPS_0_HAS_EMIO 0
#define XPAR_XSDPS_0_SLOT_TYPE 0
#define XPAR_XSDPS_0_IS_CACHE_COHERENT 0
#define XPAR_XSDPS_0_CLK_50_SDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_ITAP_DLY 0
#define XPAR_XSDPS_0_CLK_50_DDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_100_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_200_SDR_OTAP_DLY 0
#define XPAR_XSDPS_0_CLK_200_DDR_OTAP_DLY 0


/******************************************************************/

/* Definitions for driver SPIPS */
#define XPAR_XSPIPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_SPI_0 */
#define XPAR_PS7_SPI_0_DEVICE_ID 0
#define XPAR_PS7_SPI_0_BASEADDR 0xE0006000
#define XPAR_PS7_SPI_0_HIGHADDR 0xE0006FFF
#define XPAR_PS7_SPI_0_SPI_CLK_FREQ_HZ 166666672


/* Definitions for peripheral PS7_SPI_1 */
#define XPAR_PS7_SPI_1_DEVICE_ID 1
#define XPAR_PS7_SPI_1_BASEADDR 0xE0007000
#define XPAR_PS7_SPI_1_HIGHADDR 0xE0007FFF
#define XPAR_PS7_SPI_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Canonical definitions for peripheral PS7_SPI_0 */
#define XPAR_XSPIPS_0_DEVICE_ID XPAR_PS7_SPI_0_DEVICE_ID
#define XPAR_XSPIPS_0_BASEADDR 0xE0006000
#define XPAR_XSPIPS_0_HIGHADDR 0xE0006FFF
#define XPAR_XSPIPS_0_SPI_CLK_FREQ_HZ 166666672

/* Canonical definitions for peripheral PS7_SPI_1 */
#define XPAR_XSPIPS_1_DEVICE_ID XPAR_PS7_SPI_1_DEVICE_ID
#define XPAR_XSPIPS_1_BASEADDR 0xE0007000
#define XPAR_XSPIPS_1_HIGHADDR 0xE0007FFF
#define XPAR_XSPIPS_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Definitions for driver SYSMON */
#define XPAR_XSYSMON_NUM_INSTANCES 1U

/* Definitions for peripheral XADC_WIZ */
#define XPAR_XADC_WIZ_IP_TYPE 0U
#define XPAR_XADC_WIZ_DEVICE_ID 0U
#define XPAR_XADC_WIZ_BASEADDR 0x43C50000U
#define XPAR_XADC_WIZ_HIGHADDR 0x43C5FFFFU
#define XPAR_XADC_WIZ_INCLUDE_INTR 1U


/******************************************************************/

/* Canonical definitions for peripheral XADC_WIZ */
#define XPAR_SYSMON_0_IP_TYPE 0U
#define XPAR_SYSMON_0_DEVICE_ID XPAR_XADC_WIZ_DEVICE_ID
#define XPAR_SYSMON_0_BASEADDR 0x43C50000U
#define XPAR_SYSMON_0_HIGHADDR 0x43C5FFFFU
#define XPAR_SYSMON_0_INCLUDE_INTR 1U


/******************************************************************/

/* Definitions for driver TMRCTR */
#define XPAR_XTMRCTR_NUM_INSTANCES 1U

/* Definitions for peripheral PWM_SERVO_4 */
#define XPAR_PWM_SERVO_4_DEVICE_ID 0U
#define XPAR_PWM_SERVO_4_BASEADDR 0x42800000U
#define XPAR_PWM_SERVO_4_HIGHADDR 0x4280FFFFU
#define XPAR_PWM_SERVO_4_CLOCK_FREQ_HZ 100000000U


/******************************************************************/

/* Canonical definitions for peripheral PWM_SERVO_4 */
#define XPAR_TMRCTR_0_DEVICE_ID 0U
#define XPAR_TMRCTR_0_BASEADDR 0x42800000U
#define XPAR_TMRCTR_0_HIGHADDR 0x4280FFFFU
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_PWM_SERVO_4_CLOCK_FREQ_HZ

/******************************************************************/

/* Definitions for driver TTCPS */
#define XPAR_XTTCPS_NUM_INSTANCES 3U

/* Definitions for peripheral PS7_TTC_0 */
#define XPAR_PS7_TTC_0_DEVICE_ID 0U
#define XPAR_PS7_TTC_0_BASEADDR 0XF8001000U
#define XPAR_PS7_TTC_0_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_0_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_1_DEVICE_ID 1U
#define XPAR_PS7_TTC_1_BASEADDR 0XF8001004U
#define XPAR_PS7_TTC_1_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_1_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_2_DEVICE_ID 2U
#define XPAR_PS7_TTC_2_BASEADDR 0XF8001008U
#define XPAR_PS7_TTC_2_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_PS7_TTC_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Canonical definitions for peripheral PS7_TTC_0 */
#define XPAR_XTTCPS_0_DEVICE_ID XPAR_PS7_TTC_0_DEVICE_ID
#define XPAR_XTTCPS_0_BASEADDR 0xF8001000U
#define XPAR_XTTCPS_0_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_0_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_1_DEVICE_ID XPAR_PS7_TTC_1_DEVICE_ID
#define XPAR_XTTCPS_1_BASEADDR 0xF8001004U
#define XPAR_XTTCPS_1_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_1_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_2_DEVICE_ID XPAR_PS7_TTC_2_DEVICE_ID
#define XPAR_XTTCPS_2_BASEADDR 0xF8001008U
#define XPAR_XTTCPS_2_TTC_CLK_FREQ_HZ 111111115U
#define XPAR_XTTCPS_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Definitions for driver UARTLITE */
#define XPAR_XUARTLITE_NUM_INSTANCES 1U

/* Definitions for peripheral ESP32_UART1 */
#define XPAR_ESP32_UART1_DEVICE_ID 0U
#define XPAR_ESP32_UART1_BASEADDR 0x42C00000U
#define XPAR_ESP32_UART1_HIGHADDR 0x42C0FFFFU
#define XPAR_ESP32_UART1_BAUDRATE 115200U
#define XPAR_ESP32_UART1_USE_PARITY 0U
#define XPAR_ESP32_UART1_ODD_PARITY 0U
#define XPAR_ESP32_UART1_DATA_BITS 8U

/* Canonical definitions for peripheral ESP32_UART1 */
#define XPAR_UARTLITE_0_DEVICE_ID 0U
#define XPAR_UARTLITE_0_BASEADDR 0x42C00000U
#define XPAR_UARTLITE_0_HIGHADDR 0x42C0FFFFU
#define XPAR_UARTLITE_0_BAUDRATE 115200U
#define XPAR_UARTLITE_0_USE_PARITY 0U
#define XPAR_UARTLITE_0_ODD_PARITY 0U
#define XPAR_UARTLITE_0_DATA_BITS 8U


/******************************************************************/
/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_UART_0 */
#define XPAR_PS7_UART_0_DEVICE_ID 0
#define XPAR_PS7_UART_0_BASEADDR 0xE0000000
#define XPAR_PS7_UART_0_HIGHADDR 0xE0000FFF
#define XPAR_PS7_UART_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_0_HAS_MODEM 0


/* Definitions for peripheral PS7_UART_1 */
#define XPAR_PS7_UART_1_DEVICE_ID 1
#define XPAR_PS7_UART_1_BASEADDR 0xE0001000
#define XPAR_PS7_UART_1_HIGHADDR 0xE0001FFF
#define XPAR_PS7_UART_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_1_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_0 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_0_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0000000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0000FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_0_HAS_MODEM 0

/* Canonical definitions for peripheral PS7_UART_1 */
#define XPAR_XUARTPS_1_DEVICE_ID XPAR_PS7_UART_1_DEVICE_ID
#define XPAR_XUARTPS_1_BASEADDR 0xE0001000
#define XPAR_XUARTPS_1_HIGHADDR 0xE0001FFF
#define XPAR_XUARTPS_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_1_HAS_MODEM 0


/******************************************************************/

/* Definition for input Clock */
/* Definition for input Clock */
/* Definitions for driver USBPS */
#define XPAR_XUSBPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_USB_0 */
#define XPAR_PS7_USB_0_DEVICE_ID 0
#define XPAR_PS7_USB_0_BASEADDR 0xE0002000
#define XPAR_PS7_USB_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_USB_0 */
#define XPAR_XUSBPS_0_DEVICE_ID XPAR_PS7_USB_0_DEVICE_ID
#define XPAR_XUSBPS_0_BASEADDR 0xE0002000
#define XPAR_XUSBPS_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Definitions for driver VTC */
#define XPAR_XVTC_NUM_INSTANCES 1

/* Definitions for peripheral HDMI_V_TC */
#define XPAR_HDMI_V_TC_DEVICE_ID 0
#define XPAR_HDMI_V_TC_BASEADDR 0x43C30000
#define XPAR_HDMI_V_TC_HIGHADDR 0x43C3FFFF
#define XPAR_HDMI_V_TC_GENERATE_EN 1
#define XPAR_HDMI_V_TC_DETECT_EN 0
#define XPAR_HDMI_V_TC_DET_HSYNC_EN 1
#define XPAR_HDMI_V_TC_DET_VSYNC_EN 1
#define XPAR_HDMI_V_TC_DET_HBLANK_EN 1
#define XPAR_HDMI_V_TC_DET_VBLANK_EN 1
#define XPAR_HDMI_V_TC_DET_AVIDEO_EN 1
#define XPAR_HDMI_V_TC_DET_ACHROMA_EN 0


/******************************************************************/

/* Canonical definitions for peripheral HDMI_V_TC */
#define XPAR_VTC_0_DEVICE_ID XPAR_HDMI_V_TC_DEVICE_ID
#define XPAR_VTC_0_BASEADDR 0x43C30000
#define XPAR_VTC_0_HIGHADDR 0x43C3FFFF
#define XPAR_VTC_0_GENERATE_EN 1
#define XPAR_VTC_0_DETECT_EN 0
#define XPAR_VTC_0_DET_HSYNC_EN 1
#define XPAR_VTC_0_DET_VSYNC_EN 1
#define XPAR_VTC_0_DET_HBLANK_EN 1
#define XPAR_VTC_0_DET_VBLANK_EN 1
#define XPAR_VTC_0_DET_AVIDEO_EN 1
#define XPAR_VTC_0_DET_ACHROMA_EN 0


/******************************************************************/

/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

#endif  /* end of protection macro */
