/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CBase.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/10/31.
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

#ifndef C_BASE_H
#define C_BASE_H

#define let __auto_type

#define C_ASSUME_NONNULL_BEGIN _Pragma("clang assume_nonnull begin")
#define C_ASSUME_NONNULL_END   _Pragma("clang assume_nonnull end")

#define nonnil _Nonnull
#define nillable _Nullable

#define C_INLINE static __inline__ __attribute__((always_inline))

#endif
