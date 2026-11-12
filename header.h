#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct macro
{
	char name[20];
	char body[50];
	struct macro *next;
};
void comment_removel(FILE *);
void file_inclusion(FILE *,FILE *);
void macro_repl(FILE *);
void file_cat(FILE *,FILE *);


