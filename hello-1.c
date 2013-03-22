#include<linux/kernel.h>
#include<linux/module.h>

int init_module(void)
{
  printk(KERN_INFO "Module is loaded\n");
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Good bye\n");
}
