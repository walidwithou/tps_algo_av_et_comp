#include <stdio.h>

int somme_iterative(int * tab , int taille){
	int acc = 0; 
	
	for (int i=0 ; i<taille ; i++){
		acc = acc + tab[i];
	}
	
	return acc ; 
}

int main(){
	int tab[4] = {-2,-4,-4,-2} ; 
	printf("somme : %d " , somme_iterative(tab , 4));
}