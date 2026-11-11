#include <stdio.h>

#define MAX 5000
#define N 500

int main(void) {
    // Sample input array T (values must be positive integers <= MAX)
    int T[N] ;
    int n = sizeof(T) / sizeof(T[0]);

    // Array of size MAX + 1 to handle values from 0 up to MAX directly as indices
    int frequence[MAX + 1];
    int i;
    int cmp = 0 ;
    
    //Remplissage de tableau 
    
    for(i=0 ; i<n ; i++){
    	T[i] = i+1 ; 
	}

    // Green Box: Initialize the frequency array to 0
    // pour i := 1 à max faire fréquence[i] := 0;
    for (i = 0; i <= MAX; i++) {
    	cmp++;
        frequence[i] = 0;
    }

    // Red Box: Count occurrences of each number in T
    // pour i := 1 à n faire fréquence[T[i]] := fréquence[T[i]] + 1;
    for (i = 0; i < n; i++) {
    	cmp ++ ; 
        frequence[T[i]] = frequence[T[i]] + 1;
    }

    // Blue Box: Print values that occurred at least once
    // pour i := 1 à max faire si fréquence[i] <> 0 alors écrire(...)
    for (i = 0; i <= MAX; i++) {
    	cmp++;
        if (frequence[i] != 0) {
            printf("frequence de %d = %d\n", i, frequence[i]);
        }
    }
    
    printf("\n\n nombre de comaparaisons effectue : %d" , cmp );

    return 0;
}