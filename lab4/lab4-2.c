#include <stdio.h>
#include <stdlib.h>

main(){
	int x,fd[2];
	char S[30];
	pipe(fd);
	for(;;){
		x = fork();
		if(x==0){
			sprintf(S,"Good-night!\n");
			write(fd[1],S,20);
			sleep(3);
			exit(0);
		}else{
			wait(0);
			read(fd[0],S,20);
			printf("********* %s\n",S);
		}
	}
}
