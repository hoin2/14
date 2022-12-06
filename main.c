#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char*pc = NULL;
	int i = 0;
	
	pc = (char*)malloc(100*sizeof(char));
	
	if(pc == NULL)
	{
		printf("메모리 할당 오류\n");
		
		exit(1);
	}
	
	for(i=0;i<26;i++)
	{
	pc[i] = 'a'+i;		
	}
	
	pc[i] = 0;
	
	printf("%s\n", pc);
	
	free(pc);
	
	return 0;
}



