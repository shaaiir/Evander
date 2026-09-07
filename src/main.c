#include <stdio.h>

#include "system.h"
#include "cpu.h"
#include "memory.h"
#include "storage.h"
#include "process.h"

int main(void)
{
    printf("========================================\n");
    printf("              EVANDER v0.2\n");
    printf("     Low-Level System Security Tool\n");
    printf("========================================\n\n");

    system_info();
    cpu_info();
    memory_info();
    storage_info();
    process_info();

    return 0;
}