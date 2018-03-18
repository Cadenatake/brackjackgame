/* end_judge */

#include "head.h"

int end_judge(int coin)
{
	int ans=0;
	
    if(coin <= 0 || coin >= 1000){
		printf("Š‹à‚ª0ˆÈ‰º‚Ü‚½‚Í1000ˆÈã‚È‚Ì‚ÅƒQ[ƒ€‚ğI—¹‚µ‚Ü‚·");
		exit(0);
	}
	else{
		ans=1;
	}
	
	return ans;
}
