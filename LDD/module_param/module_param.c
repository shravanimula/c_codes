#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

int value,array[4];
char *name;
int cb_value=0;

module_param(value,int, S_IRUSR|S_IWUSR);
module_param(name,charp,S_IRUSR|S_IWUSR);
module_param_array(array,int ,NULL,S_IRUSR|S_IWUSR);



/*----------------------Module_param_cb()--------------------------------*/
int notify_param(const char *val, const struct kernel_param *kp)
{
        int res = param_set_int(val, kp); // Use helper for write variable
        if(res==0) {
                printk(KERN_INFO "Call back function called...\n");
                printk(KERN_INFO "New value of cb_valueETX = %d\n", cb_value);
                return 0;
        }
        return -1;
}

const struct kernel_param_ops my_param_ops =
{
        .set = &notify_param, // Use our setter ...
        .get = &param_get_int, // .. and standard getter
};

module_param_cb(cb_value, &my_param_ops, &cb_value, S_IRUGO|S_IWUSR );
/*-------------------------------------------------------------------------*/

/*
** Module init function
*/
static int my_init(void)
{
        int i;
        printk(KERN_INFO "Value = %d \n", value);
        printk(KERN_INFO "cb_value = %d  \n", cb_value);
        printk(KERN_INFO "Name= %s \n", name);
        for (i = 0; i < (sizeof array / sizeof (int)); i++) {
                printk(KERN_INFO "Arr_value[%d] = %d\n", i, array[i]);
        }
        printk(KERN_INFO "Kernel Module Inserted Successfully...\n");
    return 0;
}

/*
** Module Exit function
*/
static void my_exit(void)
{
    printk(KERN_INFO "Kernel Module Removed Successfully...\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("Module param");
