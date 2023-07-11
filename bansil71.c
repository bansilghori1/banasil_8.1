//Q.1 Write a Program to find the length of a 1D array.
/*
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6

Output:
Length of an Array: 5


*/

#include<stdio.h>
#include<conio.h>

void main (){

int i,n,b=1;

printf("enter array size =  ");
scanf("%d",&n);

int count[n];

for(i=0;i<n;i++){
    printf("n[%d]= ",i);
    scanf("%d",&count[n]);
    b++;
}

printf("length of array is %d ",b-1);

getch();
}