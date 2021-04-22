#include <linux/kernel.h>

asmlinkage long sys_hello(void)
{
	printk("Hello ING STIC INFO\n");
	return 0;
}
