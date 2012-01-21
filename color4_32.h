﻿/**  \file
 \brief Standard four-color int


*/

#pragma once

#ifndef __GBMATH_H__
#error  DO NOT INCLUDE THIS FILE. USE:   #include <gbmath/_gbmath.h>
#endif

//#include "../base/Types.h"
//#include "color4.h"


namespace gbmath
{

	//! \brief  Standard four-color int  (for union)
	struct color4_32_s
	{
		byte_t r, g, b, a;

		inline bool operator == (const color4_32_s arg) const 
		{
			return r==arg.r && g==arg.g && b==arg.b && a==arg.a;
		}


	};

	//template <typename T>

	//! \brief  Standard four-color int
	struct color4_32 : public color4<byte_t> {

		  inline color4_32() 
		  {  
			  r = g = b = a = 0; 
		  }

		  inline color4_32(byte_t _r, byte_t _g, byte_t _b, byte_t _a)
		  {
			 r = _r;
			 g = _g;
			 b = _b;
			 a = _a;
		  }


		  inline operator int() const
		  {
			  assert( sizeof(int) == 4 );
			  int res =0;
			  res = (r<<24) | (g<<16) | (b<<8) | (a) ;
			  return res;
		  }



	};







}