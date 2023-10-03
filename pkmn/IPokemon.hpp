#ifndef IPOKEMON_HPP_
#define IPOKEMON_HPP_

#include <string>

namespace pkmn {
class Ipokemon {
public:
    virtual const std::string &name() const    = 0;
    virtual const int         &health() const  = 0;
    virtual int               &health()        = 0;
    virtual bool               fainted() const = 0;
};
} // namespace pkmn

#endif /* IPOKEMON_HPP_ */