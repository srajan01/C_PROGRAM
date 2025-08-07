/*//level 2
//prob 1
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x==50);
printf("Result = %d",y);
}*/


/*//prob 2
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x!=50);
printf("Result = %d",y);
}*/


/*//prob 3
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x<50);
printf("Result = %d",y);
}*/

/*//prob 4
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x>50);
printf("Result = %d",y);
}*/

/*//prob 5
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x<=50);
printf("Result = %d",y);
}*/

/*//prob 6
#include<stdio.h>
int main(){
int x,y;
printf("Enter a number:");
scanf("%d",&x);
y=(x>=50);
printf("Result = %d",y);
}*/

/*//prob 7
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)==(x%10);
printf("Result = %d",y);
}*/

/*//prob 8
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)!=(x%10);
printf("Result = %d",y);
}*/

/*//prob 9
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)>(x%10);
printf("Result = %d",y);
}*/

/*//prob 10
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)<(x%10);
printf("Result = %d",y);
}*/

/*//prob 11
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)<=(x%10);
printf("Result = %d",y);
}*/

/*//prob 12
#include<stdio.h>
int main(){
int x,y;
printf("Enter a two digit number:");
scanf("%d",&x);
y=(x/10)>=(x%10);
printf("Result = %d",y);
}*/

/*//prob 13
#include<stdio.h>
int main(){
int x,y;
printf("Enter a four digit number:");
scanf("%d",&x);
y=((x/100)/10)==(x%10);
printf("Result = %d",y);
}*/

/*//prob 14
#include<stdio.h>
int main(){
int x,y;
printf("Enter a four digit number:");
scanf("%d",&x);
y=(x/100)==(x%100);
printf("Result = %d",y);
}*/


///*************************************************************************level 3****************************************************************************
/*//prob 1
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x==50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 2
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x!=50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 3
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x<50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 4
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x>50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 5
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x<=50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 6
#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x>=50){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 7
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)==(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 8
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)!=(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 9
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)>(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/


/*//prob 10
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)<(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 11
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)<=(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 12
#include<stdio.h>
int main(){
int x;
printf("Enter a two digit number:");
scanf("%d",&x);
if((x/10)>=(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 13
#include<stdio.h>
int main(){
int x;
printf("Enter a three digit number:");
scanf("%d",&x);
if(((x%100)/10)==(x%10)){
printf("Success");
}
else{
printf("Failiure");
}
}*/

/*//prob 14
#include<stdio.h>
int main(){
int x;
printf("Enter a four digit number:");
scanf("%d",&x);
if((x%100)==(x/100)){
printf("Success");
}
else{
printf("Failiure");
}
}*/





//***********************************************************************level 4**********************************************************************************

//level 4
/*//prob 1

#include<stdio.h>
int main(){
int x;
x=1;
loop:if(x<6){
printf("%d\n",x);
x++;
goto loop;
}
}
*/

//prob 2

/*#include<stdio.h>
int main(){
int x;
x=5;
loop:if(x>0){
printf("%d\n",x);
x--;
goto loop;
}
}*/


//prob 3

/*#include<stdio.h>
int main(){
int x,y=0;
x=1;
loop:if(x<6){
y+=x;
x++;
goto loop;
}
printf("%d\n",y);
}*/

//prob 4

/*#include<stdio.h>
int main(){
int x,y=0;
x=6;
loop:if(x>0){
y+=x;
x--;
goto loop;
}
printf("%d\n",y);
}*/

//prob 5

/*#include<stdio.h>
int main(){
int x,y=0;
x=1;
loop:if(x<10){
y=x;
printf("%d\n",y);
x=x+2;
goto loop;
}

}*/

//prob 6

/*#include<stdio.h>
int main(){
int x,y=0;
x=11;
loop:if(x<20){
y=x;
printf("%d\n",y);
x=x+2;
goto loop;
}

}*/

//prob 7
/*#include<stdio.h>
int main(){
int x,y=0;
x=11;
loop:if(x<100){
y=(x/10)+(x%10);
if(y==7){
printf("%d\n",x);
}
x=x+2;
goto loop;
}
}*/

//prob 8

/*#include<stdio.h>
int main(){
int x,y=0;
x=11;
loop:if(x<100){
if(x%2==0){
if((x/10)+(x%10)==6){
printf("%d\n",x);
}}
x++;
goto loop;
}

}*/


//prob 10
/*#include<stdio.h>
int main(){
int x,y=0,z=0;
x=11;
loop:if(x<100){
y=x/10;
if(y==7){
z=z+x;
}
x=x+2;
goto loop;
}
printf("%d",z);
}*/


//prob 11
/*#include<stdio.h>
int main(){
int x,y=0;
printf("Enter a number:");
scanf("%d",&x);
loop:if(x>0){
y++;
x=x/10;
goto loop;

}
printf("%d",y);
}*/

//prob 12
/*#include<stdio.h>
int main(){
int x,y=0;
printf("Enter a number:");
scanf("%d",&x);
loop:if(x>0){
y=y+(x%10);
x=x/10;
goto loop;

}
printf("%d",y);
}*/

//prob 13

/*#include<stdio.h>
int main(){
int x,y=0;
printf("Enter a number:");
scanf("%d",&x);
loop:if(x>0){
y=x%10;
printf("%d",y);
x=x/10;
goto loop;

}

}*/

//prob 14

/*#include<stdio.h>
int main(){
int x,y=0,z;
printf("Enter a number:");
scanf("%d",&x);
z=x;
loop:if(z>0){
y++;
z=z/10;
goto loop;
}
int m = y-1;
int n =1;
loop1:if(m>0){
n=n*10;
m--;
goto loop1;
}
int first = x/n;
int last = x%10;
int mid = (x%n)/10;
printf("%d%d%d",last,mid,first);
}*/

//prob 15
/*#include<stdio.h>
int main(){
int x,y=0,z;
printf("Enter a number:");
scanf("%d",&x);
z=x;
loop:if(z>0){
y++;
z=z/10;
goto loop;
}
int m = y-1;
int n =1;
loop1:if(m>0){
n=n*10;
m--;
goto loop1;
}
int first = x/n;
if(first%2==0){
printf("%d",x);
}
else{
first=first-1;
int rem=x%n;
printf("%d%d",first,rem);
}
}
*/

//prob 16
#include<stdio.h>
int main(){
int x,y,z=0;
printf("Enter a number:");
scanf("%d",&x);
y=x;
loop:if(y>1){
if(x%y==0){
z++;
}
y--;
goto loop;

}
if(z==1){
printf("Prime number\n");
}
else{
printf("Not a Prime number\n");
}
printf("%d",z);
}



























