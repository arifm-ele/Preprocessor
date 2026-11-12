#include"header.h"

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage : MakeFile file.c\n");
		return 1;
	}

	char fname[20],ch;

	strcpy(fname,argv[1]);

	FILE *fc=fopen(fname,"r"),*fi;

	if(fc==0)
	{
		printf("%s file not present\n ",fname);
		return 1;
	}

	fname[strlen(fname)-1]='i';

	fi=fopen(fname,"w");
	fi=fopen(fname,"a");

//	file_inclusion(fc,fi);
//	rewind(fc);

	file_cat(fi,fc);
	fclose(fi);

	fi=fopen(fname,"r+");
	comment_removel(fi);
rewind(fi);

macro_repl(fi);
	return 0;
}

