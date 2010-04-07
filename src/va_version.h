/*
 * Copyright (C) 2009 Splitted-Desktop Systems. All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef VA_VERSION_H
#define VA_VERSION_H

/**
 * VA_MAJOR_VERSION:
 *
 * The major version of the VA library (1, if %VA_VERSION is 1.2.3)
 */
#define VA_MAJOR_VERSION   (0)

/**
 * VA_MINOR_VERSION:
 *
 * The minor version of the VA library (2, if %VA_VERSION is 1.2.3)
 */
#define VA_MINOR_VERSION   (31)

/**
 * VA_MICRO_VERSION:
 *
 * The micro version of the VA library (3, if %VA_VERSION is 1.2.3)
 */
#define VA_MICRO_VERSION   (0)

/**
 * VA_VERSION:
 *
 * The full version of the VA library, like 1.2.3
 */
#define VA_VERSION         0.31.0

/**
 * VA_VERSION_S:
 *
 * The full version of the VA library, in string form (suited for
 * string concatenation)
 */
#define VA_VERSION_S       "0.31.0"

/**
 * VA_VERSION_HEX:
 *
 * Numerically encoded version of the VA library, like 0x010203
 */
#define VA_VERSION_HEX     ((VA_MAJOR_VERSION << 24) | \
                            (VA_MINOR_VERSION << 16) | \
                            (VA_MICRO_VERSION << 8))

/**
 * VA_CHECK_VERSION:
 * @major: major version, like 1 in 1.2.3
 * @minor: minor version, like 2 in 1.2.3
 * @micro: micro version, like 3 in 1.2.3
 *
 * Evaluates to %TRUE if the version of the VA library is greater
 * than @major, @minor and @micro
 */
#define VA_CHECK_VERSION(major,minor,micro) \
        (VA_MAJOR_VERSION > (major) || \
         (VA_MAJOR_VERSION == (major) && VA_MINOR_VERSION > (minor)) || \
         (VA_MAJOR_VERSION == (major) && VA_MINOR_VERSION == (minor) && VA_MICRO_VERSION >= (micro)))

#endif /* VA_VERSION_H */
