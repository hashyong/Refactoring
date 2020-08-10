#pragma once

namespace refactor {

// old
void amountInvoiced(int startDate, int endDate) {}
void amountReceived(int startDate, int endDate) {}
void amountOverdue(int startDate, int endDate) {}

// opt
struct DataRange {
  int startDate;
  int endDate;
};

void amountInvoiced(const DataRange& param) {}
void amountReceived(const DataRange& param) {}
void amountOverdue(const DataRange& param) {}
}
