#ifndef __STAN__GM__ARGUMENTS__INT_TIME__HPP__
#define __STAN__GM__ARGUMENTS__INT_TIME__HPP__

#include <stan/gm/arguments/singleton_argument.hpp>

namespace stan {
  
  namespace gm {
    
    class arg_int_time: public real_argument {
      
    public:
      
      arg_int_time(): real_argument() {
        _name = "int_time";
        _description = "Total integration time for Hamiltonian evolution";
        _validity = "0 < int_time";
        _default = "2 * pi";
      };
      
      bool is_valid(double value) { return value > 0; }
      
    };
    
  } // gm
  
} // stan

#endif

