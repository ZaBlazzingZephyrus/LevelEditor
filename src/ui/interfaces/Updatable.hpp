////////////////////////////////////////////////////////////
//
// MIT License
//
// Copyright (c) 2022 ZaBlazzingZeif
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

#ifndef LEVEL_EDITOR_UPDATABLE_HPP
#define LEVEL_EDITOR_UPDATABLE_HPP


namespace le
{
////////////////////////////////////////////////////////////
/// \brief Interface, representing an updatable object
///
////////////////////////////////////////////////////////////
class Updatable
{
public:

    ////////////////////////////////////////////////////////////
    /// \brief Virtual destructor
    ///
    ////////////////////////////////////////////////////////////
    virtual ~Updatable() {}

    ////////////////////////////////////////////////////////////
    /// \brief Update the object within the application's main thread loop
    ///
    /// This is a pure virtual function that has to be implemented
    /// by the derived class to define how the updatable should be
    /// updated.
    ///
    ////////////////////////////////////////////////////////////
    virtual void update() = 0;
};

} //namespace le


#endif // LEVEL_EDITOR_UPDATABLE_HPP