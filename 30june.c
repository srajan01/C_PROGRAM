//level 8

//prob1
/*#include<stdio.h>
int disp_sum(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_sum(x);
printf("%d",y);

}

int disp_sum(int a){
int y=0;
for(int i=1;i<=a;i++){
 y=y+i;
 
}

return y;
}*/

//prob2
/*#include<stdio.h>
int disp_rsum(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_rsum(x);
printf("%d",y);
}
int disp_rsum(int a){
int y=0;
for(int i=a;i>0;i--){
y=y+i;
}
return y;
}*/

//prob 3
/*#include<stdio.h>
int disp_2digits_ones5(int x);
int main(){
int x=100,y;
//scanf("%d",&x);
y=disp_2digits_ones5(x);
printf("%d",y);
}
int disp_2digits_ones5(int a){
int y=0;
for(int i=10;i<a;i++){
if(i%10==5){
y=y+i;
}
}
return y;
}*/


//prob 4
/*#include<stdio.h>
int disp_2digit_odd_tens7(int x);
int main(){
int x=99,y;
y=disp_2digit_odd_tens7(x);
printf("%d",y);
}
int disp_2digit_odd_tens7(int a){
int y=0;
for(int i=11;i<=a;i=i+2){
if(i/10==7){
y=y+i;
}
}
return y;
}*/

//prob 5
/*#include<stdio.h>
int count_total_digits(int x);
int main(){
int x,y;
scanf("%d",&x);
y=count_total_digits(x);
printf("%d",y);
}
int count_total_digits(int a){
int y=0;
for(int i=0;a>0;i++){
y++;
a=a/10;
}
return y;
}*/

//prob 6
/*#include<stdio.h>
int disp_sum_all_digits(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_sum_all_digits(x);
printf("%d",y);
}
int disp_sum_all_digits(int a){
int y=0;
for(int i=0;a>0;i++){
y=y+(a%10);
a=a/10;
}
return y;
}*/

//prob7
/*#include<stdio.h>
int disp_reverse(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_reverse(x);
printf("%d",y);
}
int disp_reverse(int a){
int y=0;
for(int i=0;a>0;i++){
y=y*10+(a%10);

a=a/10;
}
return y;
}*/

//prob 8
/*#include<stdio.h>
int disp_interchange(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_interchange(x);
printf("%d",y);
}
int disp_interchange(int a){
int y=0,w,m=0;
w=a;
for(int i=0;a>0;i++){
a%10;
m++;
a=a/10;
}
m=m-1;
int z=1;
for(int j =1;j<=m;j++){
z=z*10;
}
int mid=0;
mid=(w%z)/10;
int first=0,last=0;
first = w%10;
last = w/z;
y=(((first*(z/10))+mid)*10)+last;
return y;
}*/

//prob 9
/*#include<stdio.h>
int check_last_digit_odd(int x);
int main(){
int x,y;
scanf("%d",&x);
y=check_last_digit_odd(x);
printf("%d",y);
}
int check_last_digit_odd(int a){
int y=0,w,m=0;
w=a;
for(int i=0;a>0;i++){
a%10;
m++;
a=a/10;
}
m=m-1;
int z=1;
for(int j =1;j<=m;j++){
z=z*10;
}
int last=0;
last= w/z;
int mid=0;
mid=(w%z);
int first =0;
first = w%10;
if(last%2==1){
y=((last-1)*(z))+mid;
return y;
}
else{
y=w;
return y;
}
}*/

//prob10
/*#include<stdio.h>
int disp_2digiteven_sum6(int x);
int main(){
int x=1,y;
//scanf("%d",&x);
y=disp_2digiteven_sum6(x);
printf("%d",y);
}
int disp_2digiteven_sum6(int a){
int y,z,w=0;
while(a<10){
w=0;
z=2;
while(z<=a){
if(a%z==0){
w++;
}
z++;
}

if(w==1){
y++;
}
a++;
}
return y;
}*/

//prob 11
/*#include<stdio.h>
int disp_2digitodd(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_2digitodd(x);
printf("%d",y);
}
int disp_2digitodd(int a){
int y=0,z=0;;
while(a>0){
 z=a%100;

 if(z%2==1&&z>10){
 y++;
 }
 a=a/10;
 }
 return y;

}*/

//prob 12
/*#include<stdio.h>
int disp_2digitodd(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_2digitodd(x);
printf("%d",y);
}
int disp_2digitodd(int a){
int y=0,z=0;
while(a>0){
 z=a%10;

 if(z%2==1){
 y++;
 }
 a=a/10;
 }
 return y;

}*/

//prob 13
/*#include<stdio.h>
int disp_1perfectsquare(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_1perfectsquare(x);
printf("%d",y);
}
int disp_1perfectsquare(int a){
int y=0,z=0;
while(a>0){
 z=a%10;

 if(z==1||z==4||z==9){
 y++;
 }
 a=a/10;
 }
 return y;


}*/

//prob 14
/*#include<stdio.h>
int disp_2perfectsquare(int x);
int main(){
int x,y;
scanf("%d",&x);
y=disp_2perfectsquare(x);
printf("%d",y);
}
int disp_2perfectsquare(int a){
int y=0,z=0;
while(a>0){
 z=a%100;

 if(z==16||z==25||z==36||z==49||z==64||z==81){
 y++;
 }
 a=a/10;
 }
 return y;
}*/






