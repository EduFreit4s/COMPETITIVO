  
// ================================================================
//            ========= lib para benchmarking =========
//
// void ms() plota tempo de execução em ms
// double dt() retorna o tempo de exercução em ms
//
// obs 1 - chamar a função nas extremidades do código a ser testado
// obs 2 - chamar um par de função por vez
// ================================================================

#ifndef BENCHMARKING_H
#define BENCHMARKING_H
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define WHITE "\033[0m"

#include <time.h>
#include <stdio.h>
#include <stdbool.h>

clock_t tempo[2]; 
bool event=false; 

bool trigger(){ return event=!event; }

void ms(){
    tempo[event] = clock();
    if(!trigger()) printf("\n"GREEN"%.lf ms\n", (tempo[1]-tempo[0])*1000.0/CLOCKS_PER_SEC);
    printf(WHITE); 
}

double dt(){
    tempo[event] = clock();
    return (trigger()) ? -1 : (tempo[1]-tempo[0])*1000.0/CLOCKS_PER_SEC; 
}

#endif // BENCHMARKING_H

