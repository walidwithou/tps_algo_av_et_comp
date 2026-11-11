#include <stdio.h>
int cpt = 0 ; 
int somme_recursive_terminale(int * tab , int taille , int acc){
	
	if(taille == 0 ){
		return acc;
	}
	else{
		cpt++ ; 
		return somme_recursive_terminale(tab , taille-1 , acc + tab[taille-1]);
	}
}

int main(){
	int tab[5] = {1,-4,5,5,3} ; 
	int taille = 5 ;
	int acc = 0 ; 
	int som;
	
	som = somme_recursive_terminale(tab , taille ,acc);
	
	printf("la somme de la table est %d" , som);
	printf("\n\n nombres d'entrées a la fct : %d ", cpt ); 

	
}