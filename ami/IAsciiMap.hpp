#ifndef IASCIIMAP_HPP_
#define IASCIIMAP_HPP_

class IAsciiMap {
public:
    virtual ~IAsciiMap() = default;
    virtual char         get_cell(unsigned int x, unsigned int y) const   = 0;
    virtual void         set_cell(unsigned int x, unsigned int y, char c) = 0;
    virtual unsigned int width() const                                    = 0;
    virtual unsigned int height() const                                   = 0;
};

#endif /* IASCIIMAP_HPP_ */
