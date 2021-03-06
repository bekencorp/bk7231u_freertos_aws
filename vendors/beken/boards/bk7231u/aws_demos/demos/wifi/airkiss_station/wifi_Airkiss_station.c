/**
 ******************************************************************************
 * @file    wifi_airkiss_station.c
 * @author
 * @version V1.0.0
 * @date
 * @brief   using airkiss connect AP
 ******************************************************************************
 *
 *  The MIT License
 *  Copyright (c) 2017 Beken Inc.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is furnished
 *  to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
 *  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ******************************************************************************
 */
#include "wifi_airkiss_station.h"
#include "include.h"

#if WIFI_AIRKISS_STATION_DEMO
#include "include.h"
#include "rtos_pub.h"
#include "error.h"
#include "wlan_ui_pub.h"
#include "uart_pub.h"
#include "mem_pub.h"
#include "rw_pub.h"
#include "param_config.h"
#include "str_pub.h"

extern u32 airkiss_process(u8 start);

void demo_start( void )
{
    os_printf("\r\n-Airkiss connect SoftAP\r\n");

    airkiss_process(1);
}

#endif /*WIFI_AIRKISS_STATION_DEMO*/

