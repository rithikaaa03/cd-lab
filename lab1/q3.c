#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
	FILE *fptr1, *fptr2, *fptr3;
	char filename[100], filename2[100],c,d;
	printf("Enter the filename to open for reading: \n");
	scanf("%s", filename);
	printf("Enter the filename to open for reading: \n");
	scanf("%s", filename2);
	fptr1 = fopen(filename, "r");
	fptr2 = fopen(filename2, "r");
	// Open one file for reading
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}
	printf("Enter the filename to open for writing: \n");
	scanf("%s", filename);
	fptr3 = fopen(filename, "w+"); // Open another file for writing(read+write-r+)
	c = fgetc(fptr1);
	d=fgetc(fptr2);
	// Read contents from file
	while (c != EOF || d!=EOF)
	{
		if (c!=EOF)
		{
			while(c!='\n' &&  c!=EOF)
			{
				fputc(c, fptr3);
				c = fgetc(fptr1);
			}
			fputc('\n',fptr3)
		}

		if (d!=EOF)
		{
			while(d!='\n' && d!=EOF)
			{
				fputc(d, fptr3);
				d = fgetc(fptr1);
			}	
			fputc('\n',fptr3)	
		}

		
		
		
	}

	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	return 0;
}