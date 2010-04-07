CFLAGS="$CFLAGS -Wall"

PHP_ARG_ENABLE(xxxxxxx,
	[whether to enable the xxxxxxx extension],
	[  --enable-xxxxxxx        Enable the xxxxxxx extension])

if test $PHP_XXXXXXX != "no"; then
	
	PHP_REQUIRE_CXX()
	PHP_SUBST(XXXXXXX_SHARED_LIBADD)
	PHP_ADD_LIBRARY(stdc++, 1, XXXXXXX_SHARED_LIBADD)
	PHP_NEW_EXTENSION(xxxxxxx, php_xxxxxxx.cpp, $ext_shared)
	
fi