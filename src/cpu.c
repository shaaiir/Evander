#include <stdio.h>
#include <sys/sysctl.h>
#include "cpu.h"

void cpu_info(void)
{
    int cpu_count = 0;
    size_t size = sizeof(cpu_count);

    if (sysctlbyname("hw.logicalcpu", &cpu_count, &size, NULL, 0) != 0)
    {
        printf("[CPU]\n");
        printf("Logical CPUs : Unknown\n\n");
        return;
    }

    printf("[CPU]\n");
    printf("Logical CPUs : %d\n\n", cpu_count);
}