#include <iostream>
#include "AsciiMap.hpp"
#include "AsciiMapClip.hpp"
#include "IAsciiMap.hpp"

void mk_line(IAsciiMap &map, unsigned int y)
{
    auto i{0U};

    while (i < map.width()) {
        if (map.get_cell(i, y) == '|') {
            map.set_cell(i, y, '+');
        } else {
            map.set_cell(i, y, '-');
        }
        i += 1;
    }
}

void mk_col(IAsciiMap &map, unsigned int x)
{
    auto i{0U};

    while (i < map.height()) {
        if (map.get_cell(x, i) == '-') {
            map.set_cell(x, i, '+');
        } else {
            map.set_cell(x, i, '|');
        }
        i += 1;
    }
}

void draw_o(IAsciiMap &clip)
{
    clip.set_cell(1, 0, '-');
    clip.set_cell(0, 1, '|');
    clip.set_cell(2, 1, '|');
    clip.set_cell(1, 2, '-');
}

void draw_x(IAsciiMap &clip)
{
    clip.set_cell(0, 0, '\\');
    clip.set_cell(2, 2, '\\');
    clip.set_cell(1, 1, 'X');
    clip.set_cell(2, 0, '/');
    clip.set_cell(0, 2, '/');
}

int main(void)
{
    try {
        AsciiMap     map{11, 11};
        AsciiMapClip TopLeft(map), TopRight(map), TopCenter(map);

        TopCenter.set_origin(4, 0);
        TopCenter.set_size(3, 3);
        TopLeft.set_origin(0, 0);
        TopLeft.set_size(3, 3);
        TopRight.set_origin(8, 0);
        TopRight.set_size(3, 3);

        mk_line(map, 3);
        mk_line(map, 7);
        mk_col(map, 3);
        mk_col(map, 7);
        draw_o(TopRight);
        draw_o(TopCenter);
        draw_x(TopLeft);
        map.to_stream(std::cout);
    } catch (std::out_of_range &err) {
        std::cerr << "Error:" << err.what() << std::endl;
    }
}