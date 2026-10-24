/*===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===*
 *
 *  CBoolean.h
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

#ifndef C_BOOLEAN_H
#define C_BOOLEAN_H

#include <CFramework/CTargetConditionals.h>

#if !C_TARGET_COMPILER_ASSEMBLY

#include <stdbool.h>

/**
 * A value type whose instances are either `yes` or `no`.
 */
typedef bool CBoolean;

#define yes 1
#define no 0

#endif

#endif
