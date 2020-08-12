#pragma once

namespace pwo {

void bad() {
  const low = aRoom.daysTempRange.low;
  const high = aRoom.daysTempRange.high;
  if (aPlan.withinRange(low, high)) }

void good() {
  if (aPlan.withinRange(aRoom.daysTempRange)) {
  }
}
}  // namespace pwo
