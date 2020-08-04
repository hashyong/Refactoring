#pragma once

#include <memory>

namespace refactor {

// old
// define
struct OrderOld {
  OrderOld(const string& data) {
    pirority = data;
  }

  string pirority;
};

// use
OrderOld orders("2");
auto highPirority = "123" + orders.pirority + "456";

// opt
class OrderOpt {
 public:
  OrderOpt(const string& data) {
    setPirority(data);
  }

  const string& getPriority() { return priority; }
  void setPirority(const string& data) {
    priority = data;
  }

 private:
  string priority;
};

class Priority {
 public:
  Priority(const string& data) {
    value = data;
  }

  const string& toString() { return value; }
  // may ve add other fun
 private:
  string value;
};

// opt final
class OrderOpt1 {
 public:
  OrderOpt1(const string& data) {
    setPirority(data);
  }

  const string& getPriorityString() { return priority_->toString(); }
  void setPirority(const string& data) {
    priority_ = std::make_unique<Priority>(data);
  }

 private:
  std::unique_ptr<Priority> priority_;
};

//opt
OrderOpt1 orderOpt("2");
auto highPirorityOpt = orderOpt.getPriorityString();

}