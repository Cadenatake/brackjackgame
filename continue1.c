/* continue1 */

#include "head.h"

int continue1()
{
   	int num,ans=0;
	
	printf("�Q�[�����p�����܂���?\n");
	printf("�p����1�I����0����͂��Ă��������B\n");
	do {
		scanf("%d", &num);
		if (num < 0 || num > 1) {
			printf("�w��̐��l����͂��Ă�������\n");
		}
	} while (num < 0 || num > 1);
	
	
	if(num==0){
		printf("�Q�[�����I�����܂��B");
		exit(0);
	}
	else{
		ans=1;
	}
	return ans;
	
}