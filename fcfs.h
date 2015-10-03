float fcfs(int MoT){
    int processi;
    int time;
    int i;
    float totale;
    
    printf("Inserisci il numero di processi: ");
    scanf("%d",&processi);
    
    if(processi == 0)
        return(0);
    
    i = processi;
    while(i){
        printf("Inserisci la durata del processo: ");
        scanf("%d",&time);
        
        totale += time;
        i--;
    }
    totale -= time;
    
    if (MoT == 1)
        return totale;
    else
        return totale/processi;
}
