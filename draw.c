#include "head.h" 
void draw(char **card,int level){ 

 int cards,playersum=0,cpusum=0,sentaku,hand=4,hands=4;//すでに４枚配っているから hand=4としている。 
  
   
	printf("\n");
do{ 
  
 scanf("%d",&sentaku);//0か1を選択 
  
 if(sentaku==0){ return;} 
  
 else if(sentaku==1){  
    for( cards = 0; card[1][cards] != '\0'; cards++){ 
 switch (card[1][cards]) { 
  case 'A': 
   playersum += 11; 
   break; 
  case '2': 
   playersum += 2; 
   break; 
  case '3': 
   playersum += 3; 
   break; 
  case '4': 
   playersum += 4; 
   break; 
  case '5': 
   playersum += 5; 
   break; 
  case '6': 
   playersum += 6; 
   break; 
  case '7': 
   playersum += 7; 
   break; 
  case '8': 
   playersum += 8; 
   break; 
  case '9': 
   playersum += 9; 
   break; 
  case 't': 
   playersum += 10; 
   break; 
  case 'J': 
   playersum += 10; 
   break; 
  case 'Q': 
   playersum += 10; 
   break; 
  case 'K': 
   playersum += 10; 
   break; 
 } 

} 
 	    	printf("\n");
 if(playersum > 21){ 
  playersum = 0; 
for( cards = 0; card[1][cards] != '\0'; cards++){ 

   
  switch (card[1][cards]) { 
     case 'A': 
    playersum += 1; 
    break; 
     case '2': 
    playersum += 2; 
    break; 
     case '3': 
    playersum += 3; 
    break; 
     case '4': 
    playersum += 4; 
    break; 
     case '5': 
    playersum += 5; 
    break; 
     case '6': 
    playersum += 6; 
    break; 
     case '7': 
    playersum += 7; 
    break; 
     case '8': 
    playersum += 8; 
    break; 
     case '9': 
    playersum += 9; 
    break; 
     case 't': 
    playersum += 10; 
    break; 
     case 'J': 
    playersum += 10; 
    break; 
     case 'Q': 
    playersum += 10; 
    break; 
     case 'K': 
    playersum += 10; 
    break; 
  } 
 } 
} 

 
  card[1][hands-2]=card[0][hand]; 
    hand = hand + 1; 

  for( cards = 0; card[2][cards] != '\0'; cards++){ 
 switch (card[2][cards]) { 
  case 'A': 
   cpusum += 11; 
   break; 
  case '2': 
   cpusum += 2; 
   break; 
  case '3': 
   cpusum += 3; 
   break; 
  case '4': 
   cpusum += 4; 
   break; 
  case '5': 
   cpusum += 5; 
   break; 
  case '6': 
   cpusum += 6; 
   break; 
  case '7': 
   cpusum += 7; 
   break; 
  case '8': 
   cpusum += 8; 
   break; 
  case '9': 
   cpusum += 9; 
   break; 
  case 't': 
   cpusum += 10; 
   break; 
  case 'J': 
   cpusum += 10; 
   break; 
  case 'Q': 
   cpusum += 10; 
   break; 
  case 'K': 
   cpusum += 10; 
   break; 
 } 
} 
 if(cpusum > 21){ 
  cpusum = 0; 
for( cards = 0; card[2][cards] != '\0'; cards++){ 

  switch (card[2][cards]) { 
     case 'A': 
    cpusum += 1; 
    break; 
     case '2': 
    cpusum += 2; 
    break; 
     case '3': 
    cpusum += 3; 
    break; 
     case '4': 
    cpusum += 4; 
    break; 
     case '5': 
    cpusum += 5; 
    break; 
     case '6': 
    cpusum += 6; 
    break; 
     case '7': 
    cpusum += 7; 
    break; 
     case '8': 
    cpusum += 8; 
    break; 
     case '9': 
    cpusum += 9; 
    break; 
     case 't': 
    cpusum += 10; 
    break; 
     case 'J': 
    cpusum += 10; 
    break; 
     case 'Q': 
    cpusum += 10; 
    break; 
     case 'K': 
    cpusum += 10; 
    break; 
  } 
 } 
} 

  switch(level){ 
   case 1:  
   if(cpusum < 12){ card[2][hands-2]=card[0][hand]; hand = hand+1 ; }  cpusum=0; 
   break; 
   case 2:  
   if(cpusum < 18){ card[2][hands-2]=card[0][hand]; hand = hand+1 ; }  cpusum=0; 
   break; 
   case 3:  
   if(cpusum < 21){ card[2][hands-2]=card[0][hand]; hand = hand+1 ; }  cpusum=0; 
   break; 
     } 

 

    hands = hands + 1; 
  } 
} while(hand<52);//カードは52枚しかないから 最大でここまで  

}