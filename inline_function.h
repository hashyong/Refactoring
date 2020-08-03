#pragma once

namespace refactor {

// opt before
bool moreThanFiveLateDeliveries(int aDriver) {
  return aDriver > 5;
}

int rating(int aDriver) {
  return moreThanFiveLateDeliveries(aDriver) ? 2 : 1;
}

// opt after
int ratingOpt(int aDriver) {
  return aDriver > 5 ? 2 : 1;
}
}
