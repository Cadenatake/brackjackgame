#include "head.h"
int level(){
	int setlevel = 0;
	while(1){
		printf("���x����I�����Ă��������i1�`3�j�F");
		scanf("%d", &setlevel);
		if( 0 < setlevel && setlevel < 4)break;
		printf("�s���ȓ��͒l�ł�");
	}
return setlevel;
}