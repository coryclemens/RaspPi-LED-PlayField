#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#define LED1 0
#define LED2 1
#define LED3 2
#define LED4 3
#define LED5 4
#define LED6 5


int main(void){
	
	char movement;
	wiringPiSetup();
	pinMode(LED1, OUTPUT);
	digitalWrite(LED1, LOW);
	pinMode(LED2, OUTPUT);
	digitalWrite(LED2, LOW);
	pinMode(LED3, OUTPUT);
	digitalWrite(LED3, LOW);
	pinMode(LED4, OUTPUT);
	digitalWrite(LED4, LOW);
	pinMode(LED5, OUTPUT);
	digitalWrite(LED5, LOW);
	pinMode(LED6, OUTPUT);
	digitalWrite(LED6, LOW);
	
	digitalWrite(LED1, HIGH);
	printf("USE W A S D TO MOVE WITHIN THE 3x2\n\n");
	
	while(1){
		top:
		printf("Current map:\n");
		printf("------------\n");
		printf("%d | %d | %d\n", digitalRead(LED6), digitalRead(LED5), digitalRead(LED4));
		printf("%d | %d | %d\n", digitalRead(LED3), digitalRead(LED2), digitalRead(LED1));
		scanf("%c", &movement);
		
		if(digitalRead(LED1)==1){
			if(movement=='w'){
				digitalWrite(LED1, LOW);
				digitalWrite(LED4, HIGH);
				goto top;
			}
			else if(movement=='a'){
				digitalWrite(LED1, LOW);
				digitalWrite(LED2, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
		if(digitalRead(LED2)==1){
			if(movement=='w'){
				digitalWrite(LED2, LOW);
				digitalWrite(LED5, HIGH);
				goto top;
			}
			else if(movement=='a'){
				digitalWrite(LED2, LOW);
				digitalWrite(LED3, HIGH);
				goto top;
			}
			else if(movement=='d'){
				digitalWrite(LED2, LOW);
				digitalWrite(LED1, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
		if(digitalRead(LED3)==1){
			if(movement=='w'){
				digitalWrite(LED3, LOW);
				digitalWrite(LED6, HIGH);
				goto top;
			}
			else if(movement=='d'){
				digitalWrite(LED3, LOW);
				digitalWrite(LED2, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
		if(digitalRead(LED4)==1){
			if(movement=='a'){
				digitalWrite(LED4, LOW);
				digitalWrite(LED5, HIGH);
				goto top;
			}
			else if(movement=='s'){
				digitalWrite(LED4, LOW);
				digitalWrite(LED1, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
		if(digitalRead(LED5)==1){
			if(movement=='s'){
				digitalWrite(LED5, LOW);
				digitalWrite(LED2, HIGH);
				goto top;
			}
			else if(movement=='a'){
				digitalWrite(LED5, LOW);
				digitalWrite(LED6, HIGH);
				goto top;
			}
			else if(movement=='d'){
				digitalWrite(LED5, LOW);
				digitalWrite(LED4, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
		if(digitalRead(LED6)==1){
			if(movement=='d'){
				digitalWrite(LED6, LOW);
				digitalWrite(LED5, HIGH);
				goto top;
			}
			else if(movement=='s'){
				digitalWrite(LED6, LOW);
				digitalWrite(LED3, HIGH);
				goto top;
			}
			else{
				printf("Invalid movement key\n\n");
				goto top;
				
			}
		}
	
}
	
	
	
	return 1;
}
