#include <stdio.h>

main(){
	int pid;
	if(pid == fork()){
		printf("It is a parent process\n");
	}else{
		printf("It is a child process\n");
	}
	printf("it is end\n");
	pause();
}
