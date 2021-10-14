#include <jni.h>

// xxx.h ---- xxx.c     早期
// xxx.hpp ---- xxx.cpp
// xxx.h ----  xxx.cpp  兼容的，可以的

// xxx.hpp 是头文件而已

#include <fmod.hpp> // TODO 最后一步 FMOD的头文件，必须导入，才能使用功能

#include <string>

#ifndef _Included_com_derry_derry_voicechange_MainActivity
#define _Included_com_derry_derry_voicechange_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
#undef com_derry_derry_voicechange_MainActivity_MODE_NORMAL
#define com_derry_derry_voicechange_MainActivity_MODE_NORMAL 0L
#undef com_derry_derry_voicechange_MainActivity_MODE_LUOLI
#define com_derry_derry_voicechange_MainActivity_MODE_LUOLI 1L
#undef com_derry_derry_voicechange_MainActivity_MODE_DASHU
#define com_derry_derry_voicechange_MainActivity_MODE_DASHU 2L
#undef com_derry_derry_voicechange_MainActivity_MODE_JINGSONG
#define com_derry_derry_voicechange_MainActivity_MODE_JINGSONG 3L
#undef com_derry_derry_voicechange_MainActivity_MODE_GAOGUAI
#define com_derry_derry_voicechange_MainActivity_MODE_GAOGUAI 4L
#undef com_derry_derry_voicechange_MainActivity_MODE_KONGLING
#define com_derry_derry_voicechange_MainActivity_MODE_KONGLING 5L
/*
 * Class:     com_derry_derry_voicechange_MainActivity
 * Method:    voiceChangeNative
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_kimliu_fmodproject_MainActivity_voiceChangeNative
  (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
