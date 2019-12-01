#include"TIMER.h"

void TOdelay_Ms(float COUNT) {
    T0CONbits.T08BIT = 0; // 16 Bit timer
    T0CONbits.T0CS = 0; // Internal clock
    T0CONbits.PSA = 0;
    T0CONbits.T0PS = 0;
    
    TMR0 = 0xFFFF - COUNT;
    T0CONbits.TMR0ON = 1; // Turn Timer0 on
    while (INTCONbits.TMR0IF == 0);
    T0CONbits.TMR0ON = 0;
    INTCONbits.TMR0IF = 0;
}


