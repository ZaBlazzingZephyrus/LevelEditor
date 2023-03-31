// MIT License
// 
// Copyright (c) 2022 ZaBlazzingZephyr
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

#include "button.hpp"

using sf::Event;
using sf::IntRect;
using sf::Mouse;
using sf::RenderStates;
using sf::RenderTarget;
using sf::RenderWindow;
using sf::Shader;
using sf::Sprite;
using sf::String;
using sf::Vector2f;
using sf::Vector2u;
using sf::Text;
using std::function;
using std::map;

Button::Button() :

	TextControl(),
	m_on_clicked()
{

}

Button::Button(RenderWindow* window, Vector2u intended_resolution, map<String, String>* strings, const ControlTheme* theme, SoundHandler* handler, const TextTheme* text_theme, Vector2f position, Vector2f size,
	const IntRect& bg, const IntRect& bg_active, String text, const function<void()>& on_clicked, const function<void()>& on_hold, float min_y_position, bool visible, bool enabled) :

	TextControl::TextControl(window, intended_resolution, strings, theme, handler, text_theme, position, size, bg, bg_active, text, min_y_position, visible, enabled),
	m_on_clicked(on_clicked),
	m_on_hold(on_hold)
{

}

void Button::onHold()
{
	m_on_hold();
}

void Button::onMouseEntered(Event::MouseMoveEvent data)
{
	TextControl::onMouseEntered(data);
	m_drawable = m_holding ? m_bg_active : m_bg;
}

void Button::onMouseLeft(Event::MouseMoveEvent data)
{
	TextControl::onMouseLeft(data);
	m_drawable = m_bg;
}

void Button::onClicked(Event::MouseButtonEvent data)
{
	TextControl::onClicked(data);
	m_drawable = m_bg_active;
}

void Button::onReleased(Event::MouseButtonEvent data)
{
	TextControl::onReleased(data);
	m_drawable = m_bg;
	m_on_clicked();
}