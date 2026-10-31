/* ISC license. */

#include <unistd.h>

#include <skalibs/envexec.h>

#include <sdcl/sdcl.h>
#include "sdcl-internal.h"

#define USAGE "sdcl-s6"
#define dieusage() strerr_dieusage(100, USAGE)

int main (int argc, char const *const *argv)
{
  PROG = "sdcl-s6" ;
  _exit(0) ;
}
