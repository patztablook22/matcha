#pragma once

#include "bits_of_matcha/estimator/estimator.h"

namespace matcha {

class Ensemble : public Estimator {
  public:
    ARGXX_INHERIT(Ensemble, Estimator);

    Ensemble(argxx::Args<Estimator> estimators);
  
    void train() override;

  private:
    argxx::Wraps<Estimator> estimators_;


};

}