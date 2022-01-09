#include "bits_of_matcha/nn/layer/linear.h"

#include "bits_of_matcha/tensor/fn/add.h"
#include "bits_of_matcha/tensor/fn/multiply.h"

namespace matcha {
namespace nn {

// Tensor& Linear::feedForward(Tensor& feed) {

// }

void Linear::init() {
  weights_ = new Tensor(0);
  biases_ = new Tensor(0);
}

ExprWrap Linear::feedForward(const ExprWrap& feed) {
  using namespace fn;
  // auto add = Add(Multiply(feed, weights_), biases_);
  Tensor x(feed);
  return x;
}

}
}