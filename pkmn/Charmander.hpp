#ifndef CHARMANDER_HPP_
#define CHARMANDER_HPP_

#include <algorithm>
#include <iostream>
#include <string>

namespace pkmn {
class Charmander {
public:
    Charmander(const std::string &nickname);
    const std::string &species() const;
    const std::string &type() const;
    const std::string &name() const;
    const int         &hp() const;
    int               &health();
    bool               fainted() const;

private:
    std::string nickname_;
    int         pkmnhealth;
};
} // namespace pkmn

#endif /* CHARMANDER_HPP_ */