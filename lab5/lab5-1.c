#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void){
	char *str;
	if((str=(char*)malloc(10))==NULL){
		printf("not enough memory to allocate buffer\n");
		exit(1);
	}
	strcpy(str,"hello");
	printf("string is %s\n",str);
	free(str);
	return 0;
}
