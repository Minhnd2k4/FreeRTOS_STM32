# FreeRTOS_STM32
Learning FreeRTOS with STM32F103C8T6 following Hands-On RTOS with Microcontrollers. Covers tasks, scheduling, synchronization, queues, memory management, interrupts, timers, and debugging with SEGGER SystemView/Ozone.
# FreeRTOS with STM32 – Study Notes

This repository contains my study notes and examples based on the book  
**"Hands-On RTOS with Microcontrollers" by Brian Amos**.  
The book is a practical guide for building real-time embedded systems using **FreeRTOS**, **STM32 MCUs**, and **SEGGER debug tools**.

---

## 📘 About the Book
The book is divided into **17 chapters across 4 parts**, each focusing on a different aspect of RTOS development.

### 1. RTOS Concepts (Ch.1–3)
- **Intro to RTOS** – Why and when to use an RTOS vs. super-loop.  
- **Tasks** – Compare super-loop programming vs. task-based scheduling.  
- **Task Communication** – Signaling, queues, semaphores, mutexes.  

### 2. Toolchain Setup (Ch.4–6)
- **MCU Selection** – Memory, CPU, peripherals; why STM32 Nucleo-F767ZI is chosen.  
- **IDE Setup** – Installing STM32CubeIDE, importing examples.  
- **Debugging** – Using SEGGER Ozone & SystemView for real-time analysis.  

### 3. RTOS Application Examples (Ch.7–9)
- **Scheduler** – Creating tasks, static vs. dynamic memory allocation.  
- **Synchronization** – Protect shared data with semaphores, mutexes, timers.  
- **Inter-task Communication** – Queues (by value/reference) and direct task notifications.  

### 4. Advanced RTOS Techniques (Ch.10–17)
- **Drivers & ISRs** – Polling, interrupts, DMA, stream buffers.  
- **Sharing Peripherals** – Thread-safe hardware access (USB VCP example).  
- **Architecture Design** – Abstraction, loose coupling with queues.  
- **API Choices** – CMSIS-RTOS vs. FreeRTOS native API.  
- **Memory Management** – Heap strategies, MPU, static vs. dynamic allocation.  
- **Multi-core & Multi-processor** – Communication via CAN, Ethernet, SPI.  
- **Troubleshooting** – Debugging tips, stack overflow checks, configAssert.  

---

## 🎯 Goals of this Repository
- Learn FreeRTOS concepts systematically.  
- Practice with **STM32 real hardware examples**.  
- Build skills in modular, concurrent, real-time embedded software.  

---
