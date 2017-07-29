#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
MODULE_AUTHOR("Mashkur A Khadmi");
MODULE_VERSION("V1.0");
MODULE_LICENSE("GPL");
static int first_init(void)
{
	printk("First Driver\n");
	return 0;
}
static void first_exit(void)
{
	printk("First Exited\n");
}
module_init(first_init);
module_exit(first_exit);
MODULE_DESCRIPTION("First Device Driver Module");
