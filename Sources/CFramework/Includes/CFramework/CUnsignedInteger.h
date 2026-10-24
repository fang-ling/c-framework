/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CUnsignedInteger.h
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

#ifndef C_UNSIGNED_INTEGER_H
#define C_UNSIGNED_INTEGER_H

#include <CFramework/CTargetConditionals.h>

#if !C_TARGET_COMPILER_ASSEMBLY

/**
 * An unsigned integer value type.
 *
 * On 32-bit platforms, ``CUnsignedInteger`` is the same size as ``CUnsignedInteger32``, and on 64-bit platforms, ``CUnsignedInteger`` is the same size as ``CUnsignedInteger64``.
 */
typedef unsigned long CUnsignedInteger;

#endif

#endif
