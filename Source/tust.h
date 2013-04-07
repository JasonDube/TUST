#ifndef _TUST_H_
#define _TUST_H_

/**
 * \file tust.h
 * The core of the scripting library. Include this file to get all functions
 * TUST provides.
 */

typedef unsigned char bool;

#include "fs.h"
#include "ini.h"
#include "list.h"
#include "trash.h"
#include "node.h"
#include "nodemesh.h"
#include "math.h"
#include "dialogs.h"
#include "network.h"
#include "webkit.h"
#include "DynamicModels.h"
#include "noise.h"
#include "arraylist.h"
#include "bmap.h"



#ifdef _TEMPLATE_H_
	#error Template include guard still exists!
#endif

#include "tust.c"
#endif