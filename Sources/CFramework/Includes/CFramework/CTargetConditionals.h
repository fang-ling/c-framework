/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CTargetConditionals.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/10/24.
 *
 *  This source file is part of the CFramework open source project
 *
 *  Copyright (c) 2026 Fang Ling <fangling@fangl.ing>
 *  Licensed under Apache License v2.0
 *
 *  See LICENSE for license information
 *
 *  SPDX-License-Identifier: Apache-2.0
 *
 *===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*/

#ifndef C_TARGET_CONDITIONALS_H
#define C_TARGET_CONDITIONALS_H

#if defined(__APPLE__)

#define C_TARGET_OS_APPLE   1
#define C_TARGET_OS_FREEBSD 0
#define C_TARGET_OS_LINUX   0
#define C_TARGET_OS_WASI    0

#elif defined(__FreeBSD__)

#define C_TARGET_OS_APPLE   0
#define C_TARGET_OS_FREEBSD 1
#define C_TARGET_OS_LINUX   0
#define C_TARGET_OS_WASI    0

#elif defined(__linux__)

#define C_TARGET_OS_APPLE   0
#define C_TARGET_OS_FREEBSD 0
#define C_TARGET_OS_LINUX   1
#define C_TARGET_OS_WASI    0

#elif defined(__wasi__)

#define C_TARGET_OS_APPLE   0
#define C_TARGET_OS_FREEBSD 0
#define C_TARGET_OS_LINUX   0
#define C_TARGET_OS_WASI    1

#else

#define C_TARGET_OS_APPLE   0
#define C_TARGET_OS_FREEBSD 0
#define C_TARGET_OS_LINUX   0
#define C_TARGET_OS_WASI    0

#endif

#if defined(__cplusplus)

#define C_TARGET_COMPILER_C_PLUS_PLUS 1
#define C_TARGET_COMPILER_OBJECTIVE_C 0
#define C_TARGET_COMPILER_ASSEMBLY    0

#elif defined(__OBJC__)

#define C_TARGET_COMPILER_C_PLUS_PLUS 0
#define C_TARGET_COMPILER_OBJECTIVE_C 1
#define C_TARGET_COMPILER_ASSEMBLY    0

#elif defined(__ASSEMBLER__)

#define C_TARGET_COMPILER_C_PLUS_PLUS 0
#define C_TARGET_COMPILER_OBJECTIVE_C 0
#define C_TARGET_COMPILER_ASSEMBLY    1

#endif

#endif
