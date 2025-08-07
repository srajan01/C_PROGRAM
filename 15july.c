//level 11
//prob 1
/*#include<stdio.h>
int main(){
int *x,y=10;
scanf("%d",x);
printf("%d\n",*x);
printf("Changed value\n");
x=&y;
printf("%d\n",*x);
}*/

//prob2
/*#include<stdio.h>
void sum(int*p,int s);
int main(){
int x[5];
int inc;
for(int i=0;i<5;i++){
scanf("%d",&x[i]);
}
sum(x,5);
}
void sum(int*p,int s){
for(int j=0;j<s;j++){
*(p+j)+=1;

}
for(int k =0;k<s;k++){

printf("%d",*(p+k));
}
}*/

//prob3
/*#include<stdio.h>
void asscend(int*p,int s);
int main(){
int x[5];
asscend(x,5);
}
void asscend(int*p,int s){
for(int i=0;i<5;i++){
*(p+i)=i+1;
printf("%d\n",*(p+i));
}
}*/

//prob4
/*#include <stdio.h>

void find_2digit_odd_sum7(int *p, int s);

int main() {
    int result = 0;
    int *x = &result;  
    int y = 100;

    find_2digit_odd_sum7(x, y);

    return 0;
}

void find_2digit_odd_sum7(int *p, int s) {
    for (int i = 10; i < s; i++) {
        if (i % 2 != 0) { 
            int tens = i / 10;
            int units = i % 10;
            int sum = tens + units;

            if (sum == 7) {
                *p = i;
                printf("%d\n", *p);
            }
        }
    }
}
*/



//prob 5
/*#include <stdio.h>

void copyIntegers(int *source, int *destination, int n);

int main() {
    int src[] = {10, 20, 30, 40, 50};
    int dest[5];
    int size = 5;

    copyIntegers(src, dest, size);

    printf("Copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }

    return 0;
}

void copyIntegers(int *source, int *destination, int n) {
    for (int i = 0; i < n; i++) {
        *(destination + i) = *(source + i); // or destination[i] = source[i];
    }
}
*/

//prob 6
/*#include<stdio.h>
void copystr(char *src,char *des);
int main(){
 char s[13] ="sanjeevrajan";
 char d[13];
copystr(s,d);
for (int i =0;i<13;i++){
printf("%c",d[i]);
}
}
void copystr(char *src,char *des){
for(int i=0;i<13;i++){
*(des+i)=*(src+i);
}


}*/

//prob 7
/*#include<stdio.h>
void memcomp(int*src,int*dst,int size);
int main(){
int a[3] ;
int b[3];
for(int i=0;i<3;i++){
scanf("%d",&a[i]);
} 
for(int j=0;j<3;j++){
scanf("%d",&b[j]);
}
memcomp(a,b,3);
}
void memcomp(int*src,int*dst,int size){
int c=0;
for(int i=0;i<size;i++){
if(*src+i==*dst+i){
c++;
}
}
if(c==3){
printf("success");
}
else{
printf("Failiure");
}
}*/

//prob 8
/*#include<stdio.h>
void strcomp(char *src,int m,char *dst);
int main(){

char arr[4];
char arr1[4];
scanf("%s",arr);
scanf("%s",arr1);
strcomp(arr,0,arr1);

}
void strcomp(char *src,int m,char *dst){
for(int j=0;j<4;j++){
if(*src+j==*dst+j){
m++;
}
}
if(m==4){
printf("succes %d",m);
}
else{
printf("failiure %d",m);
}
}*/

//prob 9
/*#include<stdio.h>
void intcon(int *src1, int size1, int *src2, int size2, int *dst);
int main() {
int a;
scanf("%d", &a);
int arr[a];
for (int i = 0; i < a; i++) {
scanf("%d", &arr[i]);
}
int b;
scanf("%d", &b);
int arr1[b];
for (int j = 0; j < b; j++) {
scanf("%d", &arr1[j]);
}
int dest[a + b];
intcon(arr, a, arr1, b, dest);
return 0;
}
void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
for (int k = 0; k < size1; k++) {
dst[k] = src1[k];
}
for (int l = 0; l < size2; l++) {
dst[size1 + l] = src2[l];
}
for (int m = 0; m < size1 + size2; m++) {
printf("%d\n", dst[m]);
}
}*/

//prob10
/*#include<stdio.h>
void strcon(char *src1, char *src2, char *dst);
int main() {
char str1[100], str2[100], dest[200];
scanf("%s", str1);
scanf("%s", str2);
strcon(str1, str2, dest);
printf("%s\n", dest);
return 0;
}
void strcon(char *src1, char *src2, char *dst) {
int i, j;
for(i = 0; src1[i] != '\0'; i++) {
dst[i] = src1[i];
}
for(j = 0; src2[j] != '\0'; j++) {
dst[i + j] = src2[j];
}
dst[i + j] = '\0';
}*/

/*#include <stdio.h>

int main() {
    char arr[51];      // 50 characters + null terminator
    char ch;
    int count = 0;

    char *p;  // pointer for traversing string

    printf("Enter a string (up to 50 characters): ");
    scanf("%s", arr);

    // Consume any leftover newline
    while (getchar() != '\n');

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Traverse the string using pointer
    for (p = arr; *p != '\0'; p++) {
        if (*p == ch) {
            count++;
        }
    }

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}*/


/*#include <stdio.h>

int main() {
    char mainStr[101], subStr[101];
    char *pMain, *pSub, *start;
    int pos = -1, i = 1;

    printf("Enter the main string: ");
    scanf("%s", mainStr);

    printf("Enter the substring: ");
    scanf("%s", subStr);

    pMain = mainStr;

    while (*pMain != '\0') {
        start = pMain;
        pSub = subStr;

        while (*start != '\0' && *pSub != '\0' && *start == *pSub) {
            start++;
            pSub++;
        }

        if (*pSub == '\0') {
            pos = i;
            break;
        }

        pMain++;
        i++;
    }

    if (pos != -1)
        printf("Substring found at position %d.\n", pos);
    else
        printf("Substring not found.\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    char str[201];
    char *p;
    int count = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse string using pointer
    for (p = str; *p != '\0'; p++) {
        if (*p != ' ' && *p != '\n' && *p != '\t') {
            if (!inWord) {
                inWord = 1;  // started a new word
                count++;
            }
        } else {
            inWord = 0;  // ended a word
        }
    }

    printf("Total words: %d\n", count);

    return 0;
}*/

#include <stdio.h>

#define MAX_DIGITS 50

// Function to get number digit-by-digit using getchar
void getnumbers(int *num, int *length) {
    char ch;
    int index = 0;

    printf("Enter number (up to 50 digits): ");
    for (; index < MAX_DIGITS && (ch = getchar()) != '\n'; index++) {
        if (ch >= '0' && ch <= '9') {
            *(num + index) = ch - '0';
        } else {
            index--; // skip invalid character
        }
    }
    *length = index;
}

// Function to add two big numbers stored in arrays
void addnumbers(int *num1, int len1, int *num2, int len2, int *result, int *res_len) {
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = (len1 > len2 ? len1 : len2);
    *res_len = k;

    // Initialize result array to 0
    for (int m = 0; m <= MAX_DIGITS; m++) {
        *(result + m) = 0;
    }

    // Perform addition from right to left
    for (; i >= 0 || j >= 0 || carry; i--, j--, k--) {
        int digit1 = (i >= 0) ? *(num1 + i) : 0;
        int digit2 = (j >= 0) ? *(num2 + j) : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        *(result + k) = sum % 10;
    }

    // If carry exists, place it at position k
    if (carry > 0) {
        *(result + k) = carry;
        *res_len = *res_len + 1;
    } else {
        k++; // move k to skip leading 0
    }

    // Print result
    printf("Sum: ");
    for (int m = k; m < k + *res_len; m++) {
        printf("%d", *(result + m));
    }
    printf("\n");
}

int main() {
    int number1[MAX_DIGITS], number2[MAX_DIGITS];
    int result[MAX_DIGITS + 1]; // one extra for carry
    int len1 = 0, len2 = 0, res_len = 0;

    getnumbers(number1, &len1);
    getnumbers(number2, &len2);

    addnumbers(number1, len1, number2, len2, result, &res_len);

    return 0;
}












