//
// Created by Maverick on 2022/1/26.
//
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void sigint_handler(int sig) {
    printf("Received SIGINT.\n");
}

void sigtstp_handler(int sig) {
    printf("Received SIGTSTP.\n");
}

void snooze(void) {
    sleep(3);
    pause();
    printf("Sleep for 3 secs.");
}

int main(void) {
    printf("Test");
    sigset_t mask = {SIGINT}, prev_mask = {};

    signal(SIGINT, sigint_handler);
    signal(SIGTSTP, sigtstp_handler);
    pause();
    sigprocmask(SIG_BLOCK, &mask, &prev_mask);
    pause();

    return 0;
}
