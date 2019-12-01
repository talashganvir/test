#include <pic18f87k22.h>

#include"TIMER.h"
#include"TIMER1.h"
#include"TIMER2.h"
#include"MY_ISR.h"
unsigned char gIntrFlag = 0;
unsigned char g8mSecFlag = 0;
unsigned char g9mSecFlag = 0;

void __interrupt(high_priority)isr(void)
{


    //    if (RC1IE == 1 && PIR1bits.RCIF == 1) //The EUSART receive buffer, RCREG1, is full (cleared when RCREG1 is read)
    //    {
    //        TXREG = RCREG;
    //        while (PIR1bits.TXIF == 0);
    //        RCIF = 0;
    //
    //    }
    if (PIE1bits.TMR1IE == 1 && PIR1bits.TMR1IF == 1)
    {
        g9mSecFlag = 1;
        TMR1 = 0xFFFF - TIMER1_SEC_COUNT;
        PIR1bits.TMR1IF = 0;

    }
    if (TMR3IE == 1 && TMR3IF == 1)
    {
        g8mSecFlag = 1;
        TMR3 = 0xFFFF - FOUR_mSec_Count;
        TMR3IF = 0;
    }
  
}



