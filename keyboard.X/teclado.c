
/*
 * File:   teclado.c
 * Author: 20185206
 *
 * Created on 7 de Maio de 2021, 14:36
 */


#include <xc.h>
#define MASK         0x10

void teclado_init( void )
{
    TRISB = 0xF0;
    ANSELH = 0;
    PORTB = 0;
}

const char tabteclado[4][4] = 
{   {'1','2','3','A'},                                
    {'4','5','6','B'},                               
    {'7','8','9','C'},                              
    {'*','0','#','D'} };

 char teclado( void )
{
     char tecla = 0;
     char c, i;
    
    for(i=0; i<4; i++ )
    {
        PORTB = 0x01<<i;
        
        for( c=0; c<4; c++)
        {
            if( PORTB & MASK<<c )
                tecla = tabteclado[i][c];
        }
    }   
    return( tecla);
}



