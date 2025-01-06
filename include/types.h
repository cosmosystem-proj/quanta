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
typedef unsigned char uint8_t; // unsigned 8-bit integer
const uint8_t uint8_t_max = 0xFFU;
#define UINT8_T_MAX 0xFFU

typedef signed char int8_t; // signed 8-bit integer
const int8_t int8_t_max = 0x7F;
#define INT8_T_MAX 0x7F
const int8_t int8_t_min = (-0x80);
#define INT8_T_MIN (-0x80)

typedef uint8_t byte_t; // for pure byte data, not arithmetic values

typedef byte_t reg8_t; // 8-bit general-purpose register

// 16-bit types
typedef unsigned short int uint16_t; // unsigned 16-bit integer
const uint16_t uint16_t_max = 0xFFFFU;
#define UINT16_T_MAX 0xFFFFU

typedef signed short int int16_t; // signed 16-bit integer
const int16_t int16_t_max = 0x7FFF;
#define INT16_T_MAX 0x7FFF
const int16_t int16_t_min = (-0x8000);
#define INT16_T_MIN (-0x8000)

typedef uint16_t word_t; // for word-sized raw data, not arithmetic values

typedef word_t reg16_t; // 16-bit general-purpose register

// 32-bit types
typedef unsigned int uint32_t; // unsigned 32-bit integer
const uint32_t uint32_t_max = 0xFFFFFFFFU;
#define UINT32_T_MAX 0xFFFFFFFFU

typedef signed int int32_t; // signed 32-bit integer
const int32_t int32_t_max = 0x7FFFFFFF;
#define INT32_T_MAX = 0x7FFFFFFF
const int32_t int32_t_min = (-0x80000000);
#define INT32_T_MIN (-0x80000000)

typedef uint32_t dword_t; // double-word data, not arithmetic values

typedef dword_t reg32_t; // 32-bit general-purpose register

// 64-bit types
typedef unsigned long int uint64_t; // unsigned 64-bit integer
const uint64_t uint64_t_max = 0xFFFFFFFFFFFFFFFFUL;
#define UINT64_t_MAX 0xFFFFFFFFFFFFFFFFUL

typedef signed long int int64_t; // signed 64-bit integer
const int64_t int64_t_max = 0x7FFFFFFFFFFFFFFFUL;
#define INT64_T_MAX = 0x7FFFFFFFFFFFFFFFUL
const int64_t int64_t_min = -0x8000000000000000UL;
#define INT64_T_MIN = (-0x8000000000000000UL)

typedef uint64_t qword_t; // quadword-dized data, not arithmetic values

typedef uint64_t size_t;

typedef uint64_t ptr_t; // generic pointer type

typedef qword_t reg64_t; // 64-bit general-purpose register

// null values
#ifndef NULL
#define NULL 0
#endif
const uint64_t null = 0;

#endif