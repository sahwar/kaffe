/*
 * java.io.ObjectOutputStream.c
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "lib-license.terms" for information on usage and redistribution 
 * of this file. 
 */

#include "config.h"
#include "config-std.h"
#include "config-io.h"
#include "config-mem.h"
#include "../../../kaffe/kaffevm/classMethod.h"
#include "../../../kaffe/kaffevm/lookup.h"
#include "../../../kaffe/kaffevm/support.h"
#include <native.h>
#include "defs.h"
#include "files.h"
#include "system.h"
#include "ObjectOutputStream.h"

void
java_io_ObjectOutputStream_outputClassFields(struct Hjava_io_ObjectOutputStream* stream, struct Hjava_lang_Object* obj, struct Hjava_lang_Class* cls, HArrayOfInt* arr)
{
	Method* meth;
	jvalue arg;
	int i;

#define	WRITE(FUNC,SIG,TYPE) \
	do_execute_java_method(stream, #FUNC, #SIG, 0, 0, \
		((jvalue*)obj)[unhand(arr)->body[i+1]].TYPE)

	for (i = 0; i < obj_length(arr); i += 2) {
		switch(unhand(arr)->body[i]) {
		case 'B':
			WRITE(writeByte, (I)V, b);
			break;
		case 'C':
			WRITE(writeChar, (I)V, c);
			break;
		case 'S':
			WRITE(writeShort, (I)V, s);
			break;
		case 'I':
			WRITE(writeInt, (I)V, i);
			break;
		case 'Z':
			WRITE(writeBoolean, (Z)V, z);
			break;
		case 'J':
			WRITE(writeLong, (J)V, j);
			break;
		case 'D':
			WRITE(writeDouble, (D)V, d);
			break;
		case 'F':
			WRITE(writeFloat, (F)V, f);
			break;
		case 'L':
		case '[':
			WRITE(writeObject, (Ljava/lang/Object;)V, l);
			break;
		default:
			SignalError("java.io.InvalidClassException", "Unknown data type");
		}
	}
#undef WRITE
}

jbool
java_io_ObjectOutputStream_invokeObjectWriter(struct Hjava_io_ObjectOutputStream* stream, struct Hjava_lang_Object* obj, struct Hjava_lang_Class* cls)
{
	Method* meth;

	meth = lookupClassMethod(cls, "writeObject", "(Ljava/io/ObjectOutputStream;)V");
	if (meth != 0) {
		do_execute_java_method(obj, 0, 0, meth, 0, stream);

		return (true); 
	}
	else {
		return (false);
        }
}
