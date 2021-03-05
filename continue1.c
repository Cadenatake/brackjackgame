/* continue1 */

#include "head.h"

int continue1()
{
   	int num,ans=0;
	
	printf("ゲームを継続しますか?\n");
	printf("継続は1終了は0を入力してください。\n");
	do {
		scanf("%d", &num);
		if (num < 0 || num > 1) {
			printf("指定の数値を入力してください\n");
		}
	} while (num < 0 || num > 1);
	
	
	if(num==0){
		printf("ゲームを終了します。");
		exit(0);
	}
	else{
		ans=1;
	}
	return ans;
	
}