#pragma once

namespace refactor {

// old
void Invoiced(const DataRange& param) {}
void Received(const DataRange& param) {}
void Overdue(const DataRange& param) {}

// opt
class Amount {
 public:
  void Invoiced(const DataRange& param) {}
  void Received(const DataRange& param) {}
  void Overdue(const DataRange& param) {}
};

}
