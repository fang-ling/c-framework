/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CInteger8.h
 *  c-framework
 *
 *  Created by Fang Ling on 2026/11/7.
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

#ifndef C_INTEGER_8_H
#define C_INTEGER_8_H

#include <CFramework/CTargetConditionals.h>

#if !C_TARGET_COMPILER_ASSEMBLY

/**
 * An 8-bit signed integer value type.
 */
typedef char CInteger8;

#endif

#endif
