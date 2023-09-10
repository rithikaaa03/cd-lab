#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char filename[100],c;
	int size=0;
	printf("enter filename to open for reading:\n");
	scanf("%s",filename);
	fptr1=fopen(filename,"r");
	if (fptr1==NULL)
	{
		printf("cant open file %s\n",filename);
		exit(0);
	}
	printf("enter filename to open for writing:\n");
	scanf("%s",filename);
	fptr2=fopen(filename,"w+");
	fseek(fptr1,-1,SEEK_END);
	int d=ftell(fptr1);

	printf("\nsize of file is %d",d);
	while(d>=0)
	{
		c=fgetc(fptr1);
		fputc(c,fptr2);
		//printf("Char read%c\n",c);
		fseek(fptr1,-2,SEEK_CUR);
		//int e=ftell(fptr1);
		//printf("Position%d\n",e);
		d-=1;
	}
	printf("\nContents copied to %s", filename);
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}