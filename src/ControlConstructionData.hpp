////////////////////////////////////////////////////////////
//
// MIT License
//
// Copyright (c) 2023 ZaBlazzingZeif
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
////////////////////////////////////////////////////////////

#ifndef LEVEL_EDITOR_CONTROL_CONSTRUCTION_DATA_HPP
#define LEVEL_EDITOR_CONTROL_CONSTRUCTION_DATA_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "TextStyle.hpp"


namespace le
{
////////////////////////////////////////////////////////////
/// \brief Standard layout class for holding various data important for
/// 	   control creation
///
////////////////////////////////////////////////////////////
struct TextTheme
{
	////////////////////////////////////////////////////////////
	// Member data
	////////////////////////////////////////////////////////////
	const TextStyle* m_default;  //!< Default text style
	const TextStyle* m_disabled; //!< Disabled text style
	const TextStyle* m_hovered;  //!< Hovered text style
	const TextStyle* m_held;     //!< Style of the text while the mouse is held 
};

} // namespace le

#endif // LEVEL_EDITOR_CONTROL_CONSTRUCTION_DATA_HPP