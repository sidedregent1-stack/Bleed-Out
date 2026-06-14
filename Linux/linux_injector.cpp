#include <iostream>
#include <string>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/user.h>

// Basic Linux/Proton injector skeleton for Bleed Out
// Compile: g++ linux_injector.cpp -o linux_injector

int main() {
    std::cout << "Bleed Out Linux Injector (ptrace based) - Experimental\n";
    std::cout << "Find VRChat PID (Proton/Wine) and attach.\n";
    // TODO: Implement full ptrace attach, memory write, and load shared object (.so)
    // For full features, port the Windows manual map logic using Linux syscalls.
    return 0;
}