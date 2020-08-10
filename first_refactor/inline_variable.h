#pragma once

namespace refactor {

int fun(int basePriceOld) {
  auto basePrice = basePriceOld;
  return (basePrice > 1000);
}

int funOpt(int basePriceOld) {
  return basePriceOld > 1000;
}

}
