#include "bits_of_matcha/model.h"
#include "bits_of_matcha/estimator/estimator.h"

#include <argxx>

namespace matcha {

Model::Model(const argxx::Wrap<Estimator>& estimator)
  : estimator_(estimator)
{}

void Model::train() {
  cout << "model" << endl;
  estimator_->train();
}

}