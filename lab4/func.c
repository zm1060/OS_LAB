#include <stdio.h>
#include <stdlib.h>
int func();
main(){
	int i,j;
	signal(17,func);
	if(i=fork()){
		printf("Parent: Signal 17 will be send to Child!\n");
		kill(i,17);
		wait(0);
		printf("Parent: finished!\n");
	}else{
		sleep(10);
		printf("Child: A signal from my Parent is received!\n");
		exit(0);
	}
}

func(){
	printf("It is signal 17 processing function!\n");
}
