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

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "LocalizableTextComponent.hpp"


namespace le
{
////////////////////////////////////////////////////////////
LocalizableTextComponent::LocalizableTextComponent() :
TextComponent::TextComponent(),
m_string(),
m_strings({ })
{
}


////////////////////////////////////////////////////////////
LocalizableTextComponent::LocalizableTextComponent(const sf::Vector2f& position, const sf::Vector2u& size,
const TextStyle* style, const Strings& strings, const sf::String& string, const sf::Vector2f& textOffset) :

TextComponent::TextComponent(position, size, style, strings.at(string), textOffset),
m_string(string),
m_strings(strings)
{
}


////////////////////////////////////////////////////////////
LocalizableTextComponent::LocalizableTextComponent(const LocalizableTextComponent& copy) :
LocalizableTextComponent(copy.getPosition(), copy.m_size, copy.m_style, copy.m_strings, copy.m_string, copy.m_textOffset)
{
}


////////////////////////////////////////////////////////////
void LocalizableTextComponent::setString(const sf::String& string)
{
	this->m_string = string;
	applyTextChanges();
}


////////////////////////////////////////////////////////////
void LocalizableTextComponent::applyTextChanges()
{
	sf::String text = this->m_strings.at(this->m_string);
	TextComponent::setString(text);
}

} // namespace le