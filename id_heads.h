/* Keen Dreams (SDL2/Steam Port) Source Code
 * Copyright (C) 2014 Javier M. Chavez
 * Copyright (C) 2015 David Gow <david@davidgow.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

// ID_GLOB.H

// Temporary hack to remove DOSisms
#define far
#define huge
#define _seg
#define FP_SEG(a) (a)
#define FP_OFF(a) (a)
#define MK_FP(a,b) ((a)+(b))
#ifndef _MSC_VER
#define stricmp strcasecmp
#endif

#define movedata(a,b,c,d,e) memmove(b,d,e)

// Hopefully this will work.
#pragma once

#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdint.h>

#define __ID_GLOB__

#define	EXTENSION	"KDR"
#define PREFPATH_ORG	"Commander Keen"
#define PREFPATH_NAME	"Keen Dreams"

#ifndef _MSC_VER
#define O_BINARY 0
#endif

#include "graphkdr.h"
#include "audiokdr.h"

#define	TEXTGR	0
#define	CGAGR	1
#define	EGAGR	2
#define	VGAGR	3

#define GRMODE	EGAGR

#if GRMODE == EGAGR
#define GREXT	"EGA"
#endif
#if GRMODE == CGAGR
#define GREXT	"CGA"
#endif

//#define PROFILE

//
//	ID Engine
//	Types.h - Generic types, #defines, etc.
//	v1.0d1
//

#ifndef	__TYPES__
#define	__TYPES__

typedef	enum	{false,true}	boolean;
typedef	uint8_t		byte;
typedef	uint16_t word;
typedef	uint32_t		longword;
typedef	byte *					Ptr;

typedef	struct
		{
			int	x,y;
		} Point;
typedef	struct
		{
			Point	ul,lr;
		} Rect;

#define	nil	((void *)0)

#endif

#include "id_mm.h"
#include "id_ca.h"
#include "id_vw.h"
#include "id_rf.h"
#include "id_in.h"
#include "id_sd.h"
#include "id_us.h"



