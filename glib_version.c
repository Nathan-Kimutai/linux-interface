#include <gnu/libc-version.h>

/* This program is used to print the gnu libc version number 
 * You can also use the confstr to get the configuration of _CS_GNU_LIBC_VERSION
 * The confstr() returns string such as glibc 2.12.
 * */

const char *gnu_get_libc_version(void);

void confstr_get_version() {
  prinf("The gnu libc version is");
}

int main()
{
  printf("The gnu version of this environment is ");
  printf(gnu_get_libc_version());
  printf("\n");
}
