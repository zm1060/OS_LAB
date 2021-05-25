#include <stdio.h>
main(){
	int i,j,k;
	if(i == fork()){
		printf("parent process!\n");
		printf("i=%d k=%d\n",i,k);
	}else{
		k = getpid();
		printf("child process!\n");
		printf("i=%d k=%d\n",i,k);
	}
}
