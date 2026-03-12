#include <stdio.h>
#include "modules/system_info.h"
#include "modules/env_scan.h"
#include "modules/suid_scan.h"
#include "modules/process_scan.h"

int main() {
    printf("=== Defender Enumeration Tool v0.1 ===\n\n");

    run_system_info();
    printf("\n");

    run_env_scan();
    printf("\n");

    run_suid_scan();
    printf("\n");

    run_process_scan();
    printf("\n");

    return 0;
}