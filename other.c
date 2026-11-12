#include"header.h"
void file_cat(FILE *fd,FILE *fs)
{
	char ch;
	while((ch=fgetc(fs))!=-1)
		fputc(ch,fd);
}
