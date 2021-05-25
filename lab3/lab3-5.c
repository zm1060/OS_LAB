#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
	int data = 5;
	pid_t pid;
	if((pid = fork()) < 0){
		printf("fork error\\n");
		exit(0);
	}
	else if(pid == 0){
		data--;
		printf("child\'s data is:%d\n",data);
		exit(0);
	}else{
		printf("parent\'s data is%d\n",data);
		exit(0);
	}
}
