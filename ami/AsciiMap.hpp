#ifndef ASCIIMAP_HPP_
#define ASCIIMAP_HPP_

#include <iostream>
#include <vector>
#include "IAsciiMap.hpp"

class AsciiMap : public IAsciiMap {
public:
    AsciiMap(unsigned int width, unsigned int height);
    char         get_cell(unsigned int x, unsigned int y) const override;
    void         set_cell(unsigned int x, unsigned int y, char c) override;
    unsigned int width() const override;
    unsigned int height() const override;
    void         to_stream(std::ostream &output) const;

private:
    unsigned int      map_width;
    unsigned int      map_height;
    std::vector<char> map_data;
};

#endif /* ASCIIMAP_HPP_ */