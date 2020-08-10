#pragma once

namespace refactor {

// old
int base(int aReading) { return aReading; }
int taxableCharge(int aReading) { return 10 * aReading; }

// opt
int enrichReading(int aReading) { return 10 * aReading;}
}
