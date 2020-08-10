#pragma once

namespace refactor {

struct Order {
  int quality;
  int itemPrice;
};
// opt before
int calcPrice(const Order& order) {
  return order.quality * order.itemPrice - std::max(0, order.quality - 500) * order.itemPrice * 0.05
      + std::min(order.quality * order.itemPrice * 3, 100);
}

// opt after
int calcPriceOpt(const Order& order) {
  auto basePrice = order.quality * order.itemPrice;
  auto qualityDiscount = std::max(0, order.quality - 500) * order.itemPrice * 0.05;
  auto shipping = std::min(order.quality * order.itemPrice * 3, 100);
  return basePrice - qualityDiscount + shipping;
}

}
