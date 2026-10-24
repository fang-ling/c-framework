#!/bin/bash

##===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===##
##
##  PreviewDocumentation.sh
##  c-framework
##
##  Created by Fang Ling on 2026/5/23.
##
##  This file is part of the CFramework open source project
##
##  Copyright (c) 2026 Fang Ling <fangling@fangl.ing>
##  Licensed under Apache License v2.0
##
##  See LICENSE for license information
##
##  SPDX-License-Identifier: Apache-2.0
##
##===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===##

SYMBOLS_FOLDER="/dev/shm/symbol-graphs"
OUTPUT_FOLDER="/dev/shm/docc"

clang                                                         \
    -extract-api                                              \
    --product-name=CFramework                                 \
    -o $SYMBOLS_FOLDER/CFramework.symbols.json                \
    -x c-header                                               \
    Sources/CFramework/Includes/CFramework/CBoolean.h         \
    Sources/CFramework/Includes/CFramework/CUnsignedInteger.h \
    -ISources/CFramework/Includes                             \
    -I.

docc convert Sources/CFramework/Documentation.docc -o $OUTPUT_FOLDER --additional-symbol-graph-dir $SYMBOLS_FOLDER

echo "========================================"
echo "Starting Local Preview Server"
echo "    Address: http://"$(ip route get 1.1.1.1 | grep -oP '(?<=src\s)\d+(\.\d+){3}')"/documentation/cframework"
echo "========================================"

python3 -m http.server 80 --directory $OUTPUT_FOLDER
