#include "head.h"
void deal( char **card){
	int i;
	for( i = 0; i < 2; i++){
		card[1][i] = card[0][ 0 + i];//�R�D��1�Ԃ�2�Ԃ���D��
		card[2][i] = card[0][ 2 + i];//�R�D��3�Ԃ�4�Ԃ���D��
	}
}