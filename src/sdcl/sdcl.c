/* ISC license. */

#include <unistd.h>

#include <skalibs/envexec.h>

#define USAGE "sdcl"
#define dieusage() strerr_dieusage(100, USAGE)

int main (int argc, char const *const *argv)
{
  PROG = "sdcl" ;
  _exit(0) ;
}
