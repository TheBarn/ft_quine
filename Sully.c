#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 5;
	char *rep = "#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%c%cint i = %d;%c%cchar *rep = %c%s%c;%c%cchar *name;%c%cchar *cmd1;%c%cchar *cmd2;%c%cFILE *f;%c%cint d = i;%c%c%cif (i > 0) {%c%cif (__FILE__[5] == '_')%c%c%cd = i - 1;%c%casprintf(&name, %cSully_%%d.c%c, d);%c%casprintf(&cmd1, %cgcc -Wall -Wextra -Werror %%s -o Sully_%%d%c, name, d);%c%casprintf(&cmd2, %c./Sully_%%d%c, d);%c%cf = fopen(name, %cw%c);%c%cfprintf(f, rep, 10, 10, 10, 10, 9, d, 10, 9, 34, rep, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%cfclose(f);%c%cfree(name);%c%csystem(cmd1);%c%cif (i > 1)%c%c%csystem(cmd2);%c%cfree(cmd1);%c%cfree(cmd2); }%c}%c";
	char *name;
	char *cmd1;
	char *cmd2;
	FILE *f;
	int d = i;

	if (i > 0) {
	if (__FILE__[5] == '_')
		d = i - 1;
	asprintf(&name, "Sully_%d.c", d);
	asprintf(&cmd1, "gcc -Wall -Wextra -Werror %s -o Sully_%d", name, d);
	asprintf(&cmd2, "./Sully_%d", d);
	f = fopen(name, "w");
	fprintf(f, rep, 10, 10, 10, 10, 9, d, 10, 9, 34, rep, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
	fclose(f);
	free(name);
	system(cmd1);
	if (i > 1)
		system(cmd2);
	free(cmd1);
	free(cmd2); }
}
