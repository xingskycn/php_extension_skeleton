#include "php_xxxxxxx.h"
#include "ext/standard/info.h"

PHP_FUNCTION(hello_world) {
	php_printf("Hello World!\n");
}

static function_entry xxxxxxx_functions[] = {
	ZEND_NS_FE(XXXXXXX_NAMESPACE, hello_world, NULL)
	{ NULL, NULL, NULL }
};

PHP_MINIT_FUNCTION(xxxxxxx) {
	return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(xxxxxxx) {
	return SUCCESS;
}

PHP_RINIT_FUNCTION(xxxxxxx) {
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(xxxxxxx) {
	return SUCCESS;
}

PHP_MINFO_FUNCTION(xxxxxxx) {
	php_info_print_table_start();
	php_info_print_table_row(2, "Sample extension", "It works!");
	php_info_print_table_end();
}

zend_module_entry xxxxxxx_module_entry = {
	STANDARD_MODULE_HEADER,
	PHP_XXXXXXX_EXTNAME,
	xxxxxxx_functions,
	PHP_MINIT(xxxxxxx),
	PHP_MSHUTDOWN(xxxxxxx),
	PHP_RINIT(xxxxxxx),
	PHP_RSHUTDOWN(xxxxxxx),
	PHP_MINFO(xxxxxxx),
	PHP_XXXXXXX_EXTVER,
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_XXXXXXX
extern "C" {
ZEND_GET_MODULE(xxxxxxx)
}
#endif
