#include <linux/init.h>
#include <linux/module.h>

static int __init hello_world_init(void) {
  pr_info("Module started");
  return 0;
}


static void __exit hello_world_exit(void) {
  pr_info("Module exited"); 
}

module_init(hello_world_init);
module_exit(hello_world_exit);
MODULE_LICENSE("Dual BSD/GPL");
