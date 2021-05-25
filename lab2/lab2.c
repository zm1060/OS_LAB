#include <linux/unistd.h>
int main(){
	int i = getuid();
	printf("Hello world!This is my uid:%d\n",i);
}
