/*
 * Project Name: async_slave_fifo_5bit.cyfx
 * Time : 06/21/2012 14:24:49
 * Device Type: FX3
 * Project Type: GPIF2
 *
 *
 *
 *
 * This is a generated file and should not be modified
 * This file need to be included only once in the firmware
 * This file is generated by Gpif2 designer tool version - 1.0.715.0
 * 
 */

#ifndef _INCLUDED_CYFXGPIF_ASYNCSF_
#define _INCLUDED_CYFXGPIF_ASYNCSF_
#include "cyu3types.h"
#include "cyu3gpif.h"

/* Summary
   Number of states in the state machine
 */
#define CY_NUMBER_OF_STATES 11

/* Summary
   Mapping of user defined state names to state indices
 */
#define ASYNC_SLAVE_FIFO_5BIT_RESET 0x0
#define ASYNC_SLAVE_FIFO_5BIT_IDLE 0x1
#define ASYNC_SLAVE_FIFO_5BIT_READ 0x2
#define ASYNC_SLAVE_FIFO_5BIT_WRITE_START 0x7
#define ASYNC_SLAVE_FIFO_5BIT_WRITE 0x8
#define ASYNC_SLAVE_FIFO_5BIT_SHORT_PKT 0x9
#define ASYNC_SLAVE_FIFO_5BIT_READ_DONE 0x5
#define ASYNC_SLAVE_FIFO_5BIT_ZLP 0xA
#define ASYNC_SLAVE_FIFO_5BIT_READ_WAIT 0x6
#define ASYNC_SLAVE_FIFO_5BIT_PKT_END 0x3
#define ASYNC_SLAVE_FIFO_5BIT_ADDR_SETUP 0x4


/* Summary
   Initial value of early outputs from the state machine.
 */
#define ASYNC_SLAVE_FIFO_5BIT_ALPHA_RESET 0x8


/* Summary
   Transition function values used in the state machine.
 */
uint16_t Async_Slave_Fifo_5Bit_CyFxGpifTransition[]  = {
    0x0000, 0x0202, 0xECEC, 0x2222, 0x5555, 0xAAAA, 0x3F3F, 0x1111, 0x7F7F, 0x7777, 0xCCCC, 0x8888
};

/* Summary
   Table containing the transition information for various states. 
   This table has to be stored in the WAVEFORM Registers.
   This array consists of non-replicated waveform descriptors and acts as a 
   waveform table. 
 */
CyU3PGpifWaveData Async_Slave_Fifo_5Bit_CyFxGpifWavedata[]  = {
    {{0x1E04E001,0x000002C4,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x00000000,0x00000000,0x00000000},{0x3E702003,0x00010016,0x80000000}},
    {{0x5E080305,0x000202CC,0x80000000},{0x4E738306,0x00000000,0x80000000}},
    {{0x9E70070A,0x00000200,0xC0100000},{0x7E70E107,0x00010014,0x80000000}},
    {{0x4E738302,0x1000000A,0xC0000000},{0x1E04E001,0x000002C4,0x80000000}},
    {{0x5E080305,0x000202CC,0x80000000},{0x00000000,0x00000000,0x00000000}},
    {{0x5E700108,0x20020112,0xC0000000},{0x8E040709,0x20000200,0xC0100000}},
    {{0x7E70E107,0x00010014,0x80000000},{0x1E04E001,0x000002C4,0x80000000}},
    {{0x00000000,0x00000000,0x00000000},{0x00000000,0x00000000,0x00000000}},
    {{0x1E04E004,0x800002C4,0xC0000000},{0x3E702003,0x00010016,0x80000000}},
    {{0x4E738302,0x1000000A,0xC0000000},{0x3E702003,0x00010016,0x80000000}}
};

/* Summary
   Table that maps state indices to the descriptor table indices.
 */
uint8_t Async_Slave_Fifo_5Bit_CyFxGpifWavedataPosition[]  = {
    0,1,2,3,1,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,9,2,3,1,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,1,2,3,10,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,1,2,3,1,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,1,2,3,1,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,9,2,3,1,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,10,2,3,10,4,5,6,7,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
    0,1,2,3,1,4,5,6,7,0,0
};

/* Summary
   GPIF II configuration register values.
 */
uint32_t Async_Slave_Fifo_5Bit_CyFxGpifRegValue[]  = {
    0x80000210,  /*  CY_U3P_PIB_GPIF_CONFIG */
    0x00001907,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG */
    0x02030603,  /*  CY_U3P_PIB_GPIF_BUS_CONFIG2 */
    0x00000044,  /*  CY_U3P_PIB_GPIF_AD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATUS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INTR_MASK */
    0x00000082,  /*  CY_U3P_PIB_GPIF_SERIAL_IN_CONFIG */
    0x00000782,  /*  CY_U3P_PIB_GPIF_SERIAL_OUT_CONFIG */
    0x00000500,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DIRECTION */
    0x0000FFCF,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_DEFAULT */
    0x000000FF,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_POLARITY */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_TOGGLE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000018,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000018,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_BUS_SELECT */
    0x00000006,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_CTRL_COUNT_LIMIT */
    0x0000010A,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_ADDR_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_CONFIG */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_STATE_COUNT_LIMIT */
    0x0000010A,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_RESET */
    0x0000FFFF,  /*  CY_U3P_PIB_GPIF_DATA_COUNT_LIMIT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CTRL_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_VALUE */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ADDR_COMP_MASK */
    0x00000000,  /*  CY_U3P_PIB_GPIF_DATA_CTRL */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_DATA */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_INGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x00000000,  /*  CY_U3P_PIB_GPIF_EGRESS_ADDRESS */
    0x80010400,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010401,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010402,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x80010403,  /*  CY_U3P_PIB_GPIF_THREAD_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_LAMBDA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_ALPHA_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_BETA_STAT */
    0x00080000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_CTRL_STAT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH */
    0x00000000,  /*  CY_U3P_PIB_GPIF_WAVEFORM_SWITCH_TIMEOUT */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_CONFIG */
    0x00000000,  /*  CY_U3P_PIB_GPIF_CRC_DATA */
    0xFFFFFFF1  /*  CY_U3P_PIB_GPIF_BETA_DEASSERT */
};

/* Summary
   This structure holds all the configuration inputs for the GPIF II. 
 */
const CyU3PGpifConfig_t Async_Slave_Fifo_5Bit_CyFxGpifConfig  = {
    (uint16_t)(sizeof(Async_Slave_Fifo_5Bit_CyFxGpifWavedataPosition)/sizeof(uint8_t)),
    Async_Slave_Fifo_5Bit_CyFxGpifWavedata,
    Async_Slave_Fifo_5Bit_CyFxGpifWavedataPosition,
    (uint16_t)(sizeof(Async_Slave_Fifo_5Bit_CyFxGpifTransition)/sizeof(uint16_t)),
    Async_Slave_Fifo_5Bit_CyFxGpifTransition,
    (uint16_t)(sizeof(Async_Slave_Fifo_5Bit_CyFxGpifRegValue)/sizeof(uint32_t)),
    Async_Slave_Fifo_5Bit_CyFxGpifRegValue
};

#endif   /* _INCLUDED_CYFXGPIF_ASYNCSF_ */