#include <stdio.h>
#include <timer.h>
#include <led.h>

int main(void)
{
    for (int count = 0;; count++)
    {
        // being busy and blocking the thread
        delay_ms(100);
        printf("%d", 433 * 43854 << 2 % count);
        led_toggle(3);
    }

    return 0;
}