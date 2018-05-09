#include <linux/module.h>


static int __init hello_init(void)
{
	printk("Enter: %s\n", __FUNCTION__);
	return 0;
}

static void __exit hello_exit(void)
{
	printk("Enter: %s!\n", __FUNCTION__);
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Zhouyj");
