/* DO NOT EDIT THIS FILE - it is machine generated */
#include <native.h>

#ifndef _Included_java_io_ObjectStreamClass
#define _Included_java_io_ObjectStreamClass

#ifdef __cplusplus
extern "C" {
#endif

/* Header for class java_io_ObjectStreamClass */

typedef struct Classjava_io_ObjectStreamClass {
  struct Hjava_lang_String* name;
  struct Hjava_io_ObjectStreamClass* superclass;
  jbool serializable;
  jbool externalizable;
  HArrayOfObject* fields;
  struct Hjava_lang_Class* ofClass;
  jlong suid;
  HArrayOfInt* fieldSequence;
  jbool hasWriteObjectMethod;
  struct Hjava_io_ObjectStreamClass* localClassDesc;
} Classjava_io_ObjectStreamClass;
HandleTo(java_io_ObjectStreamClass);

extern jint java_io_ObjectStreamClass_getClassAccess(struct Hjava_lang_Class*);
extern HArrayOfObject* java_io_ObjectStreamClass_getMethodSignatures(struct Hjava_lang_Class*);
extern jint java_io_ObjectStreamClass_getMethodAccess(struct Hjava_lang_Class*, struct Hjava_lang_String*);
extern HArrayOfObject* java_io_ObjectStreamClass_getFieldSignatures(struct Hjava_lang_Class*);
extern jint java_io_ObjectStreamClass_getFieldAccess(struct Hjava_lang_Class*, struct Hjava_lang_String*);
extern HArrayOfObject* java_io_ObjectStreamClass_getFields0(struct Hjava_io_ObjectStreamClass*, struct Hjava_lang_Class*);
extern jlong java_io_ObjectStreamClass_getSerialVersionUID(struct Hjava_lang_Class*);
extern jbool java_io_ObjectStreamClass_hasWriteObject(struct Hjava_lang_Class*);

#ifdef __cplusplus
}
#endif

#endif
