//level 10
//prob 1
/*#include<stdio.h>
int main(){
char x;
scanf("%c",&x);
printf("%d",x);
} */

//prob2 
/*#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
printf("%c",x);
}*/


//prob3
/*#include<stdio.h>
int main(){
char x[10];

scanf("%s",x);

printf("%s",x);

}*/

//prob4
/*#include<stdio.h>
#include<stdlib.h>
int main(){
char x[10];
int y;
scanf("%s",x);
y=atoi(x);
printf("%d",y);
}*/

//prob5
/*#include<stdio.h>
#include<stdlib.h>
int main(){
char x[10];
int y;
scanf("%d",&y);
sprintf(x,"%d",y);
printf("%s",x);
}*/

//prob6
/*#include<stdio.h>
int main(){
int x,y;
char z[10];
scanf("%d",&x);
sprintf(z,"%d",x);
for(int i=0;z[i]!='\0';i++){
printf("%c\n",z[i]);
}
}*/

//prob7
/*#include<stdio.h>
int main(){
char x[100];
int y=0;
scanf("%s",x);
for(int i=0;x[i]!='\0';i++){
y++;
}
printf("%d",y);
}*/

//prob8
/*#include<stdio.h>
int main(){
char x[50];
int y=0;
scanf("%s",x);
for(int i=0;x[i]!='\0';i++){
if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'){
y++;
}

}
if(y==50){
printf("Valid number");
}
else{
printf("Not Valid number");
}
}*/

//prob9
#include<stdio.h>
int main(){
char x[50];
char y[50];
int z=0;
scanf("%s",x);
for(int i=0;x[i]!='\0';i++){
if(x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'){
y[z]==x[i];

}

}
printf("%s",y);
}

