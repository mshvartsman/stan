#ifndef STAN__SERVICES__ARGUMENTS__VARIATIONAL__NUM__SAMPLES__HPP
#define STAN__SERVICES__ARGUMENTS__VARIATIONAL__NUM__SAMPLES__HPP

#include <stan/services/arguments/singleton_argument.hpp>

#include <boost/lexical_cast.hpp>
#include <string>

namespace stan {

  namespace services {

    class arg_variational_num_samples: public int_argument {
    public:
      arg_variational_num_samples(const char *name,
                                  const char *desc,
                                  double def): int_argument() {
        _name = name;
        _description = desc;
        _validity = "0 < num_samples";
        _default = boost::lexical_cast<std::string>(def);
        _default_value = def;
        _constrained = true;
        _good_value = 1.0;
        _bad_value = -1.0;
        _value = _default_value;
      }
      bool is_valid(int value) { return value > 0; }
    };
  }  // services
}  // stan

#endif
