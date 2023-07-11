/* FIND A GRADE ACCORDING TO STUDENTS MARKS 
99 TO 91 A1
90 TO 81 B1
80 TO 71 B2 
70 TO 61 B3
60 TO 51 C1
50 TO 41 C2
40 TO 33 C3
33 TO 0  FAIL 
*/

#include<stdio.h>
#include<conio.h>
 
void main (){

int i,n;

printf("enter the array size :  ");
scanf("%d",&n);

int a[n];
for(i=0;i<=n-1;i++){
    printf("a[%d]=  ",i);
    scanf("%d",&a[i]);
}

for(i=0;i<=n-1;i++){

if(a[i]>=91){
printf("marks : %d    A1\n",a[i]);

}else if(90>=a[i] & 81<=a[i]){

printf("marks : %d    B1\n",a[i]);
}else if(80>=a[i] & 71<a[i]){

printf("marks : %d    B2\n",a[i]);
} else if(70>=a[i]&61<a[i]){

printf("marks : %d    B3\n",a[i]);
}else if(60>=a[i]&51<a[i]){

printf("marks : %d    C1\n",a[i]);
}else if(50>=a[i]&41<a[i]){

printf("marks : %d    C2\n",a[i]);
}else if(40>=a[i] & 33<a[i]){

printf("marks : %d    c3\n",a[i]);
}else if(33>=a[i]){

printf("marks : %d    FAIL\n",a[i]);
}
}
getch();    
} 
