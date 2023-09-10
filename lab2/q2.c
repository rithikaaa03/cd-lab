#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fa, *fb;
	char ca;
	char cb=' ';
	fa = fopen("a.txt", "r");
	if (fa == NULL){
		printf("Cannot open file \n");
		exit(0); }
	fb = fopen("c.txt", "w+");
	ca = fgetc(fa);
	while (ca != EOF)
	{
		if (ca=='#'){
				//printf("space");

				while (ca!='\n')
				{
					ca = fgetc(fa);
				
				}
				ca=fgetc(fa);
		}
		if (ca=='"')
		{
			while(ca!='\n')
			{
				putc(ca,fb);
				ca=fgetc(fa);
			}
		}
		fputc(ca,fb);
		ca = fgetc(fa);
	}
	fclose(fa);
	fclose(fb);
	return 0;
}
