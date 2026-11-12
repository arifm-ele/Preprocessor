#include"header.h"
void file_inclusion(FILE *fc,FILE *fi)
{

	char s[10]="#include",a[11],h[20],path[50],ch;
	FILE *fh;

	while((fgets(a,9,fc))!=0)
	{
	
		strcpy(path,"/usr/include/");
		if(strcmp(s,a)==0)
		{
			fgets(h,20,fc);

			h[strlen(h)-2]=0;
			strcat(path,h+1);

			fh=fopen(path,"r");
			if(fh==0)
			{
				printf("%s header file not found\n",h+1);
				return;
			}

			file_cat(fi,fh);
		}
	}
}
