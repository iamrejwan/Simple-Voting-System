#include<stdio.h>

int main()

{
     int i,j,a;
     printf("\n*\t *\t *\t *\t *\t *\t *\t *\n* Simple Voting System *\n*\t *\t *\t *\t *\t *\t *\t *\n\n");
     printf("Project by Rejwan Rashid\n"); 
     printf("Loading");

     for (i=0;i<=6;i++) //this loop is for how many times to print dot on after loading text

    {

     for(j=0;j<100000000;j++) //this loop is for time delay to print dot 
         a=j;
     printf(".");

    }

}
