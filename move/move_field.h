#pragma once

namespace mf {
class CustomerContract {
 public:
  CustomerContract(float startDate) : startDate_(startDate) {}
  CustomerContract() {}

  float getDiscountRate() { return discountRate_; }
  void setDiscountRate(float number) { discountRate_ = number; }

 private:
  float startDate_;
  // 1.
  float discountRate_;
};

class Customer {
 public:
  Customer(std::string name, float discountRate) {
    name_ = name;
    // 2
    CustomerContract contract(3);
    contract_ = contract;
    contract_.setDiscountRate(discountRate);
  }

  //float getDiscountRate() { return discountRate_; }
  float getDiscountRate() { return contract_.getDiscountRate(); }

  void becomePreferred() {
    discountRate_ += 0.03;
    // other nice things
  }

  float applyDiscount(float amount) { return amount * contract_.getDiscountRate(); }

 private:
  std::string name_;
  float discountRate_;
  CustomerContract contract_;
};
}  // namespace mf
