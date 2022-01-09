#pragma once

#include <argxx>

namespace matcha {

class Estimator {
  public:
    ARGXX_MAKE(Estimator);

    virtual void train() = 0;

};

}