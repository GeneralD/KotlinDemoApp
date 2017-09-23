#include <jni.h>
#include <string>

extern "C"
jstring
Java_ktapp_demo_zyxw_com_kotlindemoapp_MainActivity_stringFromJNI(
		JNIEnv *env,
		jobject /* this */) {
	std::string hello = "Hello from C++";
	return env->NewStringUTF(hello.c_str());
}
