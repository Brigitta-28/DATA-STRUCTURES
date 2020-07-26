#include<stdio.h>
#include<stdlib.h>

typedef struct{
     char name[20];
     int age;
     int phn;
     int salary;
     }Employee;
     
int main()
{
   int i,n=4;
   
   Employee employees[n];
   printf("Enter %d Employee Details \t\t\t\t",n);
   
   for(i=0;i<n;i++)
   {
    printf("Employee %d:- \n",i+1);
    
    printf("Name:");
    scanf("%s",&employee[i].name);
    
    printf("Age:- ");
    scanf("%d",&employees[i].age);
    
    printf("Phone Number:- ");
    scanf("%d",&employees[i].phn);
    
    printf("Salary:- ");
    scanf("%d",&employees[i].salary);
    
    printf("\n");
   }
   
   printf("---------------------All Employee Details----------------------\n");
   
   for(i=0;i<n;i++)
   {
    printf("Name \t:");
    printf("%s \t",employees[i].name);
    
    printf("Age \t: ");
    printf("%d \t",employees[i].age);
    
    printf("Phone Number \t:");
    printf("%d \t",employees[i].phn);
    
    printf("Salary \t:");
    printf("%d \t",employees[i].salary);
    
    printf("\n");
   }
   
   return(0);
}   
    
