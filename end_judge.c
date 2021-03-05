/* end_judge */

#include "head.h"

int end_judge(int coin)
{
	int ans=0;
	
    if(coin <= 0 || coin >= 1000){
		printf("所持金が0以下または1000以上なのでゲームを終了します");
		exit(0);
	}
	else{
		ans=1;
	}
	
	return ans;
}
