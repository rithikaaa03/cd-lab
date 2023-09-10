#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr1;
	char filename[100],c;
	int line,cha;
	printf("enter filename to open:\n");
	scanf("%s",filename);
	fptr1=fopen(filename,"r");
	if (fptr1==NULL)
	{
		printf("cannot open file %s\n",filename);
		exit(0);
	}
	line=1;
	cha=0;
	while(c!=EOF)
	{
		c=fgetc(fptr1);
		cha+=1;
		if (c=='\n')
		{
			line+=1;
		}
	}
	printf("\nnumber of characters is %d and number of characters is %d",cha,line);
	fclose(fptr1);
	return 0;
}