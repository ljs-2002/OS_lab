#ifndef PATCH_H
#define PATCH_H

typedef unsigned long (*kln_p)(const char*);
kln_p get_kln_p(void);

#endif
