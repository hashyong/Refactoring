#pragma once

namespace mf {
// old
class Account {
 public:
  double GetBankCharge() {
    double result = 4.5;
    if (daysOverdrawn_ > 0) {
      result += overdraftCharge_;
    }
    return result;
  }

  double GetOverdraftChange() {
    if (1 == type_) {
      const auto baseCharge = 10;
      if (daysOverdrawn_ <= 7) {
        return baseCharge;
      } else {
        return baseCharge + (daysOverdrawn_ - 7) * 0.85;
      }
    } else {
      return daysOverdrawn_ * 1.75;
    }
  }

  const double& daysOverdrawn() const { return daysOverdrawn_;}

  double GetOverdraftChangeOpt() {
    AccountType a;
    return a.GetOverdraftChange(*this);
  }

  // opt
  class AccountType {
   public:
    double GetOverdraftChange(const Account& account) {
      if (1 == type_) {
        const auto baseCharge = 10;
        if (account.daysOverdrawn() <= 7) {
          return baseCharge;
        } else {
          return baseCharge + (account.daysOverdrawn() - 7) * 0.85;
        }
      } else {
        return account.daysOverdrawn() * 1.75;
      }
    }

   private:
    int type_;
  };
 private:
  double daysOverdrawn_;
  double overdraftCharge_;
  int type_;
};


}  // namespace mf
