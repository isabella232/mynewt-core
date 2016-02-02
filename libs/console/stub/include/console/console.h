/**
 * Copyright (c) 2015 Runtime Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <stdarg.h>

typedef void (*console_rx_cb)(int full_line);

static int inline
console_is_init(void)
{
    return 0;
}

static int inline
console_init(console_rx_cb rxcb)
{
    return 0;
}

static int inline
console_read(char *str, int cnt)
{
    return 0;
}

static void inline
console_blocking_mode(void)
{
}

static void inline
console_write(const char *str, int cnt)
{
}

static void inline console_printf(const char *fmt, ...)
    __attribute__ ((format (printf, 1, 2)));

static void inline
console_printf(const char *fmt, ...)
{
}

static int inline
console_vprintf(const char *fmt, va_list args)
{
    return 0;
}

static void inline
console_echo(int on)
{
}

#endif /* __CONSOLE__ */

