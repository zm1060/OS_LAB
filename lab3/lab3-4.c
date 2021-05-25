#include <unistd.h>
#include <stdio.h>

main(){
	int pid,n;
	n = 1;
	if((pid = fork()) != 0){
		while(n < 10){
			printf("%d",n++);
			printf("Parents");
		}
	}else{
		while(n<10){
			printf("%d",n++);
			printf("Children");
		}
	}
}
