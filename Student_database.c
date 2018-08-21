// A student's marks and name register made by rounak using C//
//It stores the input in a file and sorts the data according to the marks//
//Also provides the maximum and minimum scores alon with the scorers//
#include<stdio.h>
#include<stdlib.h>

 typedef struct student_details{
	char name[50];
	int roll;
	float marks;
};

 struct student_details s[50],temp;
 
 int main()
 {
 	int t;
 	for(t=1;t<31;t++){
 	printf("*\t");
    }
    printf("\n");
 
 	 FILE *file= fopen("e:\\studentrecords.txt","w+");
 	if(file== NULL)
 	{
 		printf("error saving in file\n");
 	}
 	
 	int n,i,j,k,p,q;
 	int max,min;
 	char name[50];
 	// for taking the total students input//
 	printf("enter the total number of students to be registered\n");
 	scanf("%d",&n);
 	//for taking the details of the student//
 	printf("enter the student details\n");
 	
 	for(i=0;i<n;i++)
 	{
 		scanf("%s%d%f",&s[i].name,&s[i].roll,&s[i].marks);
 }
 
 for(i=0;i<n;i++)
 {
 	printf("name=%s\n",s[i].name);
 	fprintf(file,"name=%s\n",s[i].name);
 	printf("roll number=%d\n",s[i].roll);
 	fprintf(file,"roll number=%d\n",s[i].roll);
 	printf("marks =%.2f\n",s[i].marks);
 	fprintf(file,"marks =%.2f\n",s[i].marks);
 	
 	printf("\n");
 	
 }
 
 // sorting of the input data according to the marks//
 //displaying the sorted result//
 printf("The data is sorted\n");
 
 fprintf(file,"The data is sorted\n");
  for(i=0;i<n-1;i++){
  	
	  for(j=0;j<n-i-1;j++)
  	{
  		if(s[j].marks> s[j+1].marks)
  		{
  			//swapping is needed//
  			temp=s[j];
  			s[j]=s[j+1];
  			s[j+1]=temp;
  		}
  	}
  }
  printf("the data according to the marks is:\n");
  for(j=0;j<n;j++){
  	printf("%s\t",s[j].name);
  	fprintf(file,"%s\t",s[j].name);
  	printf("%d\t",s[j].roll);
  	fprintf(file,"%d\t",s[j].roll);
  	printf("%f\t",s[j].marks);
  	fprintf(file,"%f\t",s[j].marks);
  	
  	printf("\n");
  }
 fclose(file);
 //for getting the maximum and minimum marks scored //
 max = -999.99; //asssigning the max as a huge negetive number //
 min=   999.99; //assigning the min as a huge postive number //
 
 for(j=0;j<n;j++)
 {
 	if (s[j].marks > max)

 	max=s[j].marks;
 	p=j;
 	
}
printf(" the highest marks=%d\n",max);
fprintf(file,"the highest marks=%d and obtained by %s\n",max,s[p].name);
printf("obtained by : %s\n",s[p].name);


 for(j=0;j<n;j++)
 {
 	if(s[j].marks < min)
 	
 	min=s[j].marks;
    q=j;
    
}
printf("the lowest marks=%d\n",min);
printf("obtained by : %s\n",s[q].name);
fprintf(file,"the lowest marks=%d and obtained by %s\n",max,s[p].name);
return 0;
}
