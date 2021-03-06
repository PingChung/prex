/*-
 * Copyright (c) 2005-2006, Kohsuke Ohtani
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the author nor the names of any co-contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * kbd_img.h
 */

const unsigned char cursor_bitmap[] = {

/*
 * Cursor size 09
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 11
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 12
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 13
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 15
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x7F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 17
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 19
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*
 * Cursor size 52
 */
0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};


/*
 * Keyboard 1 (normal)
 */
const unsigned char kbd1_bitmap[] = {

0xFF,0xFF,0xFF,0x0F,0xEF,0xEF,0xEF,0xEF,
0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0x6D,0xEF,
0xFF,0xFF,0xFF,0x00,0xEF,0x2E,0xEE,0x6E,
0xFF,0xFF,0xFF,0x00,0xEF,0x2C,0xEB,0x2C,
0xFF,0xFF,0xFF,0x00,0xEF,0xAC,0xAB,0xAC,
0xFF,0xFF,0xFF,0x00,0xEF,0x2D,0xAD,0x2D,
0xFF,0xFF,0xFF,0x00,0xEF,0x68,0xAF,0x2C,
0xFF,0xFF,0xFF,0x00,0xEF,0x2C,0xEF,0xEC,

0xFF,0xFF,0xFF,0x00,0xEF,0x68,0xAB,0x6D,
0xFF,0xFF,0xFF,0x00,0xEF,0x6C,0xAB,0x6C,
0xFF,0xFF,0xFF,0x00,0xEF,0x6C,0xAB,0xA8,
0xFF,0xFF,0xFF,0x00,0xEF,0xEC,0xEB,0x6B,
0xFF,0xFF,0xFF,0x00,0xEF,0xEF,0x6F,0xEC,
0xFF,0xFF,0xFF,0x00,0xEF,0xEF,0xEC,0x6F,
0xFF,0xFF,0xFF,0x00,0xFF,0xFD,0xFE,0x00,
0xFF,0xFF,0xFF,0xF8,0xFB,0xFB,0xFB,0xFB,

0xEF,0xEF,0xEF,0x0F,0xEF,0x2F,0xEF,0xEF,
0xEF,0xEF,0xEF,0x00,0xFF,0xB8,0xAE,0x26,
0xAE,0x2E,0xEF,0x00,0xFB,0x1B,0x6B,0x6A,
0xEF,0x28,0xEF,0x00,0xFB,0xAB,0xAB,0xAB,
0x2B,0xEC,0xEF,0x00,0xFB,0x1A,0xEA,0x0A,
0xE8,0x2D,0xEF,0x00,0xFB,0x2B,0xCA,0xEA,
0xAB,0x6C,0xEF,0x00,0xFB,0xBA,0x0B,0xBB,
0xEB,0xEC,0xEF,0x00,0xFB,0xEB,0xEA,0x1B,

0xAE,0x6E,0xEF,0x00,0xFB,0xEA,0xEA,0xEA,
0xEB,0x6C,0xEF,0x00,0xFB,0xBA,0xFA,0xBA,
0xAB,0x6C,0xEF,0x00,0xFB,0x1B,0xEB,0xEB,
0xEB,0xEC,0xEF,0x00,0xFB,0x0B,0xEA,0x0A,
0x6F,0xEF,0xEF,0x00,0xFB,0x3B,0xBA,0xBB,
0xEC,0xEF,0xEF,0x00,0xFB,0x9B,0xBB,0xBB,
0xFE,0xFD,0xFF,0x00,0xFB,0xEB,0xDB,0xBB,
0xFB,0xFB,0xFB,0xF8,0xFB,0xFB,0xFB,0xFB,

0xEF,0xEF,0xEF,0x0F,0xEF,0x6F,0xAF,0xAF,
0xAA,0x22,0xFF,0x00,0xFF,0xF8,0xBF,0x9F,
0x1A,0x7A,0xFB,0x00,0xEF,0x6F,0xE8,0x6A,
0xAB,0x5B,0xFB,0x00,0xEF,0x6C,0xAB,0x68,
0xEA,0x1B,0xFB,0x00,0xEF,0xE8,0x6F,0xAC,
0xEB,0xEA,0xFB,0x00,0xEF,0xEB,0x68,0x2B,
0xBB,0x7B,0xFB,0x00,0xEF,0x68,0xAF,0x6C,
0xFB,0x0A,0xFB,0x00,0xEF,0xAC,0xAB,0x28,

0x6A,0x9B,0xFB,0x00,0xEF,0xEF,0xEC,0xEB,
0xBA,0xBA,0xFB,0x00,0xEF,0xAD,0xAF,0xAD,
0xEB,0x1B,0xFB,0x00,0xEF,0xEB,0xED,0xEE,
0xEA,0xEB,0xFB,0x00,0xEF,0xEE,0xEE,0xEE,
0xBB,0x3B,0xFB,0x00,0xEF,0xEF,0xEE,0xEF,
0xBB,0x9B,0xFB,0x00,0xEF,0xEE,0xEE,0x6F,
0x7B,0xFB,0xFB,0x00,0xFF,0xBD,0xBE,0x80,
0xFB,0xFA,0xFB,0xF8,0xFB,0xFB,0xFB,0xFB,

0xAF,0x6F,0xEF,0x0F,0xEF,0x2F,0xAF,0x2F,
0xAF,0x88,0xFF,0x00,0xFF,0xFA,0xBB,0xE2,
0xA8,0x6E,0xEF,0x00,0xBF,0xBD,0xB6,0xA2,
0xEB,0x28,0xEF,0x00,0xBF,0xA0,0xB7,0xBB,
0xAB,0x6C,0xEF,0x00,0xBF,0xAE,0xB5,0xBB,
0x6B,0x68,0xEF,0x00,0xBF,0xB1,0xAE,0xBE,
0xEF,0x6F,0xEF,0x00,0xBF,0xAE,0xAE,0xB5,
0xAB,0xAC,0xEF,0x00,0xBF,0xBE,0xBE,0xB0,

0xAB,0x6B,0xEF,0x00,0xBF,0xB0,0xAE,0xAE,
0x2D,0xAC,0xEF,0x00,0xBF,0xB5,0xAA,0xAA,
0xED,0xEB,0xEF,0x00,0xBF,0xBF,0xBF,0xBF,
0xEE,0x6D,0xEF,0x00,0xBF,0xBF,0xBF,0xBF,
0xEE,0xEF,0xEF,0x00,0xBF,0xAF,0xB7,0xBB,
0xEF,0xEF,0xEF,0x00,0xFF,0x8A,0xAA,0xAA,
0xFE,0xFD,0xFF,0x00,0xFE,0x32,0xAA,0xAA,
0xFB,0xFB,0xFB,0xF8,0xFB,0xFA,0xFA,0xFA,

0xEF,0x2F,0xEF,0x0F,0xEF,0x2F,0xAF,0x2F,
0xAA,0xAA,0xFF,0x00,0x7F,0x49,0x6D,0x69,
0xB4,0xB6,0xBF,0x00,0xFF,0x45,0x55,0x55,
0xBD,0xA0,0xBF,0x00,0xFB,0xCA,0xAB,0xAA,
0xB5,0xAE,0xBF,0x00,0xBF,0xA8,0xAA,0xA8,
0xAE,0xB1,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xB5,0xBB,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAE,0xB0,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,

0xAE,0xAE,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAA,0xAA,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xBB,0xBD,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xBF,0xBB,0xBF,0x00,0xFB,0xBB,0xBB,0xAB,
0xBD,0xBE,0xBF,0x00,0xFB,0xBB,0x1B,0xAA,
0x8A,0xE8,0xFF,0x00,0xFB,0xBB,0xDB,0x0A,
0xAA,0xB2,0xFE,0x00,0xFB,0xBB,0x7B,0x0A,
0xFA,0xFA,0xFB,0xF8,0xFB,0xFB,0xFB,0xFA,

0xAF,0x2F,0xEF,0x0F,0xFF,0xFF,0xFF,0xFF,
0x6B,0x49,0x7F,0x00,0xFF,0xFF,0xFF,0xFF,
0xD5,0x55,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAA,0xCA,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xAE,0xA8,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,

0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0x1B,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xBB,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xDB,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0x7B,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xFB,0xFB,0xFB,0xF8,0xFF,0xFF,0xFF,0xFF,

};


/*
 * Keyboard 2 (Shifted)
 */
const unsigned char kbd2_bitmap[] = {


0xFF,0xFF,0xFF,0x0F,0xEF,0x6F,0xAF,0xEF,
0xFF,0xFF,0xFF,0x00,0xEF,0xED,0xEE,0xEF,
0xFF,0xFF,0xFF,0x00,0xEF,0x6E,0xAE,0xAE,
0xFF,0xFF,0xFF,0x00,0xEF,0x68,0x2A,0x68,
0xFF,0xFF,0xFF,0x00,0xEF,0x6D,0xA8,0x2D,
0xFF,0xFF,0xFF,0x00,0xEF,0xA8,0xEE,0xE8,
0xFF,0xFF,0xFF,0x00,0xEF,0xEB,0x6D,0xEE,
0xFF,0xFF,0xFF,0x00,0xEF,0x6E,0xAD,0x6F,

0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0xAD,0x6A,
0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0x6A,0x6C,
0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0xEF,0xEF,
0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0xED,0xED,
0xFF,0xFF,0xFF,0x00,0xEF,0xEF,0xEF,0x2F,
0xFF,0xFF,0xFF,0x00,0xEF,0xEE,0xEE,0x68,
0xFF,0xFF,0xFF,0x00,0xFF,0xFD,0xFE,0x00,
0xFF,0xFF,0xFF,0xF8,0xFB,0xFB,0xFB,0xFB,

0xEF,0xEF,0xEF,0x0F,0xEF,0x2F,0xEF,0xEF,
0xEF,0xEF,0xEF,0x00,0xFF,0xB8,0xAE,0x26,
0xAF,0x6E,0xEF,0x00,0xFB,0x1B,0xEB,0xAA,
0x2F,0x6C,0xEF,0x00,0xFB,0xEB,0xEA,0xAA,
0xE8,0x2D,0xEF,0x00,0xFB,0x0A,0xEA,0x0A,
0x6A,0xAC,0xEF,0x00,0xFB,0x0A,0xEB,0x0B,
0xEF,0xEB,0xEF,0x00,0xFB,0x0B,0xBA,0xBB,
0xAF,0x2F,0xEF,0x00,0xFB,0xEA,0xEB,0x5B,

0xAD,0xEA,0xEF,0x00,0xFB,0xEA,0xEA,0xEB,
0x6A,0xEE,0xEF,0x00,0xFB,0xBA,0xBA,0xBA,
0xEF,0xEE,0xEF,0x00,0xFB,0x1B,0xEB,0xEB,
0xED,0x2E,0xEF,0x00,0xFB,0x0B,0xEA,0xEA,
0xEF,0xE8,0xEF,0x00,0xFB,0x3B,0xBA,0xDA,
0xEE,0xEE,0xEF,0x00,0xFB,0x9B,0xBB,0x7B,
0xFE,0xFD,0xFF,0x00,0xFB,0xBB,0xBB,0xFB,
0xFB,0xFB,0xFB,0xF8,0xFB,0xFB,0xFB,0xFB,

0xEF,0xEF,0xEF,0x0F,0xEF,0x6F,0xAF,0xAF,
0xAA,0x22,0xFF,0x00,0xFF,0xF8,0xBF,0x9F,
0x6A,0x9A,0xFB,0x00,0xEF,0x6F,0xA8,0xAA,
0x4B,0xEA,0xFB,0x00,0xEF,0x6C,0xAB,0x6B,
0xEA,0x0A,0xFB,0x00,0xEF,0x28,0xAF,0xAC,
0xEB,0xEA,0xFB,0x00,0xEF,0x2C,0xAB,0x2B,
0xBA,0xBA,0xFB,0x00,0xEF,0x68,0xAF,0xAC,
0xBB,0xBB,0xFB,0x00,0xEF,0xA8,0xAF,0x28,

0xEB,0x1B,0xFB,0x00,0xEF,0x6B,0xEB,0xE8,
0xBA,0xBB,0xFB,0x00,0xEF,0xA8,0xAB,0xAB,
0xEB,0x1B,0xFB,0x00,0xEF,0xAB,0xAD,0xAE,
0x0A,0xEB,0xFB,0x00,0xEF,0xEF,0xEF,0xEF,
0xBB,0x3B,0xFB,0x00,0xEF,0x6F,0x6E,0xEF,
0xBB,0x9B,0xFB,0x00,0xEF,0xED,0xED,0x6F,
0xBB,0xBB,0xFB,0x00,0xFF,0xBD,0xBE,0x80,
0xFB,0xFB,0xFB,0xF8,0xFB,0xFB,0xFB,0xFB,

0xAF,0x6F,0xEF,0x0F,0xEF,0x2F,0xAF,0x2F,
0xAF,0x88,0xFF,0x00,0xFF,0xFA,0xBB,0xE2,
0x28,0xAE,0xEF,0x00,0xBF,0xBD,0xB6,0xA2,
0xE8,0x2B,0xEF,0x00,0xBF,0xA0,0xB7,0xBB,
0xAB,0x2C,0xEF,0x00,0xBF,0xAE,0xB5,0xBB,
0xAB,0xAC,0xEF,0x00,0xBF,0xA1,0xBE,0xBE,
0xAF,0x6F,0xEF,0x00,0xBF,0xAE,0xAE,0xB5,
0xAB,0xA8,0xEF,0x00,0xBF,0xB0,0xAE,0xB0,

0xAB,0x6B,0xEF,0x00,0xBF,0xAE,0xAC,0xAA,
0x2B,0xAC,0xEF,0x00,0xBF,0xAE,0xA4,0xAA,
0xAD,0x2B,0xEF,0x00,0xBF,0xB7,0xBB,0xBD,
0xEF,0xE8,0xEF,0x00,0xBF,0xBD,0xBB,0xB7,
0xEE,0xEF,0xEF,0x00,0xBF,0xB1,0xAE,0xB3,
0xEF,0xEF,0xEF,0x00,0xFF,0x8A,0xAA,0xAA,
0xFE,0xFD,0xFF,0x00,0xFE,0x32,0xAA,0xAA,
0xFB,0xFB,0xFB,0xF8,0xFB,0xFA,0xFA,0xFA,

0xEF,0x2F,0xEF,0x0F,0xEF,0x2F,0xAF,0x2F,
0xAA,0xAA,0xFF,0x00,0x7F,0x49,0x6D,0x69,
0xB4,0xB6,0xBF,0x00,0xFF,0x45,0x55,0x55,
0xBD,0xA0,0xBF,0x00,0xFB,0xCA,0xAB,0xAA,
0xB5,0xAE,0xBF,0x00,0xBF,0xA8,0xAA,0xA8,
0xBE,0xA1,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xB5,0xBB,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAE,0xB0,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,

0xA6,0xAE,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAE,0xAE,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xBB,0xB7,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xBB,0xBD,0xBF,0x00,0xFB,0xBB,0xBB,0xAB,
0xBF,0xBB,0xBF,0x00,0xFB,0xBB,0x1B,0xAA,
0x8A,0xE8,0xFF,0x00,0xFB,0xBB,0xDB,0x0A,
0xAA,0xB2,0xFE,0x00,0xFB,0xBB,0x7B,0x0A,
0xFA,0xFA,0xFB,0xF8,0xFB,0xFB,0xFB,0xFA,

0xAF,0x2F,0xEF,0x0F,0xFF,0xFF,0xFF,0xFF,
0x6B,0x49,0x7F,0x00,0xFF,0xFF,0xFF,0xFF,
0xD5,0x55,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xAA,0xCA,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xAE,0xA8,0xBF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,

0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,
0x1B,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xBB,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xDB,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0x7B,0xBB,0xFB,0x00,0xFF,0xFF,0xFF,0xFF,
0xFB,0xFB,0xFB,0xF8,0xFF,0xFF,0xFF,0xFF,

};
