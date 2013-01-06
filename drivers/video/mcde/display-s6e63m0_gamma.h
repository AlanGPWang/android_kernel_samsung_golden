/* linux/drivers/video/samsung/s6e63m0_brightness.h
 *
 * Gamma level definitions.
 *
 * Copyright (c) 2009 Samsung Electronics
 * InKi Dae <inki.dae@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef _S6E63M0_BRIGHTNESS_H
#define _S6E63M0_BRIGHTNESS_H

#define DEFAULT_GAMMA_LEVEL		10	//(aka. default brightness 160)
#define MAX_GAMMA_LEVEL		26

#define MIN_BRIGHTNESS		0
#define MAX_BRIGHTNESS		255
#define DEFAULT_BRIGHTNESS	120

#define SLEEPMSEC		0x1000
#define ENDDEF			0x2000
#define DEFMASK			0xFF00
#define COMMAND_ONLY	0xFE
#define DATA_ONLY		0xFF

/* gamma value: 2.2 */
static const unsigned short s6e63m0_22_300[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x70,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x4E,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xAF,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xA5,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xFC,
	
	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_290[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x71,
	DATA_ONLY, 0x70,
	DATA_ONLY, 0x50,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xB0,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xA4,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xFA,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_280[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x4D,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB1,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xA5,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF7,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_270[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x71,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x50,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB0,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xA6,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF4,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_260[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x74,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x54,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xB0,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xA7,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB0,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF1,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_250[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x74,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x54,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xA7,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xED,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_240[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x76,
	DATA_ONLY, 0x6F,
	DATA_ONLY, 0x56,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xA8,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAA,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xE9,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_230[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x75,
	DATA_ONLY, 0x6F,
	DATA_ONLY, 0x56,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xA8,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xE6,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_220[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x78,
	DATA_ONLY, 0x6F,
	DATA_ONLY, 0x58,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xA9,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xE2,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_210[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x79,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x57,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xB7,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xAA,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA0,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xDD,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_200[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x79,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x58,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xAA,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9F,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9D,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD9,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_190[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x59,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xAC,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9D,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD5,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_180[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7B,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x5B,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x99,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x97,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD0,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_170[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0x5C,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x96,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x94,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xCC,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_160[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x5F,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x94,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x91,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xC8,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_150[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x80,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x5F,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8F,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8D,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xC2,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_140[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x80,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x5F,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB7,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xBE,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_130[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x8C,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x60,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xAF,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x88,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x86,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB8,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_120[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x82,
	DATA_ONLY, 0x6B,
	DATA_ONLY, 0x5E,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xB1,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x85,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x82,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB3,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_110[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x86,
	DATA_ONLY, 0x6A,
	DATA_ONLY, 0x60,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x80,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAD,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_100[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x86,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0x60,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA7,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_90[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x89,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0x64,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xD5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x77,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x76,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA0,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_80[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x89,
	DATA_ONLY, 0x68,
	DATA_ONLY, 0x65,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xD5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x73,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x72,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9A,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_70[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x8E,
	DATA_ONLY, 0x62,
	DATA_ONLY, 0x6B,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB7,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xD7,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x94,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_60[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x91,
	DATA_ONLY, 0x5E,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xD7,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x67,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8D,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_50[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x96,
	DATA_ONLY, 0x58,
	DATA_ONLY, 0x72,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xD6,
	DATA_ONLY, 0xD9,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x83,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_40[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x97,
	DATA_ONLY, 0x58,
	DATA_ONLY, 0x71,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xD9,
	DATA_ONLY, 0xDC,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x5B,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x5A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7A,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_22_30[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0xA1,
	DATA_ONLY, 0x51,
	DATA_ONLY, 0x7B,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xDA,
	DATA_ONLY, 0xDD,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x53,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x52,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6F,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

/* gamma value: 1.9 */
static const unsigned short s6e63m0_19_300[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x79,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x5B,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xAB,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB7,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xFC,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_290[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x78,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x5B,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xAC,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xFB,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_280[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7B,
	DATA_ONLY, 0x7D,
	DATA_ONLY, 0x5F,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB4,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF8,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_270[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xAD,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF5,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_260[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x79,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x5E,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xF2,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_250[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x78,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x5E,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xAF,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAC,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xEE,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_240[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xAF,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA9,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xEA,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_230[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xAF,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xE6,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_220[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x62,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xB0,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA5,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA3,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xE2,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_210[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7B,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA2,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA0,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xDD,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_200[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7B,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9F,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9D,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD9,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_190[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7D,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x63,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBA,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB2,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD5,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_180[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x80,
	DATA_ONLY, 0x82,
	DATA_ONLY, 0x65,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xB3,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x99,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x97,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xD0,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_170[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7D,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x96,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x94,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xCB,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_160[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x61,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xB5,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0xD5,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x93,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x90,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xC7,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_150[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x63,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xD2,
	DATA_ONLY, 0xD6,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8F,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8D,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xC2,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_140[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x65,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBC,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xD3,
	DATA_ONLY, 0xD6,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xBE,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_130[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x82,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xB6,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xD7,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x88,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x86,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB8,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_120[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x83,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB8,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0xD7,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x85,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x83,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xB3,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_110[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x85,
	DATA_ONLY, 0x81,
	DATA_ONLY, 0x6A,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xBF,
	DATA_ONLY, 0xC4,
	DATA_ONLY, 0xC8,
	DATA_ONLY, 0xB9,
	DATA_ONLY, 0xD5,
	DATA_ONLY, 0xD9,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x80,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7E,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xAD,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_100[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x86,
	DATA_ONLY, 0x81,
	DATA_ONLY, 0x6B,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xBE,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xC9,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xD5,
	DATA_ONLY, 0xDA,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA7,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_90[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x88,
	DATA_ONLY, 0x81,
	DATA_ONLY, 0x6D,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xD6,
	DATA_ONLY, 0xDA,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x78,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x76,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0xA1,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_80[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x8E,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x72,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xBB,
	DATA_ONLY, 0xD8,
	DATA_ONLY, 0xDB,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x73,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x71,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x9B,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_70[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x92,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x75,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC2,
	DATA_ONLY, 0xC7,
	DATA_ONLY, 0xCC,
	DATA_ONLY, 0xBD,
	DATA_ONLY, 0xD8,
	DATA_ONLY, 0xDC,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6E,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6C,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x94,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_60[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x93,
	DATA_ONLY, 0x7F,
	DATA_ONLY, 0x74,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xD8,
	DATA_ONLY, 0xDD,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x69,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x67,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x8C,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_50[] = {
	0xFA, 0x02,
 
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x94,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0x73,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xCA,
	DATA_ONLY, 0xCE,
	DATA_ONLY, 0xC0,
	DATA_ONLY, 0xDB,
	DATA_ONLY, 0xDF,
	DATA_ONLY, 0xD4,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x62,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x60,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x83,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_40[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x93,
	DATA_ONLY, 0x77,
	DATA_ONLY, 0x72,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC5,
	DATA_ONLY, 0xCB,
	DATA_ONLY, 0xCF,
	DATA_ONLY, 0xC1,
	DATA_ONLY, 0xDD,
	DATA_ONLY, 0xE0,
	DATA_ONLY, 0xD6,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x5B,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x5A,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x7A,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

static const unsigned short s6e63m0_19_30[] = {
	0xFA, 0x02,
	
	DATA_ONLY, 0x18,
	DATA_ONLY, 0x08,
	DATA_ONLY, 0x24,
	DATA_ONLY, 0x9D,
	DATA_ONLY, 0x75,
	DATA_ONLY, 0x7C,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xD0,
	DATA_ONLY, 0xC6,
	DATA_ONLY, 0xCD,
	DATA_ONLY, 0xD1,
	DATA_ONLY, 0xC3,
	DATA_ONLY, 0xDE,
	DATA_ONLY, 0xE1,
	DATA_ONLY, 0xD8,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x53,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x52,
	DATA_ONLY, 0x00,
	DATA_ONLY, 0x6F,

	0xFA, 0x03,

	ENDDEF, 0x0000
};

struct s6e63m0_gamma {
	u16 *gamma_22_table[MAX_GAMMA_LEVEL];
	u16 *gamma_19_table[MAX_GAMMA_LEVEL];
};

static struct s6e63m0_gamma gamma_table = {
	.gamma_22_table[0] = (u16 *)&s6e63m0_22_30,
	.gamma_22_table[1] = (u16 *)&s6e63m0_22_40,
	.gamma_22_table[2] = (u16 *)&s6e63m0_22_70,
	.gamma_22_table[3] = (u16 *)&s6e63m0_22_80,
	.gamma_22_table[4] = (u16 *)&s6e63m0_22_90,
	.gamma_22_table[5] = (u16 *)&s6e63m0_22_100,
	.gamma_22_table[6] = (u16 *)&s6e63m0_22_110,
	.gamma_22_table[7] = (u16 *)&s6e63m0_22_120,
	.gamma_22_table[8] = (u16 *)&s6e63m0_22_130,
	.gamma_22_table[9] = (u16 *)&s6e63m0_22_140,
	.gamma_22_table[10] = (u16 *)&s6e63m0_22_150,
	.gamma_22_table[11] = (u16 *)&s6e63m0_22_160,
	.gamma_22_table[12] = (u16 *)&s6e63m0_22_170,
	.gamma_22_table[13] = (u16 *)&s6e63m0_22_180,
	.gamma_22_table[14] = (u16 *)&s6e63m0_22_190,
	.gamma_22_table[15] = (u16 *)&s6e63m0_22_200,
	.gamma_22_table[16] = (u16 *)&s6e63m0_22_210,
	.gamma_22_table[17] = (u16 *)&s6e63m0_22_220,
	.gamma_22_table[18] = (u16 *)&s6e63m0_22_230,
	.gamma_22_table[19] = (u16 *)&s6e63m0_22_240,
	.gamma_22_table[20] = (u16 *)&s6e63m0_22_250,
	.gamma_22_table[21] = (u16 *)&s6e63m0_22_260,
	.gamma_22_table[22] = (u16 *)&s6e63m0_22_270,
	.gamma_22_table[23] = (u16 *)&s6e63m0_22_280,
	.gamma_22_table[24] = (u16 *)&s6e63m0_22_290, 
	.gamma_22_table[25] = (u16 *)&s6e63m0_22_290,
				
	.gamma_19_table[0] = (u16 *)&s6e63m0_19_30,
	.gamma_19_table[1] = (u16 *)&s6e63m0_19_40,
	.gamma_19_table[2] = (u16 *)&s6e63m0_19_70,
	.gamma_19_table[3] = (u16 *)&s6e63m0_19_80,
	.gamma_19_table[4] = (u16 *)&s6e63m0_19_90,
	.gamma_19_table[5] = (u16 *)&s6e63m0_19_100,
	.gamma_19_table[6] = (u16 *)&s6e63m0_19_110,
	.gamma_19_table[7] = (u16 *)&s6e63m0_19_120,
	.gamma_19_table[8] = (u16 *)&s6e63m0_19_130,
	.gamma_19_table[9] = (u16 *)&s6e63m0_19_140,
	.gamma_19_table[10] = (u16 *)&s6e63m0_19_150,
	.gamma_19_table[11] = (u16 *)&s6e63m0_19_160,
	.gamma_19_table[12] = (u16 *)&s6e63m0_19_170,
	.gamma_19_table[13] = (u16 *)&s6e63m0_19_180,
	.gamma_19_table[14] = (u16 *)&s6e63m0_19_190,
	.gamma_19_table[15] = (u16 *)&s6e63m0_19_200,
	.gamma_19_table[16] = (u16 *)&s6e63m0_19_210,
	.gamma_19_table[17] = (u16 *)&s6e63m0_19_220,
	.gamma_19_table[18] = (u16 *)&s6e63m0_19_230,
	.gamma_19_table[19] = (u16 *)&s6e63m0_19_240,
	.gamma_19_table[20] = (u16 *)&s6e63m0_19_250,
	.gamma_19_table[21] = (u16 *)&s6e63m0_19_260,
	.gamma_19_table[22] = (u16 *)&s6e63m0_19_270,
	.gamma_19_table[23] = (u16 *)&s6e63m0_19_280,
	.gamma_19_table[24] = (u16 *)&s6e63m0_19_290, 
	.gamma_19_table[25] = (u16 *)&s6e63m0_19_290,

}; 


static const unsigned short SEQ_ACL_OFF[] = {
	0xC0, 0x00,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_ON[] = {
	0xC0, 0x01,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_NULL[] = {
	0xC1, 0x00,

	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_40P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x06,	DATA_ONLY, 0x0C,	DATA_ONLY, 0x11,	DATA_ONLY, 0x16,
	DATA_ONLY, 0x1C,	DATA_ONLY, 0x21,	DATA_ONLY, 0x26,	DATA_ONLY, 0x2B,
	DATA_ONLY, 0x31,	DATA_ONLY, 0x36,

	ENDDEF, 0x00
};


static const unsigned short SEQ_ACL_43P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x07,	DATA_ONLY, 0x0C,	DATA_ONLY, 0x12,	DATA_ONLY, 0x18,
	DATA_ONLY, 0x1E,	DATA_ONLY, 0x23,	DATA_ONLY, 0x29,	DATA_ONLY, 0x2F,
	DATA_ONLY, 0x34,	DATA_ONLY, 0x3A,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_45P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x07,	DATA_ONLY, 0x0D,	DATA_ONLY, 0x13,	DATA_ONLY, 0x19,
	DATA_ONLY, 0x1F,	DATA_ONLY, 0x25,	DATA_ONLY, 0x2B,	DATA_ONLY, 0x31,
	DATA_ONLY, 0x37,	DATA_ONLY, 0x3D,

	ENDDEF, 0x00
};


static const unsigned short SEQ_ACL_47P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x07,	DATA_ONLY, 0x0E,	DATA_ONLY, 0x14,	DATA_ONLY, 0x1B,
	DATA_ONLY, 0x21,	DATA_ONLY, 0x27,	DATA_ONLY, 0x2E,	DATA_ONLY, 0x34,
	DATA_ONLY, 0x3B,	DATA_ONLY, 0x41,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_48P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x08,	DATA_ONLY, 0x0E,	DATA_ONLY, 0x15,	DATA_ONLY, 0x1B,
	DATA_ONLY, 0x22,	DATA_ONLY, 0x29,	DATA_ONLY, 0x2F,	DATA_ONLY, 0x36,
	DATA_ONLY, 0x3C,	DATA_ONLY, 0x43,

	ENDDEF, 0x00
};

static const unsigned short SEQ_ACL_50P[] = {
	0xC1, 0x4D,

	DATA_ONLY, 0x96,	DATA_ONLY, 0x1D,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x01,	DATA_ONLY, 0xDF,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x03,	DATA_ONLY, 0x1F,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,
	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x00,	DATA_ONLY, 0x01,
	DATA_ONLY, 0x08,	DATA_ONLY, 0x0F,	DATA_ONLY, 0x16,	DATA_ONLY, 0x1D,
	DATA_ONLY, 0x24,	DATA_ONLY, 0x2A,	DATA_ONLY, 0x31,	DATA_ONLY, 0x38,
	DATA_ONLY, 0x3F,	DATA_ONLY, 0x46,

	ENDDEF, 0x00
};

static const unsigned short *ACL_cutoff_set[] = {
	SEQ_ACL_OFF,
	SEQ_ACL_40P,
	SEQ_ACL_43P,
	SEQ_ACL_45P,
	SEQ_ACL_47P,
	SEQ_ACL_48P,
	SEQ_ACL_50P,
	SEQ_ACL_ON,
	SEQ_ACL_NULL,
};


static const unsigned short SEQ_ELVSS_95[] = {
	0xB2, 0x10,
	DATA_ONLY, 0x10,
	DATA_ONLY, 0x10,
	DATA_ONLY, 0x10,
	ENDDEF, 0x00
};

static const unsigned short SEQ_ELVSS_91[] = {
	0xB2, 0x14,
	DATA_ONLY, 0x14,
	DATA_ONLY, 0x14,
	DATA_ONLY, 0x14,
	ENDDEF, 0x00
};

static const unsigned short SEQ_ELVSS_88[] = {
	0xB2, 0x17,
	DATA_ONLY, 0x17,
	DATA_ONLY, 0x17,
	DATA_ONLY, 0x17,
	ENDDEF, 0x00
};

static const unsigned short SEQ_ELVSS_82[] = {
	0xB2, 0x1D,
	DATA_ONLY, 0x1D,
	DATA_ONLY, 0x1D,
	DATA_ONLY, 0x1D,
	ENDDEF, 0x00
};

static const unsigned short *SEQ_ELVSS_SET[] = {
	SEQ_ELVSS_95,
	SEQ_ELVSS_91,
	SEQ_ELVSS_88,
	SEQ_ELVSS_82,
};
#endif
