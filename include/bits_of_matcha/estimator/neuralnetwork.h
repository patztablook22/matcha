#pragma once

#include "bits_of_matcha/estimator/estimator.h"

namespace matcha {

class Tensor;

namespace nn {

class Layer;

class NeuralNetwork : public Estimator {
  public:
    ARGXX_INHERIT(NeuralNetwork, Estimator);

    NeuralNetwork(argxx::Args<Layer> layers);

    void train() override;

  private:
    void init();

  private:
    argxx::Wraps<Layer> layers_;

    Tensor* buffer_;

};

}

using nn::NeuralNetwork;

}