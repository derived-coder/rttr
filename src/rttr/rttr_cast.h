/************************************************************************************
*                                                                                   *
*   Copyright (c) 2014, 2015 Axel Menzel <info@axelmenzel.de>                       *
*                                                                                   *
*   This file is part of RTTR (Run Time Type Reflection)                            *
*   License: MIT License                                                            *
*                                                                                   *
*   Permission is hereby granted, free of charge, to any person obtaining           *
*   a copy of this software and associated documentation files (the "Software"),    *
*   to deal in the Software without restriction, including without limitation       *
*   the rights to use, copy, modify, merge, publish, distribute, sublicense,        *
*   and/or sell copies of the Software, and to permit persons to whom the           *
*   Software is furnished to do so, subject to the following conditions:            *
*                                                                                   *
*   The above copyright notice and this permission notice shall be included in      *
*   all copies or substantial portions of the Software.                             *
*                                                                                   *
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR      *
*   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,        *
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE     *
*   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER          *
*   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,   *
*   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE   *
*   SOFTWARE.                                                                       *
*                                                                                   *
*************************************************************************************/

#ifndef RTTR_RTTR_CAST_H_
#define RTTR_RTTR_CAST_H_

namespace rttr
{
/*!
 * \brief Casts the given \p object of type \p SourceType to an object of type \p TargetType.
 *
 * When the given the given \p object is an instance of type \p TargetType, then this function will cast the pointer to the \p TargetType;
 * otherwise it will return a nullptr. If \p object is already a nullptr then it will also return a nullptr.
 *
 * \remark Both class types must contain the macro \ref RTTR_ENABLE in the class declaration.
 *        \p SourceType and \p TargetType must be both pointer types.
 *         
 *
 * \return A pointer of type \p TargetType
 */
template<typename TargetType, typename SourceType>
TargetType rttr_cast(SourceType object);

}

#include "rttr/detail/rttr_cast_impl.h"

#endif // RTTR_RTTR_CAST_H_
