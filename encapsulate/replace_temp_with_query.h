#pragma once

namespace rtwq {

// old
class Order {
 public:
  Order(const int& quanlity, const int& item) {
    quanlity_ = quanlity;
    item_ = item;
  }

  auto price() {
    auto basePrice = quanlity_ * item_;
    auto discountFactor = 0.98;
    if (basePrice > 1000) { discountFactor -= 0.03; }
    return basePrice * discountFactor;
  }
 private:
  auto basePrice() {
    return quanlity_ * item_;
  }
 private:
  int quanlity_;
  int item_;
};

// opt
class OrderOpt {
 public:
  OrderOpt(const float& quanlity, const float& item) {
    quanlity_ = quanlity;
    item_ = item;
  }

  auto price() {
    return basePrice() * discountFactor();
  }

 private:
  float basePrice() {
    return quanlity_ * item_;
  }

  float discountFactor() {
    auto discountFactor = 0.98;
    if(basePrice() > 1000) {discountFactor -= 0.03;}
    return discountFactor;
  }

 private:
  float quanlity_;
  float item_;
};

}
