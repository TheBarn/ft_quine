#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 5;
	char *rep = "#include <stdio.h>%c#include <stdlib.h>%cint main()%c{%c%cint i = %d;%c%cchar *rep = %c%s%c;%c%cchar *name;%c%cchar *cmd;%c%cFILE *f;%c%cint d = i;%c%c%cif (__FILE__[5] == '_')%c%c%cd = i - 1;%c%casprintf(&name, %cSully_%%d.c%c, d);%c%casprintf(&cmd, %cgcc -Wall -Wextra -Werror %%s -o Sully_%%d && ./Sully_%%d%c, name, d, d);%c%cf = fopen(name, %cw%c);%c%cfprintf(f, rep, 10, 10, 10, 10, 9, d, 10, 9, 34, rep, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 10);%c%cfclose(f);%c%cfree(name);%c%cif(i > 0)%c%c%csystem(cmd);%c%cfree(cmd);%c}%c";
	char *name;
	char *cmd;
	FILE *f;
	int d = i;

	if (__FILE__[5] == '_')
		d = i - 1;
	asprintf(&name, "Sully_%d.c", d);
	asprintf(&cmd, "gcc -Wall -Wextra -Werror %s -o Sully_%d && ./Sully_%d", name, d, d);
	f = fopen(name, "w");
	fprintf(f, rep, 10, 10, 10, 10, 9, d, 10, 9, 34, rep, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 10);
	fclose(f);
	free(name);
	if(i > 0)
		system(cmd);
	free(cmd);
}
