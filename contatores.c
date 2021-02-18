/*
 * File:   contatores.c
 * Author: 20185189
 *
 * Created on 18 de Fevereiro de 2021, 15:03
 */


#include <xc.h>

#define K1 PORTDbits.RD7
#define K2 PORTDbits.RD6
#define K3 PORTDbits.RD5



void contatores_init (void)
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
}

void k1(int estado)
{
    K1 = estado;
}

void k2(int estado)
{
    K2 = estado;
}

void k3(int estado)
{
    K3 = estado;
}

char K1status (void)
{
    return(K1);
}
