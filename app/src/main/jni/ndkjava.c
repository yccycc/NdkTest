#include "com_yctech_ndktest_NdkJava.h"
#include <android/log.h>
int i =1;
JNIEXPORT jstring JNICALL Java_com_yctech_ndktest_NdkJava_say
        (JNIEnv * env, jobject j){
        return (*env)->NewStringUTF(env,"another--ycc!#!");
}
JNIEXPORT jint JNICALL Java_com_yctech_ndktest_NdkJava_sayint
        (JNIEnv * env, jobject obj){
        __android_log_write(ANDROID_LOG_DEBUG,"bbbbb","in c");
        jmethodID methodId;
        jclass mycls;
        mycls = (*env)->FindClass(env,"com/yctech/ndktest/NdkJava");
        methodId = (*env)->GetMethodID(env, mycls, "notNdkZaiJava","()V");
        __android_log_write(ANDROID_LOG_DEBUG,"bbbbb",methodId);
        //(*env)->CallVoidMethod(env, mycls, methodId);
        return ++i;
}
