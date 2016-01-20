/******************************************************************************
 * $Id$
 *
 * Project:  VFP Translator
 * Purpose:  Definition of classes for OGR .vfp driver.
 * Author:   Martin Landa, landa.martin gmail.com
 *
 ******************************************************************************
 * Copyright (c) 2015-2016, Martin Landa <landa.martin gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/

#ifndef _OGR_VFP_H_INCLUDED
#define _OGR_VFP_H_INCLUDED

#include "ogrsf_frmts.h"

#include "../gml/ogr_gml.h"

/************************************************************************/
/*                             OGRVFPLayer                              */
/************************************************************************/

class OGRVFPLayer : public OGRGMLLayer
{
};

/************************************************************************/
/*                           OGRVFPDataSource                           */
/************************************************************************/

class OGRVFPDataSource : public OGRGMLDataSource
{
 public:
    static bool          CheckHeader(const char* pszStr);
};

#endif /* ndef _OGR_VFP_H_INCLUDED */
