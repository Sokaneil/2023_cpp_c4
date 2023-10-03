#ifndef PIKACHU_HPP_
#define PIKACHU_HPP_

#include <algorithm>
#include <iostream>
#include <string>

namespace pkmn {
class Pikachu {
public:
    Pikachu(const std::string &nickname);
    const std::string &species() const;
    const std::string &type() const;
    const std::string &name() const;
    const int         &health() const;
    int               &health();
    bool               fainted() const;

private:
    std::string nickname_;
    int         pkmnhealth;
};
} // namespace pkmn

#endif /* PIKACHU_HPP_ */