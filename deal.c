#include "head.h"
void deal( char **card){
	int i;
	for( i = 0; i < 2; i++){
		card[1][i] = card[0][ 0 + i];//ŽRŽD‚Ì1”Ô‚Æ2”Ô‚ðŽèŽD‚É
		card[2][i] = card[0][ 2 + i];//ŽRŽD‚Ì3”Ô‚Æ4”Ô‚ðŽèŽD‚É
	}
}