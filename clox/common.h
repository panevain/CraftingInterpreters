#ifndef CLOX_COMMON_H
#define CLOX_COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define UINT8_COUNT (UINT8_MAX + 1)

#define NAN_BOXING

#ifndef NDEBUG
#define DEBUG_PRINT_CODE
#define DEBUG_TRACE_EXECUTION
//#define DEBUG_STRESS_GC
#define DEBUG_LOG_GC
#endif

#endif