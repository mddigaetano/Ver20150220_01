#include <stdio.h>
#include <stdlib.h>

#define N 4

int main(int argc, char** argv) {
    int VettoreAnni[N];
    int i, Maggiorenni = 0;
    
    printf("Insersci l'eta' di %d persone\n\n", N);
    
    for(i=0;i<N;i++){
       printf("Inserisci l'eta' della %da persona: ", i+1);
       scanf("%d", &VettoreAnni[i]);
       if(VettoreAnni[i] > 17)
           Maggiorenni++;
    }
    
    printf("\nI maggiorenni sono: %d", Maggiorenni);

    return (EXIT_SUCCESS);
}

