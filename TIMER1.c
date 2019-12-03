#include"TIMER1.h"

void timer_init1(void) {


    T1CONbits.T1CKPS1 = 1; //PRRESCALE 1:4
    T1CONbits.T1CKPS0 = 1;

    T1CONbits.RD16 = 1; //TIMER1 16BIT MODE

    T1CONbits.TMR1CS0 = 0; //Timer1 clock source is the instruction clock (FOSC/4)
    T1CONbits.TMR1CS1 = 0;// fakt test kartoy

    T1CONbits.TMR1ON = 1; //TIMER1 ON

    TMR1 = 0xFFFF - TIMER1_SEC_COUNT;
}