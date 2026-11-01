/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CInteger64.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/11/1.
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

#ifndef C_INTEGER_64_H
#define C_INTEGER_64_H

#include <CFramework/CTargetConditionals.h>

#if !C_TARGET_COMPILER_ASSEMBLY

/**
 * A 64-bit signed integer value type.
 */
typedef long long CInteger64;

#endif

#endif
