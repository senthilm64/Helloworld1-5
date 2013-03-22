#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

static int hello_3_initdata __initdata = 30;

static int __init hello_3_init(void)
{
  printk(KERN_INFO "Hello world %d\n",hello_3_initdata);
  return 0;
}

static void __exit hello_3_exit(void)
{
  printk(KERN_INFO "Good bye\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);