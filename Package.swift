// swift-tools-version: 6.3

//===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===//
//
//  Package.swift
//  c-framework
//
//  Created by Fang Ling on 2026/4/25.
//
//  This source file is part of the CFramework open source project
//
//  Copyright (c) 2026 Fang Ling <fangling@fangl.ing>
//  Licensed under Apache License v2.0
//
//  See LICENSE for license information
//
//  SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------===//

import PackageDescription

let package = Package(
  name: "c-framework",
  products: [
    .library(name: "CFramework", targets: ["CFramework"])
  ],
  targets: [
    .target(name: "CFramework", publicHeadersPath: "Includes"),
    .testTarget(name: "CFrameworkTests", dependencies: ["CFramework"])
  ],
  cLanguageStandard: .c89
)
