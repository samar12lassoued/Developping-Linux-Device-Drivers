#include <linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

static int hello_init(void){
printk("hello, From the device driver hhhh \n");
return 0;
}


static void hello_exit (void){
printk("Good bye, see you next time with further Device Drivers  \n");
}

module_init(hello_init);
module_exit(hello_exit);


MODULE_AUTHOR ("Samar ");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(" First hello world linux device driver");