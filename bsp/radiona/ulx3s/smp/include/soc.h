#ifndef SOC_H
#define SOC_H
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_INTERRUPT 0
#define SYSTEM_PLIC_SYSTEM_CORES_0_EXTERNAL_SUPERVISOR_INTERRUPT 1
#define SYSTEM_PLIC_SYSTEM_UART_A_INTERRUPT 1
#define SYSTEM_PLIC_SYSTEM_UART_B_INTERRUPT 2
#define SYSTEM_PLIC_SYSTEM_MAC_INTERRUPT 3
#define SYSTEM_PLIC_SYSTEM_GPIO_A_INTERRUPTS_15 4
#define SYSTEM_PLIC_SYSTEM_DMA_VGA_CHANNEL_INTERRUPT 12
#define SYSTEM_PLIC_SYSTEM_DMA_AUDIO_OUT_CHANNEL_INTERRUPT 13
#define SYSTEM_CLINT_HZ 52000000
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_DATA_WIDTH_MAX 8
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CLOCK_DIVIDER_WIDTH 12
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_PRE_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_SAMPLING_SIZE 3
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_POST_SAMPLING_SIZE 1
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_CTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RTS_GEN 0
#define SYSTEM_UART_A_PARAMETER_UART_CTRL_CONFIG_RX_SAMPLE_PER_BIT 5
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_BAUDRATE 115200
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_DATA_LENGTH 7
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_PARITY NONE
#define SYSTEM_UART_A_PARAMETER_INIT_CONFIG_STOP ONE
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_CLOCK_DIVIDER_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_BUS_CAN_WRITE_FRAME_CONFIG 0
#define SYSTEM_UART_A_PARAMETER_TX_FIFO_DEPTH 128
#define SYSTEM_UART_A_PARAMETER_RX_FIFO_DEPTH 128
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_DATA_WIDTH_MAX 8
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_CLOCK_DIVIDER_WIDTH 20
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_PRE_SAMPLING_SIZE 1
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_SAMPLING_SIZE 3
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_POST_SAMPLING_SIZE 1
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_CTS_GEN 0
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_RTS_GEN 0
#define SYSTEM_UART_B_PARAMETER_UART_CTRL_CONFIG_RX_SAMPLE_PER_BIT 5
#define SYSTEM_UART_B_PARAMETER_INIT_CONFIG_BAUDRATE 115200
#define SYSTEM_UART_B_PARAMETER_INIT_CONFIG_DATA_LENGTH 7
#define SYSTEM_UART_B_PARAMETER_INIT_CONFIG_PARITY NONE
#define SYSTEM_UART_B_PARAMETER_INIT_CONFIG_STOP ONE
#define SYSTEM_UART_B_PARAMETER_BUS_CAN_WRITE_CLOCK_DIVIDER_CONFIG 1
#define SYSTEM_UART_B_PARAMETER_BUS_CAN_WRITE_FRAME_CONFIG 1
#define SYSTEM_UART_B_PARAMETER_TX_FIFO_DEPTH 512
#define SYSTEM_UART_B_PARAMETER_RX_FIFO_DEPTH 512
#define SYSTEM_MAC_PARAMETER_PHY_TX_DATA_WIDTH 2
#define SYSTEM_MAC_PARAMETER_PHY_RX_DATA_WIDTH 2
#define SYSTEM_MAC_PARAMETER_RX_DATA_WIDTH 32
#define SYSTEM_MAC_PARAMETER_TX_DATA_WIDTH 32
#define SYSTEM_MAC_PARAMETER_RX_BUFFER_BYTE_SIZE 4096
#define SYSTEM_MAC_PARAMETER_TX_BUFFER_BYTE_SIZE 4096
#define SYSTEM_MAC_PARAMETER_TX_AVAILABILITY_WIDTH 11
#define SYSTEM_CORES_0_D_BUS 0x0
#define SYSTEM_FABRIC_D_BUS_COHERENT_BMB 0x0
#define SYSTEM_FABRIC_EXCLUSIVE_MONITOR_INPUT 0x0
#define SYSTEM_FABRIC_EXCLUSIVE_MONITOR_OUTPUT 0x0
#define SYSTEM_FABRIC_INVALIDATION_MONITOR_INPUT 0x0
#define SYSTEM_FABRIC_INVALIDATION_MONITOR_OUTPUT 0x0
#define SYSTEM_FABRIC_D_BUS_BMB 0x0
#define SYSTEM_D_BUS32_BMB 0x0
#define SYSTEM_BMB_PERIPHERAL_BMB 0x10000000
#define SYSTEM_PLIC_CTRL 0x10c00000
#define SYSTEM_CLINT_CTRL 0x10b00000
#define SYSTEM_SDRAM_A_CTRL 0x10100000
#define SYSTEM_SYSTEM_CTRL_CTRL 0x10bff000
#define SYSTEM_GPIO_A_CTRL 0x10000000
#define SYSTEM_UART_A_CTRL 0x10010000
#define SYSTEM_UART_B_CTRL 0x10011000
#define SYSTEM_SPI_A_CTRL 0x10020000
#define SYSTEM_MAC_CTRL 0x10040000
#define SYSTEM_DMA_CTRL 0x10080000
#define SYSTEM_VGA_CTRL 0x10090000
#define SYSTEM_AUDIO_OUT_CTRL 0x10094000
#define SYSTEM_RAM_A_CTRL 0x10a00000
#define SYSTEM_SDRAM_A0_BMB 0x80000000
#endif
