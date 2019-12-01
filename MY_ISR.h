/* 
 * File:   MY_ISR.h
 * Author: talash.ganvir
 *
 * Created on 21 September, 2019, 10:12 AM
 */

#ifndef MY_ISR_H
#define	MY_ISR_H

#include <xc.h>
void __interrupt(high_priority)isr(void);
unsigned char t;
extern unsigned char g8mSecFlag;
extern unsigned char g9mSecFlag;
extern unsigned char gIntrFlag;

#endif	/* MY_ISR_H */

