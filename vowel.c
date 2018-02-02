#include<stido.h>
#include<conio.h>
int main()
{
char b;
printf("enter the letter");
scanf("%c",&b);
if(b=='a'|| b=='e'|| b=='i'|| b=='o' || b=='u')
printf("it is the vowel letter");
else
printf("it is not the vowel letter");
getch();
return 0;
}
