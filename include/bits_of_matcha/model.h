#pragma once

#include <argxx>

namespace matcha {

class Estimator;

class Model {
  public:
    Model(const argxx::Wrap<Estimator>& estimator);

    void train();
  
  private:
    argxx::Wrap<Estimator> estimator_;

};

}