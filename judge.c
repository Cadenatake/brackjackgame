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
	
	
	printf("�����̎�D���v��%d�ł��I�I\n",x);
	printf("����̎�D���v��%d�ł��I�I\n",y);
	
	
	if(x < 22 && y < 22){
		if( y < x ){
			printf("���҂͎����ł�!\n");
			dividend=1.0;
			for(i=0;card[1][i] !='\0';i++){
				count++;
			}
	if( card[1][0] == 'A' && card[1][1] == 'J' || card[1][0] == 'J' && card[1][1] == 'A'){
		dividend += 1.5;
		printf("�u���b�N�W���b�N!\n");
	}
	if( x <= 21 && count==6 ){
		dividend += 2.0;
		printf("�V�b�N�X�A���_�[!\n");
	}
	if(x <= 21 && count==7 ){
		dividend += 2.5;
		printf("�Z�u���A���_�[!\n");
	}
	if( card[1][0] == '7' && card[1][1] == '7' && card[1][2] == '7'){
		dividend += 3.0;
		printf("�X���[�Z�u��!\n");
	}
	if(x <= 21 && count==11 ){
		dividend += 99.0;
		printf("�C���u���J�[�h!\n");
	}
	
	printf("�z����%.1f�{�ɂȂ�܂�.\n",dividend);
		}else if(x < y ){
			printf("���҂͑���ł�!\n");
		}else{
			printf("��������\n");
		}
	}else if(22 <= x){
		printf("�����̓o�[�X�g!\n");
		printf("����̏���!\n");
	}else {
		printf("����̓o�[�X�g!\n");
		printf("�����̏���!\n");
		dividend=1.0;
	}

	
	return dividend;
}		