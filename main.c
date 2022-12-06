#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[10];
};

void main(void) {
	struct Book*p;
	
	p = (int*)malloc(2*sizeof(int));
	
	if(p == NULL)
	{
		printf("error\n");
		return -1;
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");

	free(p);	
	
	return 0;
}



