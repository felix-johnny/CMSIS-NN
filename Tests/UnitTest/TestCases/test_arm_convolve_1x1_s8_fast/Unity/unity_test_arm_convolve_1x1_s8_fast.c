/*
 * SPDX-FileCopyrightText: Copyright 2010-2020, 2022 Arm Limited and/or its affiliates <open-source-office@arm.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../test_arm_convolve_1x1_s8_fast.c"
#include "unity.h"

#ifdef USING_FVP_CORSTONE_300
extern void uart_init(void);
#endif

/* This function is called from the autogenerated file.
 * The name must be exactly like this
 */
void setUp(void)
{ /* This is run before EACH TEST */
#ifdef USING_FVP_CORSTONE_300
    uart_init();
#endif
}

/* This function is called from the autogenerated file.
 * The name must be exactly like this
 */
void tearDown(void) {}

void test_kernel1x1_arm_convolve_1x1_s8_fast(void) { kernel1x1_arm_convolve_1x1_s8_fast(); }
void test_kernel1x1_stride_x_arm_convolve_1x1_s8(void) { kernel1x1_stride_x_arm_convolve_1x1_s8(); }
void test_kernel1x1_stride_x_y_arm_convolve_1x1_s8(void) { kernel1x1_stride_x_y_arm_convolve_1x1_s8(); }
void test_kernel1x1_stride_x_y_1_arm_convolve_1x1_s8(void) { kernel1x1_stride_x_y_1_arm_convolve_1x1_s8(); }
void test_kernel1x1_stride_x_y_2_arm_convolve_1x1_s8(void) { kernel1x1_stride_x_y_2_arm_convolve_1x1_s8(); }