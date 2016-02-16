#include "com_yctech_ndktest_OrdiJavaCzWithNatiMds.h"
#include <android/log.h>
JNIEXPORT void JNICALL Java_com_yctech_ndktest_OrdiJavaCzWithNatiMds_nativeSaySth
        (JNIEnv * env, jobject obj)
{
    __android_log_write(ANDROID_LOG_DEBUG,"newnewnew","native层--OrdiJavaCzWithNatiMds_nativeSaySth--");

    //invoke method of class that called this native method
    jclass mycls;
    jmethodID methodId;
    mycls = (*env)->FindClass(env,"com/yctech/ndktest/OrdiJavaCzWithNatiMds");
    methodId = (*env)->GetMethodID(env, mycls, "ordiJavaMdsSaySth","()V");
    (*env)->CallVoidMethod(env, obj, methodId);
    //invoke method of other class that not calle this native method
    jclass other_java_clz;
    jmethodID methodId_other_java_clz;
    jobject other_java_obj;
    other_java_clz = (*env)->FindClass(env,"com/yctech/ndktest/OrdiJavaCz");
    jmethodID construction_id = (*env)->GetMethodID(env, other_java_clz,"<init>", "()V");
    other_java_obj = (*env)->NewObject(env, other_java_clz,construction_id);

    methodId_other_java_clz = (*env)->GetMethodID(env, other_java_clz, "bark","()V");
    (*env)->CallVoidMethod(env, other_java_obj, methodId_other_java_clz);
}