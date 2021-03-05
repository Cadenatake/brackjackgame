/* judge.c*/

#include "head.h"
double judge(char card[3][52])
{
	int i,x = 0,y = 0,count = 0;
	double dividend = 0.0;

	
		for(i=0;card[1][i] !='\0';i++){
			switch (card[1][i]) {
				case 'A':
					x += 11;
					break;
				case '2':
					x += 2;
					break;
				case '3':
					x += 3;	
					break;
				case '4':
					x += 4;
					break;
				case '5':
					x += 5;
					break;
				case '6':
					x += 6;
					break;
				case '7':
					x += 7;
					break;
				case '8':
					x += 8;
					break;
				case '9':
					x += 9;
					break;
				case 't':
					x += 10;
					break;
				case 'J':
					x += 10;
					break;
				case 'Q':
					x += 10;
					break;
				case 'K':
					x += 10;
					break;
			}
		}
		if(21< x){
			x = 0;
			for(i=0;card[1][i] !='\0';i++){
				switch (card[1][i]) {
					case 'A':
						x += 1;
						break;
					case '2':
						x += 2;
						break;
					case '3':
						x += 3;	
						break;
					case '4':
						x += 4;
						break;
					case '5':
						x += 5;
						break;
					case '6':
						x += 6;
						break;
					case '7':
						x += 7;
						break;
					case '8':
						x += 8;
						break;
					case '9':
						x += 9;
						break;
					case 't':
						x += 10;
						break;
					case 'J':
						x += 10;
						break;
					case 'Q':
						x += 10;
						break;
					case 'K':
						x += 10;
						break;
					}
				}
			}
		for(i=0;card[2][i] !='\0';i++){
			switch (card[2][i]) {
				case 'A':
					y += 11;
					break;
				case '2':
					y += 2;
					break;
				case '3':
					y += 3;	
					break;
				case '4':
					y += 4;
					break;
				case '5':
					y += 5;
					break;
				case '6':
					y += 6;
					break;
				case '7':
					y += 7;
					break;
				case '8':
					y += 8;
					break;
				case '9':
					y += 9;
					break;
				case 't':
					y += 10;
					break;
				case 'J':
					y += 10;
					break;
				case 'Q':
					y += 10;
					break;
				case 'K':
					y += 10;
					break;
			}
		}
		if(21< y){
			y = 0;
			for(i=0;card[2][i] !='\0';i++){
				switch (card[2][i]) {
					case 'A':
						y += 1;
						break;
					case '2':
						y += 2;
						break;
					case '3':
						y += 3;	
						break;
					case '4':
						y += 4;
						break;
					case '5':
						y += 5;
						break;
					case '6':
						y += 6;
						break;
					case '7':
						y += 7;
						break;
					case '8':
						y += 8;
						break;
					case '9':
						y += 9;
						break;
					case 't':
						y += 10;
						break;
					case 'J':
						y += 10;
						break;
					case 'Q':
						y += 10;
						break;
					case 'K':
						y += 10;
						break;
					}
				}
			}
	
	
	printf("自分の手札合計は%dです！！\n",x);
	printf("相手の手札合計は%dです！！\n",y);
	
	
	if(x < 22 && y < 22){
		if( y < x ){
			printf("勝者は自分です!\n");
			dividend=1.0;
			for(i=0;card[1][i] !='\0';i++){
				count++;
			}
	if( card[1][0] == 'A' && card[1][1] == 'J' || card[1][0] == 'J' && card[1][1] == 'A'){
		dividend += 1.5;
		printf("ブラックジャック!\n");
	}
	if( x <= 21 && count==6 ){
		dividend += 2.0;
		printf("シックスアンダー!\n");
	}
	if(x <= 21 && count==7 ){
		dividend += 2.5;
		printf("セブンアンダー!\n");
	}
	if( card[1][0] == '7' && card[1][1] == '7' && card[1][2] == '7'){
		dividend += 3.0;
		printf("スリーセブン!\n");
	}
	if(x <= 21 && count==11 ){
		dividend += 99.0;
		printf("イレブンカード!\n");
	}
	
	printf("配当は%.1f倍になります.\n",dividend);
		}else if(x < y ){
			printf("勝者は相手です!\n");
		}else{
			printf("引き分け\n");
		}
	}else if(22 <= x){
		printf("自分はバースト!\n");
		printf("相手の勝ち!\n");
	}else {
		printf("相手はバースト!\n");
		printf("自分の勝ち!\n");
		dividend=1.0;
	}

	
	return dividend;
}		