#include<stdio.h>
int main()
{
int arr[100];
//Taking an array input from the user
int i;
printf("Enter Array: \n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
//Print array
for(i=0;i<5;i++)
{
printf("%d",arr[i]);
}
return 0;
}

