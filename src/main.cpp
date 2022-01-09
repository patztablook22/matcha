#include <matcha>
using namespace matcha;
using namespace matcha::nn;

void design() {
  auto ai = Model(
    Ensemble{
      NeuralNetwork{
        Linear(),
        Linear(),
        Linear(),
        Linear()
      }
    }
  );

  ai.train();
}

int main() {
  design();


  return 0;
}