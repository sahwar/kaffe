/*
 * java.lang.Double.c
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "lib-license.terms" for information on usage and redistribution 
 * of this file. 
 */

#include "config.h"
#include "config-std.h"
#include "config-mem.h"
#include <math.h>
#include "../../../kaffe/kaffevm/classMethod.h"
#include "../../../kaffe/kaffevm/gtypes.h"
#include "../../../kaffe/kaffevm/locks.h"
#include "defs.h"
#include "Double.h"
#include <native.h>

/*
 * Convert double to string.
 */
struct Hjava_lang_String*
java_lang_Double_toString(double val)
{
	char str[MAXNUMLEN];

	sprintf(str, "%.11g", val);
	return (makeJavaString(str, strlen(str)));
}

/*
 * Convert string to double object.
 */
double
java_lang_Double_valueOf0(struct Hjava_lang_String* str)
{
	double value;
	char buf[MAXNUMLEN];
	char* endbuf;

	javaString2CString(str, buf, sizeof(buf));

#if defined(HAVE_STRTOD)
	value = strtod(buf, &endbuf);
	if (*endbuf != 0) {
		SignalError("java.lang.NumberFormatException", "Bad double format");
	}
#else
	/* Fall back on old atof - no error checking */
	value = atof(buf);
#endif

	return (value);
}

/*
 * Convert string into double class. (JDK 1.0.2)
 */
struct Hjava_lang_Double*
java_lang_Double_valueOf(struct Hjava_lang_String* str)
{
	struct Hjava_lang_Double* obj;
	obj = (struct Hjava_lang_Double*)execute_java_constructor("java.lang.Double", 0, "()V");
	unhand(obj)->value = java_lang_Double_valueOf0(str);
	return (obj);
}

/*
 * Convert double to jlong.
 */
jlong
java_lang_Double_doubleToLongBits(double val)
{
	return (*(jlong*)&val);
}

/*
 * Convert jlong to double.
 */
double
java_lang_Double_longBitsToDouble(jlong val)
{
	return (*(double*)&val);
}
