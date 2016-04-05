/*************************************************************************
	> File Name: helloworld.c
	> Author: 
	> Mail: 
	> Created Time: 2015年11月25日 星期三 14时55分14秒
 ************************************************************************/
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT "Hello Kernel Init!\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "Hello Kernel Exit!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Pan Chang Tao");
MODULE_DESCRIPTION("A Simple Example of Hello");
MODULE_ALIAS("A Simple Module");
