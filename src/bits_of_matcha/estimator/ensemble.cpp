#include "bits_of_matcha/estimator/ensemble.h"

namespace matcha {

Ensemble::Ensemble(argxx::Args<Estimator> estimators)
  : estimators_(estimators)
{}

void Ensemble::train() {
  cout << "ensemble" << endl;
  for (auto& estimator: estimators_) estimator->train();
}

}