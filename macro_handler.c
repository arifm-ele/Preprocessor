#include"header.h"
void macro_repl(FILE *fi)
{
	char ser[10]="#define",line[50],w[20];
	int i=0;
	struct macro **m=malloc(sizeof(struct macro *));
	
	
	while(fscanf(fi,"%s",w)==1)
	{
		if(strcmp(ser,w)==0)
		{
			m[i]=malloc(sizeof(struct macro));
			fscanf(fi,"%s",m[i]->name);
			fgets(m[i]->body,50,fi);
			i++;
		}

	}

	for(i=0;i<10;i++)
	{
		printf("%s %s",m[i]->name ,m[i]->body);
	}



}
