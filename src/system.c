#include <stdio.h>
#include <sys/utsname.h>
#include "system.h"

void system_info(void)
{
    struct utsname info;

    if (uname(&info) != 0)
    {
        printf("[!] Failed to retrieve system information.\n");
        return;
    }

    printf("[SYSTEM]\n");
    printf("OS           : %s\n", info.sysname);
    printf("Hostname     : %s\n", info.nodename);
    printf("Kernel       : %s\n", info.release);
    printf("Architecture : %s\n\n", info.machine);
}