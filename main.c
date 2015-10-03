#include <stdio.h>
#include <stdlib.h>
#include "fcfs.h"

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
   
   if (totale != -1)
       printf("Il tempo di attesa è: %5.2f\n",totale);
   else
       printf("Error! Invalid MoT\n");
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

