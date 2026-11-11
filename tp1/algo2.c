#include <stdio.h>

#define N 500

int main(void) {
    // Sample array for demonstration (adjust array and size as needed)
    int T[N] ;
    int n = sizeof(T) / sizeof(T[0]); // Calculates element count (9)
    
    int i, j, frequence;
    int cmp = 0 ; 
    
    // Remplissage du tableau pire cas 
    for (i=0 ; i<N ; i++){
    	T[i] = i+1; 
	}

    // pour i := 1 à n faire (translated to 0-based indexing: 0 to n-1)
    for (i = 0; i < n; i++) {
    	// comparaison i < n 
    	cmp++ ; 
        // si T[i] <> -1 alors
        if (T[i] != -1) {
            frequence = 1;

            // pour j := i+1 à n faire
            for (j = i + 1; j < n; j++) {
            	cmp++;
                // si T[i] = T[j] alors
                if (T[i] == T[j]) {
                    frequence = frequence + 1;
                    T[j] = -1; // Mark duplicate element as processed
                }
            }

            // écrire ('fréquence de ' T[i] ' = ' fréquence)
            printf("frequence de %d = %d\n", T[i], frequence);
            printf("\n\n nombre de comparaisons effectue : %d" , cmp );
        }
    }

    return 0;
}