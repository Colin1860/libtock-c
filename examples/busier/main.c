#include <stdio.h>
#include <timer.h>
#include <led.h>

int main(void)
{
    for (int count = 0;; count++)
    {
        // being busy and blocking the thread
        delay_ms(200);
        printf("%d", 433 * 43854 << 2 % count);
        led_toggle(2);
    }

    return 0;
}