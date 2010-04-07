#ifndef PHP_XXXXXXX_H
#define PHP_XXXXXXX_H

#define PHP_XXXXXXX_EXTNAME "xxxxxxx"
#define PHP_XXXXXXX_EXTVER  "1.0"

#define XXXXXXX_NAMESPACE "xxxxxxx"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

extern "C" {
#include "php.h"
}

extern zend_module_entry xxxxxxx_module_entry;
#define phpext_xxxxxxx_ptr &xxxxxxx_module_entry;

#endif /* PHP_XXXXXXX_H */
