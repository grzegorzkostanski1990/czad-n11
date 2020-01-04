#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
double cos;
float ave;
int n=20;
int i, j, tem;
int list[n];
j=i+1;
srand(time(NULL));

   for(i=0;i<n;i++)
   {
    list[i]=rand()%100;
    printf("%d ",list[i]);
   }
   printf("\nTeraz posortuje\n");
             for (int j=i-1; j>0; --j)
    for (int i=0; i<j; ++i)
      if (list[i]>list[i+1])
      {
        int tem=list[i];
        list[i]=list[i+1];
        list[i+1]=tem;
      }
for(i=0;i<n;i++)
   {
    printf("%d ",list[i]);
   }

printf("\nmaximum to: %d\nminimum to: %d\n ave:%f",list[n-1], list[0],list[18]%19);

}

