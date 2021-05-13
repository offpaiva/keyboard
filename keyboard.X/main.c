/*
 * File:   main.c
 * Author: 20185206
 *
 * Created on 7 de Maio de 2021, 13:49
 */


#include <xc.h>
#include "config.h"
#include "dispLCD4vias.h"
#include "teclado.h"
#include "delay.h"


void main(void)
{
    char str[] = "Tecla           ";
    
    dispLCD_init();
    teclado_init();
    
    dispLCD(0,0,"SENAI Keyboard");
    while( 1 )
    {
        str[7] = teclado();
        if(str[7]==0)
            str[7] = ' ';
        dispLCD(1,0, str );
    }
}


