/*
 * File:   botoes.c
 * Author: 20185189
 *
 * Created on 18 de Fevereiro de 2021, 15:04
 */


#include <xc.h>

#define S1 PORTDbits.RD1
#define S0 PORTDbits.RD0


void botoes_init (void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;        
}

char s1(void)
{
    return(S1);
}

char s0(void)
{
    return(S0);
}

