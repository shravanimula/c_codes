#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8adcaed, "param_set_int" },
	{ 0x122c3a7e, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x18302b07, "param_get_int" },
	{ 0x836565b7, "param_array_ops" },
	{ 0x30bfc2c, "param_ops_int" },
	{ 0xfe9616e6, "param_ops_charp" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45C7F58F739CBC071E86A35");
