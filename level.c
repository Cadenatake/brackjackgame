#include "head.h"
int level(){
	int setlevel = 0;
	while(1){
		printf("レベルを選択してください（1～3）：");
		scanf("%d", &setlevel);
		if( 0 < setlevel && setlevel < 4)break;
		printf("不正な入力値です");
	}
return setlevel;
}