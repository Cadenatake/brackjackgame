#include "head.h"
void deal( char **card){
	int i;
	for( i = 0; i < 2; i++){
		card[1][i] = card[0][ 0 + i];//山札の1番と2番を手札に
		card[2][i] = card[0][ 2 + i];//山札の3番と4番を手札に
	}
}