#include <stdio.h>

int cpt=0;

int somme_rescursive_nonterminale(int *tab , int taille ){
	
	if(taille == 0){
		return 0 ; 
	}else{
		cpt++;
		
		return  tab[taille-1] + somme_rescursive_nonterminale(tab,taille-1);
		
	}
}

int main(){
	
	int tab[5] = {-11,-13,-4,1,4} ;
	
	printf("la somme des elements de tableau  : %d " , somme_rescursive_nonterminale(tab , 5));
	printf("\n\n nombres d'entrées a la fct : %d ", cpt ); 
	
	
}