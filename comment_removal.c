#include"header.h"
void comment_removel(FILE *fi)
{
	char ch,t=0;

	while((ch=fgetc(fi))!=-1)
	{
	if(ch=='/'&&t=='/')
		{
			fseek(fi,-2,SEEK_CUR);
			while((ch=fgetc(fi))!='\n'&&ch!=-1)
				{
				fseek(fi,-1,SEEK_CUR);
				fputc(' ',fi);
				}
		}

		else if(ch=='*'&&t=='/')
		{
			fseek(fi,-2,SEEK_CUR);
			while(((ch=fgetc(fi))!='/'||(t!='*'))&&(ch!=-1))
			{
				if(ch!='\n')
				{
				fseek(fi,-1,SEEK_CUR);
				fputc(' ',fi);
				}
				t=ch;
			}

			if(ch==-1)
			{
				printf("comment is not closed\n");
				return;
			}
		fseek(fi,-1,SEEK_CUR);
		fputc(' ',fi);
		}

		t=ch;
	}
}
