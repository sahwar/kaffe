/*
 * parisc/threads.h
 * HP-UX threading information.
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "license.terms" for information on usage and redistribution 
 * of this file. 
 */

#ifndef __parisc_hpux_threads_h
#define __parisc_hpux_threads_h

/* Stacks go up on the PARISC */
#define	STACK_GROWS_UP	1
 
/**/
/* Thread handling */
/**/ 
#define USE_INTERNAL_THREADS  
  
/* Not sure on this... */
#define THREADSTACKSIZE		(32 * 1024)

/*
 * Stack offset.
 * This is the offset into the setjmp buffer where the stack pointer is
 * stored.  This may be different with different OSes.
 */
#define	SP_OFFSET		?

#endif
