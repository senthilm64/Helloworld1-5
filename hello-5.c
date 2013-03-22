#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("senthilkumar<senthilm64@gmail.com>");

static int myint=20;
static short int myshort=12;
static char *mystring="senthilkumar";

module_param(myint,int,S_IRUSR|S_IRGRP);
MODULE_PARM_DESC(myint,"my integer value");

module_param(myshort,short,S_IWUSR|S_IRGRP);
MODULE_PARM_DESC(myshort,"my short interger");

module_param(mystring,charp,0000);
MODULE_PARM_DESC(mystring,"my name");

static int __init hello_5_init(void)
{
  printk(KERN_INFO "myint value is %d\n ",myint);
  printk(KERN_INFO "myshort int value is %d\n",myshort);
  printk(KERN_INFO "my name is %s\n",mystring);
  return 0;
 }

static void __exit hello_5_exit(void)
{
  printk(KERN_INFO "Good bye\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);
