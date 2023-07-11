/*Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter array size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3

Output:
Array C is: 8, 7, 10, 12, 5
*/

#include<stdio.h>
#include<conio.h>

void main (){

int i,n,m,sum=0,p;

printf("enter array A's size =  ");
scanf("%d",&n);

int count[n];

for(i=0;i<n;i++){
    printf("n[%d]= ",i);
    scanf("%d",&count[n]);
    
}
printf("enter array B's size =  ");
scanf("%d",&m);

int marks[m];

for(i=0;i<n;i++){
    printf("n[%d]= ",i);
    scanf("%d",&marks[m]);

}

int c[p];
for(i=0;i<n;i++)
{
    c[i]=count[i]+marks[i];
    printf("%d\n",c[i]);

}

/*for(i=0;i<=n;i++)
{
        printf("c[%d]=%d",i,c[i]);
}*/

    











getch();
}