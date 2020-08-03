#pragma once

namespace refactor {
struct Data {
  std::string firstName;
  std::string lastName;
};

struct DataOpt {
  const DataOpt& defaultFun() {
    return *this;
  }

  void setData(const DataOpt& src) {
    *this = src;
  }

 private:
  std::string firstName;
  std::string lastName;
};

}
