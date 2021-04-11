#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

int main() {

	int i;
	char str[] = "r1zky...";

	i = 0;

	while (isalnum(str[i])) i++;
	printf("The first %d characters are alphanumeric.\n", i);

	_getch();
	return 0;
}