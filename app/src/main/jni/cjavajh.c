#include "com_yctech_ndktest_Ndk.h"
JNIEXPORT jstring JNICALL Java_com_yctech_ndktest_Ndk_getStringFromNative
        (JNIEnv * env, jobject jobject1){
        return (*env)->NewStringUTF(env,"NDK 测试成功--ycc");
}


