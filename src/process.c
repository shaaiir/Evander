#include <stdio.h>
#include <stdlib.h>
#include <libproc.h>

#include "process.h"

#define MAX_PROCESSES 1024

void process_info(void)
{
    pid_t pids[MAX_PROCESSES];

    int count = proc_listpids(
        PROC_ALL_PIDS,
        0,
        pids,
        sizeof(pids)
    );

    if (count <= 0)
    {
        printf("[PROCESSES]\n");
        printf("Unable to retrieve process information.\n\n");
        return;
    }

    int process_count = count / sizeof(pid_t);

    printf("[PROCESSES]\n");
    printf("Running Processes : %d\n\n", process_count);

    printf("%-8s %-40s\n", "PID", "PROCESS");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < process_count; i++)
    {
        pid_t pid = pids[i];

        if (pid <= 0)
        {
            continue;
        }

        char path[PROC_PIDPATHINFO_MAXSIZE];

        int result = proc_pidpath(
            pid,
            path,
            sizeof(path)
        );

        if (result > 0)
        {
            printf("%-8d %-40s\n", pid, path);
        }
        else
        {
            printf("%-8d %-40s\n", pid, "[access denied]");
        }
    }

    printf("\n");
}