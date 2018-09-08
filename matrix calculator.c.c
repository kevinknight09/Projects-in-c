//Matrix Calculator//

//code for finding all the basic operations of a matrix of a matrix//

//developed and conceptualized in c by rounak//

#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{

//declaring all the variables needed for the matirx calculator project//

int m1[10][10],m2[10][10],m3[10][10];
int n,r,c,r1,c1,r2,c2;
int d,d1,d2,d3,d4;
int i,j,k,l;
int sum;
char option,y;

do
{
//commands that it can perform when the correct option is pressed// 

printf("\t$Enter '1' for addition of two matrix\n");

printf("\t$Enter '2' for subtraction of two matrix\n");

printf("\t$Enter '3' for multiplication two of matrix\n");

printf("\t$Enter '4' for finding the determinant of a matrix\n");

printf("\t$Enter '5' for finding the inverse of a matrix\n");

scanf("%d",&n);

switch(n)
{

case 1:

printf("YOU HAVE SELECTED ADDITION\n");

printf("enter the order of the first matrix\n");
scanf("%d%d",&r1,&c1);

printf("enter the order of the second matrix\n");
scanf("%d%d",&r2,&c2);

if(r2!=r1)
{
printf("invalid matrices for addition\n");
}
if(c1!=c2)
{
printf("invalid matrices for addition\n");
}

for(i=1;i<=r1;i++){
for(j=1;j<=c1;j++){

printf("enter the %d`%d element in first matrix\n",i,j);

scanf("%d",&m1[i][j]);
}
}

for(i=1;i<=r1;i++){
for(j=1;j<=c1;j++){

printf("enter the %d`%d element in second matrix\n",i,j);

scanf("%d",&m2[i][j]);

}
}

for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
{
m3[i][j]=m1[i][j]+m2[i][j];
}
}

printf("the sum of the matrices is given by 3rd matrix\n");

for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
{

printf("%d\t",m3[i][j]);
}
printf("\n");
}
break;

case 3:

printf("YOU HAVE SELECTED MULTIPLICATION\n");

//code for implementation of multiplication of two matrix//

printf("enter the order of the first matrix\n");
scanf("%d%d",&r1,&c1);

printf("enter the order of the second matrix\n");
scanf("%d%d",&r2,&c2);

if(r1!=c2)
{
printf("multiplicaton is not possible\n");
break ;
}

for(i=1;i<=r1;i++)
{
for(j=1;j<=c1;j++)
{
printf("Enter the %d`%d element in first matrix\n",i,j);

scanf("%d",&m1[i][j]);
}
}

for(i=1;i<=r2;i++)
{
for(j=1;j<=c2;j++)
{
printf("Enter the %d`%d element in second matrix\n",i,j);

scanf("%d",&m2[i][j]);
}
}

for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
{
m3[i][j]=0;
for(k=1;k<=r2;k++){

m3[i][j]=(m3[i][j] + m1[i][k]*m2[k][j]);
}
}
}

printf("The product of the the matrices\n");

for(i=1;i<=r1;i++)
{
for(j=1;j<=c2;j++)
{
printf("%d\t",m3[i][j]);
}
printf("\n");
}

break ;


case 2:

printf("YOU HAVE SELECTED SUBTRACTION\n");

//code part of subtraction of two matrices//
//very similar to addition with little variation//

printf("enter the order of the first matrix\n");
scanf("%d%d",&r1,&c1);

printf("enter the order of the second matrix\n");
scanf("%d%d",&r2,&c2);

if(r2!=r1)
{
printf("invalid matrices for subtraction\n");

}

if(c1!=c2)
{
printf("invalid matrices for subtraction\n");

}
for(i=1;i<=r1;i++){
for(j=1;j<=c1;j++){
printf("enter the %d`%d element in first matrix\n",i,j);

scanf("%d",&m1[i][j]);
}
}
for(i=1;i<=r2;i++){
for(j=1;j<=c2;j++){
printf("enter the %d`%d element in second matrix\n",i,j);

scanf("%d",&m2[i][j]);
}
}

for(i=1;i<=r1;i++){
for(j=1;j<=c2;j++){

m3[i][j]=((m1[i][j])-(m2[i][j]));
}
}
printf("The matrix after subtraction of the matrices\n");
for(i=1;i<=r1;i++){
for(j=1;j<=c2;j++){
printf("%d\t",m3[i][j]);
}
printf("\n");
}

break ;


case 4 :

//determinant of a matrix part well works for 3rd order and 2nd order matrices//
//4th order is going to arrive soon//

printf("YOU HAVE SELECTED DETERMINANT\n");

printf("enter the order of the matrix\n");

scanf("%d%d",&r,&c);

if(r==4)
{
printf("work under progress\n");
break;
}

if(r!=c){
printf("determinant of such matrix is not possible\n");
break ;
}
for(i=1;i<=r;i++){
for(j=1;j<=r;j++){

printf("enter the %d`%d element in the mattress\n",i,j);
scanf("%d",&m1[i][j]);
}
}
//code for determinant of 3 X 3 matrix//
if(r==3){

i=1;
j=1;

d1 = m1[i][j]*((m1[i+1][j+1]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j+1]));

d2 = m1[i][j+1]*((m1[i+1][j]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j]));

d3 = m1[i][j+2]*((m1[i+1][j]*m1[i+2][j+1])-(m1[i+1][j+1]*m1[i+2][j]));


d=((d1-d2)+d3);
}

//code for determinant of 2 X 2 matrix//

if(r==2){

i=1;
j=1;
d=(m1[i][j]*m1[i+1][j+1])-(m1[i][j+1]*m1[i+1][j]);

}

printf(" the value of determinant is =%d\n",d);

break;


case 5:

printf("YOU HAVE SELECTED INVERSE OF A MATRIX\n");

//code for finding the inverse of a matrix//
//well the inverse is quite difficult to be honest yet I made it because it helps a lot//

printf("enter the order of the matrix\n");

scanf("%d%d",&r,&c);
//basically for inverse we need to have the adjoint of a matrix and as well as the determinant//
//we already have the determinant we will take the value from there//
if(r==4)
{
printf("stay tuned work under progress\n");
break ;
}

for(i=1;i<=r;i++){
for(j=1;j<=c;j++){

printf("enter the %d`%d element\n",i,j);
scanf("%d",&m1[i][j]);
}
}
// firstly the determinant//

if(r==3)
{

i=1;
j=1;

d1 = m1[i][j]*((m1[i+1][j+1]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j+1]));

d2 = m1[i][j+1]*((m1[i+1][j]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j]));

d3 = m1[i][j+2]*((m1[i+1][j]*m1[i+2][j+1])-(m1[i+1][j+1]*m1[i+2][j]));

d=((d1-d2)+d3);


printf("the determinant value =%d\n",d);

if(d==0)
{
printf("the inverse is not possible\n");

break ;
}

printf("\n");

//for inverse//
//firstly we need to find out the adjoint and then the transpose//

for(i=1;i<=1;i++){
for(j=1;j<=1;j++){
//for adjoint//
m2[i][j]= ((m1[i+1][j+1]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j+1])); //1//
m2[i][j+1]= -((m1[i+1][j]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j])); //2//
m2[i][j+2]= ((m1[i+1][j]*m1[i+2][j+1])-(m1[i+1][j+1]*m1[i+2][j])); //3//
m2[i+1][j]= -((m1[i+1][j]*m1[i+2][j+2])-(m1[i+1][j+2]*m1[i+2][j]));//4//
m2[i+1][j+1]= ((m1[i][j]*m1[i+2][j+2])-(m1[i][j+2]*m1[i+2][j]));   //5//
m2[i+1][j+2]= -((m1[i][j]*m1[i+2][j+1])-(m1[i][j+1]*m1[i+2][j]));  //6//
m2[i+2][j]= ((m1[i][j+1]*m1[i+1][j+2])-(m1[i][j+2]*m1[i+1][j+1])); //7//
m2[i+2][j+1]= -((m1[i][j]*m1[i+1][j+2])-(m1[i][j+2]*m1[i+1][j])); //8//
m2[i+2][j+2]= ((m1[i][j]*m1[i+1][j+1])-(m1[i][j+1]*m1[i+1][j]));  //9//

}
}

printf("the inverted matrix is given below\n");

for(i=1;i<=r;i++){
for(j=1;j<=c;j++){
//here we inverted the l and k for the transpose function //
//where row becomes column and column becomes row//
printf("%d/%d\t",m2[j][i],d);
}
printf("\n");
}
break ;
} 
if(r==2)
{
//code for the order of 2 x 2 matrix//
for(i=1;i<=1;i++){
for(j=1;j<=1;j++){
d=(m1[i][j]*m1[i+1][j+1])-(m1[i][j+1]*m1[i+1][j]);
}
}

if(d==0)
{
printf("the inverse is not possible\n");
break ;
}

for(i=1;i<=1;i++)
{
for(j=1;j<=1;j++)
{

(m2[i][j])= (m1[i+1][j+1]);

(m2[i][j+1])= -(m1[i+1][j]);

(m2[i+1][j])= -(m1[i][j+1]);

(m2[i+1][j+1])= (m1[i][j]);

}
}

printf("the inverse of the matirx is below\n");
printf("\n");

for(i=1;i<=r;i++){
for(j=1;j<=c;j++){

printf("%d/%d\t",m2[j][i],d);
}
printf("\n");
}

break ;
}
break ;

}
printf("enter y for continue\n");
option=getche();
}
while(option=='y');
}




