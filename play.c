#include "head.h"

void play( char card[][52], int *chip, int setlevel)
{
	int bet;
	int i, j;
	double dividend=0;
	char *card2[3];
	
	for( i = 0; i < 3; i++){
		card2[i] = card[i];
	}
	
	shuffle( card2);
	while(1){
		printf("�x�b�g����R�C���̖�������͂��Ă�������\n10~��������:");
		scanf("%d", &bet);
		if( *chip >= bet && bet >= 10)break;
	}
	printf("\n\n�f�o�b�N���b�Z�[�W��������\n%s",card2[0]);//�f�o�b�N�p
	printf("\ncard[0][3]�̒l:%c",card2[0][3]);//�f�o�b�N�p
	
	deal( card2);
	printf("\ncard[1][1]�̒l:%c",card2[1][1]);//�f�o�b�N�p
	printf("\ncard[2][1]�̒l:%c",card2[2][1]);//�f�o�b�N�p

	draw( card2, setlevel);
	printf("\ncard[1]�̃J�[�h:%s",card2[1]);//�f�o�b�N�p
	printf("\ncard[2]�̃J�[�h:%s\n�����܂�\n\n",card2[2]);//�f�o�b�N�p
	
	dividend = judge( card);
	

	
	*chip -= bet;
	*chip += coin( dividend, bet);
}