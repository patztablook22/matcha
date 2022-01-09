#include "bits_of_matcha/estimator/neuralnetwork.h"
#include "bits_of_matcha/nn/layer/layer.h"

#include "bits_of_matcha/tensor/tensor.h"

namespace matcha {
namespace nn {

NeuralNetwork::NeuralNetwork(argxx::Args<Layer> layers)
  : layers_(layers)
{}

void NeuralNetwork::train() {
  cout << "neural network" << endl;

  init();
}

void NeuralNetwork::init() {
  buffer_ = new Tensor(0);
  ExprWrap feed = buffer_;

  auto lin = layers_[0];
  feed = lin->feedForward(feed);
  feed->eval();


  // for (auto& layer: layers_) {
  //   feed = layer->feedForward(feed);
  //   break;
  //   cout << "Linear" << std::endl;
  // }
}


}
}