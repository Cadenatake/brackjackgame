#include "head.h"
void shuffle( char **card){
	int j, r;
	char tmp;
	
	srand(time(NULL));
	
	
	for(j=0;j<51;j++){
		
		r=rand()%51;
		
		tmp = card[0][j];
		card[0][j] = card[0][r];
		card[0][r] = tmp;
	}
}