/*
 * i386/sco3.2v5/md.h
 * SCO i386 configuration information.
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "license.terms" for information on usage and redistribution 
 * of this file. 
 */

#ifndef __i386_sco3_2v5_md_h
#define __i386_sco3_2v5_md_h

#include "i386/common.h"
#include "i386/threads.h"

#define	POSIX_SIGNALS

#if defined(TRANSLATOR)
#include "jit-md.h"
#endif

#endif
