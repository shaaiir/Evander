#include <stdio.h>
#include <sys/sysctl.h>
#include "memory.h"

void memory_info(void)
{
    unsigned long long memory = 0;
    size_t size = sizeof(memory);

    if (sysctlbyname("hw.memsize", &memory, &size, NULL, 0) != 0)
    {
        printf("[MEMORY]\n");
        printf("Total RAM : Unknown\n\n");
        return;
    }

    printf("[MEMORY]\n");
    printf("Total RAM  : %.2f GB\n\n",
           (double)memory / (1024.0 * 1024.0 * 1024.0));
}