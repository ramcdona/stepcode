#ifndef NULLPTR_H
#define NULLPTR_H

#include <sc_cf.h>

#ifdef HAVE_NULLPTR
#include <cstddef>
#else
#  if ( _MSC_VER > 1600 )
#    ifndef nullptr_t
#      define nullptr_t void*
#    endif
#  endif
#  ifndef nullptr
#    define nullptr NULL
#  endif
#endif //HAVE_NULLPTR

#endif //NULLPTR_H
