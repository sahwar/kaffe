/* DO NOT EDIT THIS FILE - it is machine generated */
#include <native.h>

#ifndef _Included_java_lang_SecurityManager
#define _Included_java_lang_SecurityManager

#ifdef __cplusplus
extern "C" {
#endif

/* Header for class java_lang_SecurityManager */

typedef struct Classjava_lang_SecurityManager {
  jbool inCheck;
  jbool initialized;
} Classjava_lang_SecurityManager;
HandleTo(java_lang_SecurityManager);

extern HArrayOfObject* java_lang_SecurityManager_getClassContext(struct Hjava_lang_SecurityManager*);
extern struct Hjava_lang_ClassLoader* java_lang_SecurityManager_currentClassLoader(struct Hjava_lang_SecurityManager*);
extern jint java_lang_SecurityManager_classDepth(struct Hjava_lang_SecurityManager*, struct Hjava_lang_String*);
extern jint java_lang_SecurityManager_classLoaderDepth(struct Hjava_lang_SecurityManager*);
extern struct Hjava_lang_Class* java_lang_SecurityManager_currentLoadedClass0(struct Hjava_lang_SecurityManager*);

#ifdef __cplusplus
}
#endif

#endif
