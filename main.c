#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"
//float fcfs(int MoT); // 1 per il totale 2 per la media
void menu();

int main(int argc, char** argv) {
    
   float totale; 
   int MoT;                                                

   menu();
   
   printf("[1]Totale\t[2]Media\t[0]Exit\n");
   scanf("%d",&MoT);
   
   if (!MoT)
       exit(EXIT_SUCCESS);
   
   totale = fcfs(MoT);
   
    printf("Il tempo di attesa medio è: %5.2f\n",totale);
   
    return (EXIT_SUCCESS);
}


void menu(){
    printf(" ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄\n"); 
    printf("▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌\n");
    printf("▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀ \n");
    printf("▐░▌          ▐░▌          ▐░▌          ▐░▌          \n");
    printf("▐░█▄▄▄▄▄▄▄▄▄ ▐░▌          ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄ \n");
    printf("▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌\n");
    printf("▐░█▀▀▀▀▀▀▀▀▀ ▐░▌          ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀█░▌\n");
    printf("▐░▌          ▐░▌          ▐░▌                    ▐░▌\n");
    printf("▐░▌          ▐░█▄▄▄▄▄▄▄▄▄ ▐░▌           ▄▄▄▄▄▄▄▄▄█░▌\n");
    printf("▐░▌          ▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌\n");
    printf(" ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀            ▀▀▀▀▀▀▀▀▀▀▀ \n");
}

