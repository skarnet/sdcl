/* ISC license. */

#ifndef SDCL_H
#define SDCL_H

#include <sys/types.h>

typedef struct sdcl_service_s sdcl_service_t ;
struct sdcl_service_s
{
  int dummy ;
} ;
#define SDCL_SERVICE_ZERO { 0 }

typedef struct sdcl_context_s sdcl_context_t ;
struct sdcl_context_s
{
  int dummy ;
} ;
#define SDCL_CONTEXT_ZERO { 0 }

/* Parsing */

extern int sdcl_parse (sdcl_context_t *, char const **, size_t, unsigned int) ;


#endif
