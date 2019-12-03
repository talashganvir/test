#include"TIMER2.h"

void TIMER3_Init(void)
{
    T3CONbits.T3CKPS0 = 1; //PRRESCALE 1:8
    T3CONbits.T3CKPS1 = 1;

    T3CONbits.RD16 = 1; //TIMER1 16BIT MODE

    T3CONbits.TMR3CS0 = 0; //Timer1 clock source is the instruction clock (FOSC/4)
    T3CONbits.TMR3CS1 = 0;

    T3CONbits.TMR3ON = 1; //TIMER1 ON

    TMR3 = 0xFFFF - FOUR_mSec_Count;

}
