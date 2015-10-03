# C-FCFS
Implementazione dell'algoritmo FCFS in C.
##How it Works
In poche parole per realizzare questo algoritmo basta sommare tutti i tempi di esecuzione tra di loro tranne l'ultimo.
## Esempio
Tempi di esecuzione = 5,3,8,6

totale = 5+3+8 = 16
# fcfs.h
`float fcfs(int MoT);`

MoT può assumere i seguenti valori:
* 1 --> calcola il totale
* 2 --> calcola la media

Ritorna 0 se i porcessi inseriti sono 0.

