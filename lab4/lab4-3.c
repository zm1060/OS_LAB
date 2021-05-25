#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
char *buf1="hello world";
main(){
	char buffer[15];
	int fd[2],x,pid;
	if(pipe(fd) < 0){
		perror("管道创建失败i!\n");
		exit(-1);
	}
	pid = fork();
			if(pid == 0){
				write(fd[1],buf1,15);
				printf("%s\n",buf1);
			}else{
				wait(0);
				read(fd[0],buffer,15);
				printf("**%s\n",buf1);
			}
	
}
