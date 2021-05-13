/*
 * File:   delay.c
 * Author: 20185206
 *
 * Created on 7 de Maio de 2021, 14:36
 */


#include <xc.h>
#include "delay.h"

void delay ( unsigned int t)
{
    while ( t )
    {
        __delay_ms( 1 );
        --t;
    }
}

