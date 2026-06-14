# Linux / Proton Version of Bleed Out

**Note:** VRChat on Linux runs through Proton (Wine). Full native Windows features need adaptation.

## Current Status
- Basic Linux injector skeleton provided.
- Full feature parity (ESP drawing, complex crashes) requires porting Windows code.
- Use ptrace or LD_PRELOAD for injection on Linux/Proton.

## How to Use on Linux
1. Install Steam + Proton for VRChat.
2. Use the Linux loader (compile with g++).
3. The Linux version uses different injection (ptrace based).

## Porting Guide
- Replace WinAPI with Linux equivalents (ptrace, /proc/<pid>/mem).
- Memory reading/writing uses process_vm_readv / process_vm_writev or ptrace.
- For drawing/ESP on Proton: hook into the Wine/Proton graphics layer or use overlay.
- Crashes can often stay similar if game functions are found via dumper.

## Files in this folder
- linux_injector.cpp : Basic ptrace-based injector skeleton for Linux/Proton.

Full Windows version is recommended for complete features. Linux support is experimental.