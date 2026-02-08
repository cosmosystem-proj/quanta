/*
 * Creator: Kurt M. Weber
 * Created on: 2025-01-05
 *
 * This file is part of quanta, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#ifndef _QUANTA_PLATFORM_H
#define _QUANTA_PLATFORM_H

#ifdef __STDC_HOSTED__
#include <stdlib.h>
#define malloc_wrapper malloc
#define free_wrapper free
#else
#define malloc_wrapper kmalloc
#define free_wrapper kfree
#endif

#endif