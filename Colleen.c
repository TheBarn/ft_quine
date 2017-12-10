#include <stdio.h>
/*
	Comment1
*/
void print()
{
	char *a = "#include <stdio.h>%c/*%c%cComment1%c*/%cvoid print()%c{%c%cchar *a = %c%s%c;%c%cprintf(a, 10, 10, 9, 10, 10, 10, 10, 9, 34, a, 34, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 10, 9, 10, 9, 10, 10);%c}%c%cint main()%c{%c/*%c%cComment2%c*/%c%cprint();%c%creturn(0);%c}%c";
	printf(a, 10, 10, 9, 10, 10, 10, 10, 9, 34, a, 34, 10, 9, 10, 10, 10, 10, 10, 10, 9, 10, 10, 9, 10, 9, 10, 10);
}

int main()
{
/*
	Comment2
*/
	print();
	return(0);
}
