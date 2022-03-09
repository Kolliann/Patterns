#include <iostream>
#include "FirstWave.h"
#include "SecondWave.h"

int main() {
  std::cout << "======================1===========================\n";
  Creator* creator = new FirstWave();
  std::cout << creator->Operation() + "/n";
  std::cout << std::endl;
  std::cout << "======================2===========================\n";
  Creator* creator2 = new SecondWave();
  std::cout << creator2->Operation() + "/n";

  return 0;
}