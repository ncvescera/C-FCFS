#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int processi;
    int time;
    int i;
    float totale;
    
    printf("Inserisci il numero di processi: ");
    scanf("%d",&processi);
    
    if(processi == 0)
        exit(1);
    i = processi;
    while(i){
        printf("Inserisci la durata del processo: ");
        scanf("%d",&time);
        
        totale += time;
        i--;
    }
    
    totale -= time;
    printf("Il tempo di attesa totale è: %5.2f\n",totale);
    totale /= processi;
    printf("Il tempo di attesa medio è: %5.2f\n",totale);
    return (EXIT_SUCCESS);
}

