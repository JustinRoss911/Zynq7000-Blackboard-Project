#include <stdint.h>

#define LED_CTL 0x41210000 // Define the LED control register address
#define SW_DATA  0x41220000  // Define the switch data register address

int main() {
    // Declare pointers for the memory-mapped registers
    volatile uint32_t *led_ctl = (uint32_t *)LED_CTL;
    volatile uint32_t *sw_data = (uint32_t *)SW_DATA;
    while (1) {
        uint32_t value;
        // Inline assembly to load from SW_DATA and store into LED_CTL
        __asm__ volatile (
            "ldr %[val], [%[sw]] \n"  // Load switch value into value
            "str %[val], [%[led]] \n" // Store value into LED control register
            : [val] "=r" (value)      // Output operand (register)
            : [sw] "r" (sw_data),     // Input operand (switch address)
              [led] "r" (led_ctl)     // Input operand (LED address)
            : "memory"                // Clobbered memory
        );
    }
}