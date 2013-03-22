#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

#define  device_author "senthilkumar<senthilm64@gmail.com>"
#define device_desc "simple driver"

MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_4_init(void)
{
  printk(KERN_INFO "Hello world\n");
  return 0;
}

static void __exit hello_4_exit(void)
{
  printk(KERN_INFO "Good bye\n");
}

MODULE_AUTHOR(device_author);
MODULE_DESCRIPTION(device_desc);
MODULE_SUPPORTED_DEVICE("testdevice");

module_init(hello_4_init);
module_exit(hello_4_exit);
