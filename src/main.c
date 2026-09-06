#include <stdio.h>
#include "system.h"
#include "cpu.h"
#include "memory.h"
#include "storage.h"

int main(void)
{
    printf("========================================\n");
    printf("              EVANDER v0.1\n");
    printf("     Low-Level System Security Tool\n");
    printf("========================================\n\n");

    system_info();
    cpu_info();
    memory_info();
    storage_info();

    return 0;
}