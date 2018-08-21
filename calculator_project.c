//c code for simple calculator made by Rounak with sound//
// add include<dos.h> and sound(); function in turbo c++//
// dos.h is not detected in dev c++//
#include<stdio.h>
#include<conio.h>

void main(){
	
	int n,num1,num2,result;
	char option,y;
do{
	printf(" what operation do you want to do\n");
	
	
	printf("PRESS 1 FOR ADDITION :\n");
	printf("PRESS 2 FOR SUBTRACTION :\n");
	printf("PRESS 3 FOR MULTIPLICATION\n");
	printf("PRESS 4 FOR DIVISION\n");
	
scanf("%d",&n);

printf("enter the first number\n");
scanf("%d",&num1);

printf("enter the second number\n");
scanf("%d",&num2);

switch(n){

case 1: result=num1 + num2;
printf("the result of addition is =%d\n",result);
break;

case 2: result = num1 - num2;
printf("the result of subtraction is =%d\n",result);
break;

case 3: result= num1*num2;
printf("the result of multiplication  is=%d\n",result);
break;

case 4: result = num1/num2;
printf("the result of division  is = %d\n",result);
break;

}
printf("\n do you want to continue y/n?");
option=getche();
}
while(option=='y');
}



	
	
