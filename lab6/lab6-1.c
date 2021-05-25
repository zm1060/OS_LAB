#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdlib.h>
#include <linux/fd.h>
#include <linux/ioctl.h>
main(){
	int fd;
	struct floppy_struct fd_info;
	fd = open("/dev/ttyS0",O_RDWR | O_NOCTTY | O_NDELAY);
	if(!fd){
		fprintf(stderr,"cannot open floppy disk\n");
		exit(1);
	}
	printf("%d",fd);
	if(ioctl(fd,FDGETMEDIAPRM,&fd_info) == -1){
		fprintf(stderr,"cannot get disk parameter.\n");
	}else{
		printf("floopy disk infk\n");
		printf("============================\n");
		printf("no.of sectors=%d\n",fd_info.size);
		printf("sectors per stack=%d\n",fd_info.sect);
		printf("no.of heads=%d\n",fd_info.head);
		printf("no.of.track=%d\n",fd_info.track);
	}
	close(fd);
	return 0;
}
