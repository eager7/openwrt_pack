/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2015年11月27日 星期五 09时40分38秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>

const char * aNameDev = "/dev/gpio_control";
const char *aDevCmd = "mknod /dev/gpio_control c 250 0";

int main(void)
{
	printf("gpio test\n");

	//create the gpio device
	if(access(aNameDev, F_OK) < 0){
		printf("create a new gpio device\n");
		if(-1 == system(aDevCmd)){
		printf("can't create the gpio device\n");
		return -1;
	}
	}
	//open the device 
	int fd_dev = 0;
	if((fd_dev = open(aNameDev, O_RDWR)) < 0){
		printf("can't open the device\n");
		return -2;
	}
	//control the device
	int val = 9;
	if(ioctl(fd_dev, 1, &val) == -1){
		printf("iotcl error 1\n")
	}
	sleep(3);
	val--;
	if(ioctl(fd_dev, 2, &val) == -1){
		printf("iotcl error 2\n")
	}
	sleep(3);
	val--;
	if(ioctl(fd_dev, 3, &val) == -1){
		printf("iotcl error 3\n")
	}
	
	return 0;
}
