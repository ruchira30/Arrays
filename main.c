#include<stdio.h>
int main()
{
int arr[];
//Taking an array input from the user
int i;
printf("Enter Array: \n");
for(i=0;i<5;i++)
{
scanf("%c",&arr[i]);
}
//Print array
for(i=0;i<5;i++)
{
printf("The input array is %c",arr[i]);
}
return 0;
}



