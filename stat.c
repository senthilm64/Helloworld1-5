#include<linux/kernel.h>
#include<linux/module.h>

int init_module(void)
{
  printk(KERN_INFO "Hello world\n");
  return 0;
}
