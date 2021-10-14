#include "com_kimliu_fmodproject_MainActivity.h"


extern "C"
JNIEXPORT void JNICALL Java_com_kimliu_fmodproject_MainActivity_voiceChangeNative
        (JNIEnv * env, jobject thiz, jint mode, jstring path){

    // 解析path 解析成C语言认识的字符
    const char * _path = env->GetStringUTFChars(path,NULL);

    // 接下来是调用FMOD库中的方法



}