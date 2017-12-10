#include <stdio.h>
/*
	Grace
*/
#define STR "#include <stdio.h>%c/*%c%cGrace%c*/%c#define STR %c%s%c%c#define PRINT(f)fprintf(f, STR, 10, 10, 9, 10, 10, 34, STR, 34, 10, 10, 34, 34, 34, 34, 10, 10)%c#define FT(x)int main(){FILE *f; f = fopen(%cGrace_kid.c%c, %cw%c);if (f){PRINT(f);fclose(f);}return(0);}%cFT()%c"
#define PRINT(f)fprintf(f, STR, 10, 10, 9, 10, 10, 34, STR, 34, 10, 10, 34, 34, 34, 34, 10, 10)
#define FT(x)int main(){FILE *f; f = fopen("Grace_kid.c", "w");if (f){PRINT(f);fclose(f);}return(0);}
FT()
