//
// Created by JimGw on 2018/12/29.
//

#ifndef SOCKETPROCESS_NATIVE_LIB_H
#define SOCKETPROCESS_NATIVE_LIB_H

#endif //SOCKETPROCESS_NATIVE_LIB_H

#include <sys/select.h>
#include <unistd.h>
#include <sys/socket.h>
#include <pthread.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/un.h>
#include <errno.h>
#include <stdlib.h>
#include <linux/signal.h>
#include <android/log.h>
#define LOG_TAG "TAG"
#define LOGE(...) _android_log_print(ANDROID_LOG_ERROR,LOG_TAG,_VA_ARGS_)

void child_do_work();
void child_listen_msg();
int child_create_channel();