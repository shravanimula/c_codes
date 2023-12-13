#include<linux/init.h>
#include<linux/module.h>


static int my_init(void)
{
	printk("hello world\n");
	printk("kernel module inserted\n");
	return 0;
}

void my_exit(void)
{
	printk("kernel module removed\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("simple hello world");
