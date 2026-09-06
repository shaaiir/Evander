#include <stdio.h>
#include <sys/statvfs.h>
#include "storage.h"

void storage_info(void)
{
    struct statvfs fs;

    if (statvfs("/", &fs) != 0)
    {
        printf("[STORAGE]\n");
        printf("Root filesystem : Unknown\n\n");
        return;
    }

    unsigned long long total =
        (unsigned long long)fs.f_blocks * fs.f_frsize;

    unsigned long long available =
        (unsigned long long)fs.f_bavail * fs.f_frsize;

    unsigned long long used = total - available;

    double used_percent =
        total ? ((double)used / total) * 100.0 : 0.0;

    printf("[STORAGE]\n");
    printf("Root usage : %.2f%%\n\n", used_percent);
}