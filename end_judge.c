/* end_judge */

#include "head.h"

int end_judge(int coin)
{
	int ans=0;
	
    if(coin <= 0 || coin >= 1000){
		printf("��������0�ȉ��܂���1000�ȏ�Ȃ̂ŃQ�[�����I�����܂�");
		exit(0);
	}
	else{
		ans=1;
	}
	
	return ans;
}
