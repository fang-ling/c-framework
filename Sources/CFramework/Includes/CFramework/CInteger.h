/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CInteger.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/10/25.
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

#ifndef C_INTEGER_H
#define C_INTEGER_H

#include <CFramework/CTargetConditionals.h>

#if !C_TARGET_COMPILER_ASSEMBLY

/**
 * A signed integer value type.
 *
 * On 32-bit platforms, ``CInteger`` is the same size as ``CInteger32``, and on 64-bit platforms, ``CInteger`` is the same size as ``CInteger64``.
 */
typedef long CInteger;

#endif

#endif
