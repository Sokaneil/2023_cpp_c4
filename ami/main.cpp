#include <iostream>
#include "AsciiMap.hpp"
#include "AsciiMapClip.hpp"

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
        AsciiMap     map{5, 5};
        AsciiMapClip clip(map);

        mk_line(map, 2);
        draw_x(clip);
        map.to_stream(std::cout);
    } catch (std::out_of_range &err) {
        std::cerr << "Error: " << err.what() << std::endl;
    }

    return 0;
}
