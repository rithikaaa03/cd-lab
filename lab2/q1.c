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
	fb = fopen("b.txt", "w+");
	ca = fgetc(fa);
	while (ca != EOF)
	{
		if(ca==' ' || ca=='\t')
		{
			fputc(cb,fb);
			while(ca==' ' || ca=='\t'){
				//printf("space");
				ca = fgetc(fa);
			}
			
		}
		
		fputc(ca,fb);
		ca = fgetc(fa);
	}
	fclose(fa);
	fclose(fb);
	return 0;
}
