#ifndef LSEC_OPTIONS_H
#define LSEC_OPTIONS_H

/*--------------------------------------------------------------------------
 * LuaSec 0.8
 *
 * Copyright (C) 2006-2019 Bruno Silvestre
 *
 *--------------------------------------------------------------------------*/

#include "compat.h"

struct lsec_ssl_option_s {
  const char *name;
  unsigned long code;
};

typedef struct lsec_ssl_option_s lsec_ssl_option_t;

LSEC_API lsec_ssl_option_t* lsec_get_ssl_options();

#endif
