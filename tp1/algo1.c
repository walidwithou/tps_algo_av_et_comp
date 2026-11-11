#include <stdio.h>
#define N1 500
#define N2 300
#define N3 200
#define N4 100
int main(void) {
    int T[N1] , T2[N2] , T3[N3] , T4[N4] ;
    int n = sizeof(T) / sizeof(T[0]); // Dynamically gets the array length (9)
    int i, j, frequence, trouve;
	int cmp=0 ;  
    
    // Remplissage du tableau pire cas 
    for (i=0 ; i<N1 ; i++){
    	T[i] = i+1; 
	}

    for (i = 0; i < n; i++) {
    	//comparaison i < n 
    	cmp++;
        j = 0; // Fixed: Start at 0 to check against all prior elements
        trouve = -1;

        // Check if T[i] was already processed in indices prior to i
        while (j < i && trouve == -1) {
        	//non trouve et j<i
        	cmp ++; 
            if (T[i] == T[j]) {
                trouve = 1;
            } else {
                j++;
            }
        }

        // If T[i] is appearing for the first time
        if (trouve == -1) {
            frequence = 0; // Fixed: Start at 0 because loop includes j = i
            for (j = i; j < n; j++) {
            	cmp++;
                if (T[i] == T[j]) {
                    frequence++;
                }
            }
            printf("frequence de %d est : %d\n", T[i], frequence);
        }
        
        printf("\n\n nombre de comparaisons effecuté : %d" , cmp );
    } 

    return 0;
}
