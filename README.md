cat > README.md <<'EOF'
# EVANDER

### Low-Level System Security Research & Analysis Tool

[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Platform](https://img.shields.io/badge/Platform-macOS-000000?style=for-the-badge&logo=apple&logoColor=white)](https://www.apple.com/macos/)
[![Architecture](https://img.shields.io/badge/Architecture-x86__64-0071C5?style=for-the-badge)](#)
[![Security](https://img.shields.io/badge/Focus-Low--Level%20Security-8B0000?style=for-the-badge)](#)
[![Version](https://img.shields.io/badge/Version-v0.1-4B5563?style=for-the-badge)](#)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)

---

## About

Evander is a low-level system security research and analysis project written in C.

The project is designed to progressively inspect and understand computer systems from the application layer down to operating-system and hardware-related security boundaries.

Evander is also a practical learning project. Each feature is developed alongside a structured low-level system security curriculum covering computer architecture, C, memory, assembly, operating systems, reverse engineering, vulnerability research, kernel security, firmware, virtualization, and hardware security.

---

## Project Goal

The long-term goal of Evander is to evolve from a basic system information inspector into a modular low-level security analysis platform.

```mermaid
flowchart TD
    A[Computer Fundamentals] --> B[C Programming]
    B --> C[Memory]
    C --> D[Assembly]
    D --> E[Operating Systems]
    E --> F[System Internals]
    F --> G[Reverse Engineering]
    G --> H[Binary Security]
    H --> I[Vulnerability Research]
    I --> J[Kernel Security]
    J --> K[Firmware Security]
    K --> L[Hardware Security]
    L --> M[Advanced System Security]

    A -.-> N[EVANDER]
    B -.-> N
    C -.-> N
    D -.-> N
    E -.-> N
    F -.-> N
    G -.-> N
    H -.-> N
    I -.-> N
    J -.-> N
    K -.-> N
    L -.-> N
    M -.-> N
