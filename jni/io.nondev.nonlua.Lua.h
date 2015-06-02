/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_nondev_nonlua_Lua */

#ifndef _Included_io_nondev_nonlua_Lua
#define _Included_io_nondev_nonlua_Lua
#ifdef __cplusplus
extern "C" {
#endif
#undef io_nondev_nonlua_Lua_GLOBALS
#define io_nondev_nonlua_Lua_GLOBALS -10002L
#undef io_nondev_nonlua_Lua_REGISTRY
#define io_nondev_nonlua_Lua_REGISTRY -10000L
#undef io_nondev_nonlua_Lua_NONE
#define io_nondev_nonlua_Lua_NONE -1L
#undef io_nondev_nonlua_Lua_NIL
#define io_nondev_nonlua_Lua_NIL 0L
#undef io_nondev_nonlua_Lua_BOOLEAN
#define io_nondev_nonlua_Lua_BOOLEAN 1L
#undef io_nondev_nonlua_Lua_LIGHTUSERDATA
#define io_nondev_nonlua_Lua_LIGHTUSERDATA 2L
#undef io_nondev_nonlua_Lua_NUMBER
#define io_nondev_nonlua_Lua_NUMBER 3L
#undef io_nondev_nonlua_Lua_STRING
#define io_nondev_nonlua_Lua_STRING 4L
#undef io_nondev_nonlua_Lua_TABLE
#define io_nondev_nonlua_Lua_TABLE 5L
#undef io_nondev_nonlua_Lua_FUNCTION
#define io_nondev_nonlua_Lua_FUNCTION 6L
#undef io_nondev_nonlua_Lua_USERDATA
#define io_nondev_nonlua_Lua_USERDATA 7L
#undef io_nondev_nonlua_Lua_THREAD
#define io_nondev_nonlua_Lua_THREAD 8L
#undef io_nondev_nonlua_Lua_MULTRET
#define io_nondev_nonlua_Lua_MULTRET -1L
#undef io_nondev_nonlua_Lua_YIELD
#define io_nondev_nonlua_Lua_YIELD 1L
#undef io_nondev_nonlua_Lua_RUNTIME_ERROR
#define io_nondev_nonlua_Lua_RUNTIME_ERROR 2L
#undef io_nondev_nonlua_Lua_SYNTAX_ERROR
#define io_nondev_nonlua_Lua_SYNTAX_ERROR 3L
#undef io_nondev_nonlua_Lua_MEMORY_ERROR
#define io_nondev_nonlua_Lua_MEMORY_ERROR 4L
#undef io_nondev_nonlua_Lua_HANDLER_ERROR
#define io_nondev_nonlua_Lua_HANDLER_ERROR 5L
#undef io_nondev_nonlua_Lua_GC_STOP
#define io_nondev_nonlua_Lua_GC_STOP 0L
#undef io_nondev_nonlua_Lua_GC_RESTART
#define io_nondev_nonlua_Lua_GC_RESTART 1L
#undef io_nondev_nonlua_Lua_GC_COLLECT
#define io_nondev_nonlua_Lua_GC_COLLECT 2L
#undef io_nondev_nonlua_Lua_GC_COUNT
#define io_nondev_nonlua_Lua_GC_COUNT 3L
#undef io_nondev_nonlua_Lua_GC_COUNTB
#define io_nondev_nonlua_Lua_GC_COUNTB 4L
#undef io_nondev_nonlua_Lua_GC_STEP
#define io_nondev_nonlua_Lua_GC_STEP 5L
#undef io_nondev_nonlua_Lua_GC_SETPAUSE
#define io_nondev_nonlua_Lua_GC_SETPAUSE 6L
#undef io_nondev_nonlua_Lua_GC_SETSTEPMUL
#define io_nondev_nonlua_Lua_GC_SETSTEPMUL 7L
/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpen
 * Signature: (I)Lio/nondev/nonlua/CPtr;
 */
JNIEXPORT jobject JNICALL Java_io_nondev_nonlua_Lua_jniOpen
  (JNIEnv *, jclass, jint);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniClose
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniClose
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenBase
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenBase
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenBit32
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenBit32
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenCoroutine
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenCoroutine
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenDebug
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenDebug
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenIo
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenIo
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenJava
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenJava
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenMath
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenMath
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenOs
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenOs
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenPackage
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenPackage
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenString
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenString
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenTable
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenTable
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniOpenUtf8
 * Signature: (Lio/nondev/nonlua/CPtr;)V
 */
JNIEXPORT void JNICALL Java_io_nondev_nonlua_Lua_jniOpenUtf8
  (JNIEnv *, jclass, jobject);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniLoadBuffer
 * Signature: (Lio/nondev/nonlua/CPtr;[BJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_nondev_nonlua_Lua_jniLoadBuffer
  (JNIEnv *, jclass, jobject, jbyteArray, jlong, jstring);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniLoadString
 * Signature: (Lio/nondev/nonlua/CPtr;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_nondev_nonlua_Lua_jniLoadString
  (JNIEnv *, jclass, jobject, jstring);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniRunBuffer
 * Signature: (Lio/nondev/nonlua/CPtr;[BJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_nondev_nonlua_Lua_jniRunBuffer
  (JNIEnv *, jclass, jobject, jbyteArray, jlong, jstring);

/*
 * Class:     io_nondev_nonlua_Lua
 * Method:    jniRunString
 * Signature: (Lio/nondev/nonlua/CPtr;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_nondev_nonlua_Lua_jniRunString
  (JNIEnv *, jclass, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
