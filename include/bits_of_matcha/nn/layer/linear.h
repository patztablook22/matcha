#pragma once

#include "bits_of_matcha/nn/layer/layer.h"

#include "bits_of_matcha/tensor/tensor.h"

namespace matcha {
namespace nn {

class Linear : public Layer {
  public:
    ARGXX_INHERIT(Linear, Layer);
  
    void init();
    // Tensor& feedForward(Tensor& feed) override;
    ExprWrap feedForward(const ExprWrap& feed) override;

  private:
    Tensor* weights_;
    Tensor* biases_;

    Tensor* input_;

};

}
}