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

set -eou pipefail

FOLDER_PREFIX=$([[ "$(uname -s)" == "Darwin" ]] && echo "/tmp" || echo "/dev/shm")
SYMBOLS_FOLDER=$FOLDER_PREFIX"/symbol-graphs"
OUTPUT_FOLDER=$FOLDER_PREFIX"/docc"
DOCC=$([[ "$(uname -s)" == "Darwin" ]] && echo "xcrun docc" || echo "docc")

FRAMEWORK_NAME="CFramework"
HEADERS=(
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CBoolean.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CInteger.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CNull.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CString.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CUnsignedInteger.h
  Sources/$FRAMEWORK_NAME/Includes/$FRAMEWORK_NAME/CUnsignedInteger32.h
)

clang                                               \
    -extract-api                                    \
    --product-name=$FRAMEWORK_NAME                  \
    -o $SYMBOLS_FOLDER/$FRAMEWORK_NAME.symbols.json \
    -x c-header                                     \
    "${HEADERS[@]}"                                 \
    -ISources/$FRAMEWORK_NAME/Includes              \
    -I.

if [[ "$(uname -s)" == "Darwin" ]]; then
  $DOCC preview Sources/$FRAMEWORK_NAME/Documentation.docc -o $OUTPUT_FOLDER --additional-symbol-graph-dir $SYMBOLS_FOLDER
else
  $DOCC convert Sources/$FRAMEWORK_NAME/Documentation.docc -o $OUTPUT_FOLDER --additional-symbol-graph-dir $SYMBOLS_FOLDER

  echo "========================================"
  echo "Starting Local Preview Server"
  echo "    Address: http://"$(ip route get 1.1.1.1 | grep -oP '(?<=src\s)\d+(\.\d+){3}')"/documentation/cframework"
  echo "========================================"

  python3 -m http.server 80 --directory $OUTPUT_FOLDER
fi
