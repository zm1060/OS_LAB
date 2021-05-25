#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

main(){
	int fd,len;
	void *tp;
	struct stat ps;
	fd = open("/home/zero/os-lab/lab5/1.txt",0);
	fstat(fd,&ps);
	len = ps.st_size;
	tp = malloc(len);
	read(fd,tp,len);
	printf("%s\n",tp);
	close(fd);
}
