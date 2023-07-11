/*Q.2 Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26

Output:
Average of an Array: 29.6
*/

#include<stdio.h>
#include<conio.h>

void main (){

int i,n,sum=0;

printf("enter array size =  ");
scanf("%d",&n);

int count[n];

for(i=0;i<n;i++){
    printf("n[%d]= ",i);
    scanf("%d",&count[n]);
    sum =sum + count[n];
}

printf("the average value is %d",sum/n);

getch();
}