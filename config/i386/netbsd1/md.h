/*
 * i386/netbsd1/md.h
 * NetBSD i386 configuration information.
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "license.terms" for information on usage and redistribution 
 * of this file. 
 */

#ifndef __i386_netbsd1_md_h
#define __i386_netbsd1_md_h

#include "i386/common.h"
#include "i386/threads.h"

/*
 * Redefine stack pointer offset.
 */
#undef SP_OFFSET
#define SP_OFFSET 2

#if defined(TRANSLATOR)
#include "jit-md.h"
#endif

#endif
