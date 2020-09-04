#include <gnu/libc-version.h>

/* This program is used to print the gnu libc version number */

const char *gnu_get_libc_version(void);

int main()
{
  printf("The gnu version of this environment is ");
  printf(gnu_get_libc_version());
  printf("\n");
}
