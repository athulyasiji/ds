#include<stdio.h>
void main()
{
char c;
printf("enter the alphabet");
scanf("%c",&c);
switch(c){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
    printf("vowel");
    break;
default:
    printf("not vowel");

}
getch();
}
