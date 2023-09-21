#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char c;

	printf("enter an character:");
	scanf("%c", &c);

	printf("The next character of %c (%d) is %c (%d)\n", c, c, c+1, c+1);

	system("PAUSE");
	return 0;

}
