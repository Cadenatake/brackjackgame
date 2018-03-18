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
		printf("ベットするコインの枚数を入力してください\n10~所持枚数:");
		scanf("%d", &bet);
		if( *chip >= bet && bet >= 10)break;
	}
	printf("\n\nデバックメッセージここから\n%s",card2[0]);//デバック用
	printf("\ncard[0][3]の値:%c",card2[0][3]);//デバック用
	
	deal( card2);
	printf("\ncard[1][1]の値:%c",card2[1][1]);//デバック用
	printf("\ncard[2][1]の値:%c",card2[2][1]);//デバック用

	draw( card2, setlevel);
	printf("\ncard[1]のカード:%s",card2[1]);//デバック用
	printf("\ncard[2]のカード:%s\nここまで\n\n",card2[2]);//デバック用
	
	dividend = judge( card);
	

	
	*chip -= bet;
	*chip += coin( dividend, bet);
}