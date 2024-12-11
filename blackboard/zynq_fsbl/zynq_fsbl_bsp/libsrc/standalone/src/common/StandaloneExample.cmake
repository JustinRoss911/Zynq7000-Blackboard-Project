set(CORESIGHTPS_DCC_NUM_DRIVER_INSTANCES "ps7_coresight_comp_0")
set(CORESIGHTPS_DCC0_PROP_LIST "0xf8800000")
list(APPEND TOTAL_CORESIGHTPS_DCC_PROP_LIST CORESIGHTPS_DCC0_PROP_LIST)
set(UARTLITE_NUM_DRIVER_INSTANCES "esp32_uart1")
set(UARTLITE0_PROP_LIST "0x42c00000")
list(APPEND TOTAL_UARTLITE_PROP_LIST UARTLITE0_PROP_LIST)
set(UARTNS550_NUM_DRIVER_INSTANCES "")
set(UARTPS_NUM_DRIVER_INSTANCES "ps7_uart_0;ps7_uart_1")
set(UARTPS0_PROP_LIST "0xe0000000")
list(APPEND TOTAL_UARTPS_PROP_LIST UARTPS0_PROP_LIST)
set(UARTPS1_PROP_LIST "0xe0001000")
list(APPEND TOTAL_UARTPS_PROP_LIST UARTPS1_PROP_LIST)
set(UARTPSV_NUM_DRIVER_INSTANCES "")
set(STDIN_INSTANCE "ps7_uart_0")
set(DEVICE_ID "7z007s" CACHE STRING "Device Id")
set(XPAR_CPU_ID "0")