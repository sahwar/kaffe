/* DO NOT EDIT THIS FILE - it is machine generated */
#include <native.h>

#ifndef _Included_java_lang_Thread
#define _Included_java_lang_Thread

#ifdef __cplusplus
extern "C" {
#endif

/* Header for class java_lang_Thread */

typedef struct Classjava_lang_Thread {
  HArrayOfChar* name;
  jint priority;
  struct Hjava_lang_Thread* threadQ;
  struct Hkaffe_util_Ptr* PrivateInfo;
  jbool daemon;
  jbool interrupting;
  struct Hjava_lang_Runnable* target;
  struct Hjava_lang_ThreadGroup* group;
  struct Hkaffe_util_Ptr* exceptPtr;
  struct Hkaffe_util_Ptr* exceptObj;
  struct Hkaffe_util_Ptr* jnireferences;
  jbool dying;
#define java_lang_Thread_MIN_PRIORITY 1
#define java_lang_Thread_NORM_PRIORITY 5
#define java_lang_Thread_MAX_PRIORITY 10
} Classjava_lang_Thread;
HandleTo(java_lang_Thread);

extern struct Hjava_lang_Thread* java_lang_Thread_currentThread();
extern void java_lang_Thread_yield();
extern void java_lang_Thread_sleep(jlong);
extern void java_lang_Thread_start(struct Hjava_lang_Thread*);
extern jbool java_lang_Thread_isInterrupted(struct Hjava_lang_Thread*, jbool);
extern jbool java_lang_Thread_isAlive(struct Hjava_lang_Thread*);
extern jint java_lang_Thread_countStackFrames(struct Hjava_lang_Thread*);
extern void java_lang_Thread_setPriority0(struct Hjava_lang_Thread*, jint);
extern void java_lang_Thread_stop0(struct Hjava_lang_Thread*, struct Hjava_lang_Object*);
extern void java_lang_Thread_suspend0(struct Hjava_lang_Thread*);
extern void java_lang_Thread_resume0(struct Hjava_lang_Thread*);
extern void java_lang_Thread_interrupt0(struct Hjava_lang_Thread*);

#ifdef __cplusplus
}
#endif

#endif
