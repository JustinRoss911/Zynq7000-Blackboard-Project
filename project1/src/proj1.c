#include <stdint.h>

#define LED_CTL 0x41210000  // Define the LED control register address
#define SW_DATA 0x41220000  // Define the switch data register address
#define BT_DATA 0x41200000  // Define the button data register address

void task1(uint32_t *led_ctl,uint32_t *sw_data);
void task2(uint32_t *led_ctl,uint32_t *sw_data);
void task3(uint32_t *led_ctl,uint32_t *bt_data);
void task4(uint32_t *led_ctl,uint32_t *sw_data, uint32_t *bt_data);

int main() {
    // Declare pointers for the memory-mapped registers
    volatile uint32_t *led_ctl = (uint32_t *)LED_CTL;
    volatile uint32_t *sw_data = (uint32_t *)SW_DATA;
    volatile uint32_t *bt_data = (uint32_t *)BT_DATA;

    //task1(led_ctl,sw_data);
    //task2(led_ctl,sw_data);
    //task3(led_ctl,bt_data);
    task4(led_ctl,sw_data,bt_data);

    return 0;
}

// Task 1 is demo code provided by realdigital.org course that switches the LEDs on
// when the switches are set to on position
void task1(uint32_t *led_ctl,uint32_t *sw_data){
    while (1){
        uint32_t value = *sw_data; // get value in switch register.
        *led_ctl = value; // set led register to value.
    }
    return;
}

// Task 2 is to invert the signal from the switches so that the LEDs turn on
// when the swtiches are in the off position
void task2(uint32_t *led_ctl,uint32_t *sw_data){
    while (1){
        uint32_t value = *sw_data;
        *led_ctl = ~value;
    }
    return;
}

// Task 3 is to use the pushbuttons to turn on LEDs
void task3(uint32_t *led_ctl,uint32_t *bt_data){
    while (1){
        uint32_t value = *bt_data;
        *led_ctl = value;
    }
    return;
}

// Tasks after this were trivial to implement because they simply wanted me to
// setup states based on values of registers. Instead I opted to code my own
// task that pertained from the challenges and other tasks for the rest of this projects
// Task 4 is to use create a two-state machine that turns an LED off/on
// when the value in the swtich register is greater than 4.
void task4(uint32_t *led_ctl,uint32_t *sw_data, uint32_t *bt_data){
    while (1){
        uint8_t value1 = (uint8_t)*bt_data;
        uint16_t value2 = (uint16_t)*sw_data;
        if (*sw_data == *bt_data) {
        *led_ctl = 1;
        }
        else {
        *led_ctl = 0;
        }
    }
    return;
}