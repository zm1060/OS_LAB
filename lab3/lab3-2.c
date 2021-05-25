#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

main(){
	int pid;
	if(pid == fork()){
		wait();
		printf("it is a parent process\n");
	}else{
		printf("it is a child process\n");
		exit(0);
	}
	printf("it is end\n");
}

