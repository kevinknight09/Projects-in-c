
//code for prediction of offsprings name from mothers and fathers name//
//Developed and conceptualized in C by Rounak//
#include<stdio.h>

#include<string.h>

#include<conio.h>

#include<stdlib.h>

void main()
{
	char f[40],m[40],s[40],of1[40],om1[40],of2[40],om2[40];
	
	char option;
	
	int n1,n2,i,j,k,h;
	
	int l1,l2;
	
	//for taking the fathers name //
	
	printf("Enter the name of father\n");
	gets(f);
	
	printf("The name of the father is:\n");
	puts(f);
	
	//for taking the mothers name//
	
	printf("Enter the name of mother\n");
	gets(m);
	
	printf("The name of the mother is:\n");
	puts(m);
	
	printf("enter the preferred surname\n");
	gets(s);
	
	//determining the lenght of the name of both the father and mother//
	//using  predefined string functions//
	
	l1=strlen(f);

	l2=strlen(m);
	
	
printf("what kind of name do you want\n");

printf("press 'm' for male name and press 'f' for female name\n");

option=getche();

	
//while loop for putting the option and working in it//
while(option==m);
{
	
  for(i=0;i<l1/2;i++){
  of1[i]=f[0+i];
}
  of1[i]='\0';


  for(j=0;j<l2/2;j++)
{
	 om1[j]=m[0+j];
}
 om1[j]='\0';

  printf("\n");

  printf("The name of the male child is\n");

 strcat(of1,om1);

 printf("%s",of1);

 printf("\n");

 puts(s);

}

while(option==f);
{
	
	for(k=0;k<l1/2;k++)
	{
		of2[k]=f[0+k];
	}
	of2[k]='\0';
	
	
    for(h=0;h<l2/2;h++)
    {
    	om2[h]=m[0+h];
    }
    om2[h]='\0';
        
    printf("the name of the female child is\n");
    
	strcat(om2,of2);
    
	printf("%s",om2);
    
	printf("\n");
    
	puts(s);
}


}

