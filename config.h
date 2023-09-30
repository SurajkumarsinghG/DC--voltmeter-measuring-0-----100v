/*
 * File:   config.h
 * Author: Suraj kumar
 *
 * Created on 29 September, 2023, 8:05 PM
 */



#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits 
#pragma config WDTE = OFF       // Watchdog Timer Enable bit 
#pragma config PWRTE = OFF      // Power-up Timer Enable bit 
#pragma config MCLRE = ON       // RA3/MCLR pin function select
#pragma config BOREN = ON       // Brown-out Detect Enable bit
#pragma config CP = OFF         // Code Protection bit (
#pragma config CPD = OFF        

// #pragma config statements should precede project file includes, if not define then define


#include <xc.h>
#include <stdint.h>
#define _XTAL_FREQ  4000000ul
#define MAJOR_NUMBER      1u
#define MINOR_NUMBER      0u

// Function Prototypes
uint32_t millis( void );
void InitTimer0();

#ifdef	__cplusplus
}
#endif

#endif	2