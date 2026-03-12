#include <stdio.h>

#include <unistd.h>  // This one contains POSIX system calls for interacting with the operating system.
#include <sys/utsname.h>  // This header gives access to kernel and architecture information through a structure called utsname.
#include <sys/types.h> // That header defines many of the fundamental POSIX data types used across the system.
#include "system_info.h"  

void infoprint(const char *label, const char *value) {
    printf("[+] %s : %s\n", label, value);
}
void infoprint(const char *label, long value) {
    printf("[+] %s : %ld\n", label, value);
}

void run_system_info(){

    uid_t uid = getuid(); 
    pid_t pid = getpid();
    
    long hostid = gethostid();

    char hostname[50];
    int hostname = gethostname(hostname, sixeof(hostname));

    gid_t egid = getegid();
    uid_t euid = geteuid();
    gid_t gid = getgid();
    int groups = getgroups(int, gid_t []);
    pid_t sid = getsid(pid_t);
    

    char *login = getlogin();
    int login_r =  getlogin_r(char *, size_t);
    
    // for parents
    pid_t pgid = getpgid(pid_t);
    pid_t pgrp = getpgrp();
    pid_t ppid = getppid();
    

    // there are also set functions for these btw


}