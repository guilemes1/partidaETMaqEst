/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 18 de Fevereiro de 2021, 14:57
 */

#include "botoes.h"
#include "contatores.h"
#include "config.h"
#include "delay.h"
#include <xc.h>

void main(void) 
{
    int estado = 0;
    int t;
    
    while(1)
    {
        switch (estado)
        {
            case 0: 
                estado = 1;
                    break;
                    
            case 1:
                contatores_init();
                botoes_init();
                if(s1() == 1)
                estado = 2;
                    break;
            case 2: 
                k1(1);
                k2(1);
                t = 3000;
                estado = 3;
                    break;
                    
            case 3: 
                delay(1);
                --t;
                if(t <= 0)
                    estado = 4;
                    break; 
                    
            case 4:
                k2(0);
                k3(1);
                if(s0() == 1)
                {
                    estado = 5;
                }
                break;
                
            case 5:
                k1(0);
                k2(0);
                k3(0);
                estado = 1;
                break;
        }        
    }
}
