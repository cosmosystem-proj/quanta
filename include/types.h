/*
 * Creator: Kurt M. Weber
 * Created on: 2025-01-01
 *
 * This file is part of quanta, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#ifndef _QUANTA_TYPES_H
#define _QUANTA_TYPES_H

// 8-bit types
typedef unsigned char uint8; // unsigned 8-bit integer
static const uint8 uint8_max = 0xFFU;
#define UINT8_MAX 0xFFU

typedef signed char int8; // signed 8-bit integer
static const int8 int8_max = 0x7F;
#define INT8_MAX 0x7F
static const int8 int8_min = (-0x80);
#define INT8_MIN (-0x80)

typedef uint8 byte; // for pure byte data, not arithmetic values

typedef byte reg8; // 8-bit general-purpose register

// 16-bit types
typedef unsigned short int uint16; // unsigned 16-bit integer
static const uint16 uint16_max = 0xFFFFU;
#define UINT16_MAX 0xFFFFU

typedef signed short int int16; // signed 16-bit integer
static const int16 int16_max = 0x7FFF;
#define INT16_MAX 0x7FFF
static const int16 int16_min = (-0x8000);
#define INT16_MIN (-0x8000)

typedef uint16 word; // for word-sized raw data, not arithmetic values

typedef word reg16; // 16-bit general-purpose register

// 32-bit types
typedef unsigned int uint32; // unsigned 32-bit integer
static const uint32 uint32_max = 0xFFFFFFFFU;
#define UINT32_MAX 0xFFFFFFFFU

typedef signed int int32; // signed 32-bit integer
static const int32 int32_max = 0x7FFFFFFF;
#define INT32_MAX = 0x7FFFFFFF
static const int32 int32_min = (-0x80000000);
#define INT32_MIN (-0x80000000)

typedef uint32 dword; // double-word data, not arithmetic values

typedef dword reg32; // 32-bit general-purpose register

// 64-bit types
typedef unsigned long int uint64; // unsigned 64-bit integer
static const uint64 uint64_max = 0xFFFFFFFFFFFFFFFFUL;
#define UINT64_MAX 0xFFFFFFFFFFFFFFFFUL

typedef signed long int int64; // signed 64-bit integer
static const int64 int64_max = 0x7FFFFFFFFFFFFFFFUL;
#define INT64_MAX = 0x7FFFFFFFFFFFFFFFUL
static const int64 int64_min = -0x8000000000000000UL;
#define INT64_MIN = (-0x8000000000000000UL)

typedef uint64 qword; // quadword-dized data, not arithmetic values

typedef uint64 size_t;

typedef uint64 ptr; // generic pointer type

typedef qword reg64; // 64-bit general-purpose register

// null values
#ifndef NULL
#define NULL ((void *)0)
#endif
static const uint64 null = 0;

typedef _Bool bool;

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

#endif