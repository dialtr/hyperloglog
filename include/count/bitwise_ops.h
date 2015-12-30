// Copyright 2015 The libcount Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License. See the AUTHORS file for names of
// contributors.

#ifndef INCLUDE_COUNT_BITWISE_OPS_H_
#define INCLUDE_COUNT_BITWISE_OPS_H_

#include <stdint.h>

// Count the number of leading zeroes in the 64-bit unsigned quantity.
// Adapted from the text "Hacker's Delight" by Henry S. Warren.
uint64_t nlz64(uint64_t x);

#endif  // INCLUDE_COUNT_BITWISE_OPS_H_
