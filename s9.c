#include <stdio.h>
#include<conio.h>
int main(void) 
{
	int min,rem,hr;
	scanf("%d",&min);
	hr=min/60;
	rem=min-(60*hr);
	printf("%d:%d",hr,rem);
	getch();
  return 0;
}
