#include <jni.h>
#include "native-lib.h"
#include <string>

void child_do_work(){
    //开启socket服务端
    if(child_create_channel()){
        child_listen_msg();
    }
}

/**
 * 创建服务端的socket
 */
void child_listen_msg(){

}
/**
 * 服务端读取信息
 * 客户端
 * @return
 */
int child_create_channel(){
    int listenfd = socket(AF_LOCAL,SOCK_STREAM,0);
    return 0;
}
extern "C"
JNIEXPORT void JNICALL
Java_com_zjw_socketprocess_Watcher_createWatcher(JNIEnv *env, jobject instance, jstring userId_) {
    const char *userId = env->GetStringUTFChars(userId_, 0);

    // 开双进程
    pid_t pid=fork();
    if (pid<0){
        //失败
    } else if(pid ==0){
        //子进程 守护进程
        child_do_work();
    } else if(pid >0){
        //父进程
    }

    env->ReleaseStringUTFChars(userId_, userId);
}