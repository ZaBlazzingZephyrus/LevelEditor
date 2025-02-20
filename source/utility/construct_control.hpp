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

#ifndef EDITOR_CONSTRUCT_CONTROL_HPP
#define EDITOR_CONSTRUCT_CONTROL_HPP

#include "control_constructor.hpp"
#include "../controls/button.hpp"
#include "../controls/check_box.hpp"
#include "../controls/combo_box.hpp"
#include "../controls/control.hpp"
#include "../controls/input_control.hpp"
#include "../controls/label.hpp"
#include "../controls/numeric_up_down.hpp"
#include "../controls/slider.hpp"
#include "../controls/table.hpp"
#include "../controls/text_control.hpp"

Control* constructControl(const ControlConstructor& constructor);

#endif