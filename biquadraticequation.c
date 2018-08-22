// code for finding the biquadratic eqaution if we know the roots //
// developed in c by Rounak saha//
#include<stdio.h>
#include<math.h>

int main()
{
	float z,a,b,c,d,p,q,r,s;
 // a,b,c,d = roots  & p,q,r,s = coefficients//
    float m,m1,m2,m3,m4,m5,m6,n1,n2,n3,n4,f,f1,f2;
	char x;
	
	printf("enter the roots of the biquadratic equation\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	//Thus the biquadratic equation which should be in the form of px^4 + qx^3 + rx^2 + sx + z = 0//
	m=(a+b+c+d);
	m1=c*d;
	m2=b*d;
	m3=b*c;
	m4=a*d;
	m5=a*c;
	m6=a*b;
	f1=(m1+m2+m3+m4+m5+m6);
	n1=(b*c*d);
	n2=(a*c*d);
	n3=(a*b*d);
	n4=(a*c*b);
	f2=(n1+n2+n3+n4);
	f=(a*b*c*d);
	printf("the biquadratic equation is written below\n");
	
	printf("z(x^4 -%fx^3 + %fx^2 - %fx + %f) = 0",m,f1,f2,f);
	printf("where z is any constant\n");
	
	return 0;
}
