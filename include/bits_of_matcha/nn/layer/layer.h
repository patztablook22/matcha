#pragma once

#include <argxx>

namespace matcha {

class ExprWrap;

namespace nn {

class Layer {
  public:
    ARGXX_MAKE(Layer);

    virtual void init() = 0;
    // virtual Tensor& feedForward(Tensor& feed) = 0;
    virtual ExprWrap feedForward(const ExprWrap& feed) = 0;

};

}
}