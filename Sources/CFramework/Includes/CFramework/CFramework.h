/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CFramework.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/4/25.
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

#ifndef C_FRAMEWORK_H
#define C_FRAMEWORK_H

#include <CFramework/CBoolean.h>
#include <CFramework/CTargetConditionals.h>
#include <CFramework/CUnsignedInteger.h>

#if !C_TARGET_COMPILER_ASSEMBLY

#include <stddef.h>

#endif

#define let __auto_type

#define C_ASSUME_NONNULL_BEGIN _Pragma("clang assume_nonnull begin")
#define C_ASSUME_NONNULL_END   _Pragma("clang assume_nonnull end")

#define nonnil _Nonnull
#define nillable _Nullable

#endif
