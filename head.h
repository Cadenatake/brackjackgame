#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
void rule();
int level();
void play( char card[][52], int *chip,int level);
void shuffle( char **card);
void deal( char **card);
void draw( char **card,int level);
double judge( char card[3][52]);
int coin( double dividend, int bet);
int end_judge( int coin);
int continue1();
int main(void);