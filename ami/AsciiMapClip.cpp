#include "AsciiMapClip.hpp"

AsciiMapClip::AsciiMapClip(AsciiMap &map)
    : map_ref(map),
      origin_x(0),
      origin_y(0),
      _width(map.width()),
      _height(map.height())
{}

char AsciiMapClip::get_cell(unsigned int x, unsigned int y) const
{
    if (x >= _width || y >= _height) {
        throw std::out_of_range("Out of Possible range");
    }
    return map_ref.get_cell(x + origin_x, y + origin_y);
}

void AsciiMapClip::set_cell(unsigned int x, unsigned int y, char c)
{
    if (x >= _width || y >= _height) {
        throw std::out_of_range("Out of Possible range");
    }
    map_ref.set_cell(x + origin_x, y + origin_y, c);
}

unsigned int AsciiMapClip::width() const
{
    return _width;
}

unsigned int AsciiMapClip::height() const
{
    return _height;
}

void AsciiMapClip::set_origin(unsigned int x, unsigned int y)
{
    origin_x = x;
    origin_y = y;
}

void AsciiMapClip::set_size(unsigned int width, unsigned int height)
{
    _width  = width;
    _height = height;
}
