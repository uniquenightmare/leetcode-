#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,number;
	scanf_s("%d", &x);
	unsigned int transform1(unsigned int value);
	number = transform1(x);
	system("pause");
	return 0;
}
unsigned int transform1(unsigned int value){
	int number[50];
	int length = 0,i=0,j=0;
	length = sizeof(number) / sizeof(number[0]);
	for (i = 0; i < length; i++){
		while(value != 1){
         value = value / 2;
		number[i]= value % 2;
		for (; j >= 0; j--){
           printf("%d",number[j]);
		}
		
		while(value==0)
		{ printf("1");
		break;
		}
		}
	
       
	}
	return  number[50];

}