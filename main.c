#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[10];
};

void main(void) {
	int i;
	struct Book**bookshelf;
	
	bookshelf = (struct Book**)malloc(3*sizeof(struct Book*));
	
	for(i=0;i<3;i++)
		bookshelf[i] = (struct Book*)malloc(10*sizeof(struct Book));	
		
	bookshelf[1][3].number = 5;
	strcpy(bookshelf[1][3].title, "C++Programing");
	
	(bookshelf[2]+4)->number = 3;
	strcpy((bookshelf[2]+4)->title,"Communications Theory");
	
	printf("book(1,3) : %i, %s\n",(bookshelf[1]+3)->number,(bookshelf[1]+3)->title);
	printf("book(2,4) : %i, %s\n",bookshelf[2][4].number,bookshelf[2][4].title);
	
	return 0;
}



