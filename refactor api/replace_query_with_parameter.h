#pragma once

namespace rqwp {

void bad() {
  targetTemperature(aPlan);
  function targetTemperature(aPlan) {
    currentTemperature = thermostat.currentTemperature;
    // rest of function...
  }
}

void good() {
  targetTemperature(aPlan, thermostat.currentTemperature);
  function targetTemperature(aPlan, currentTemperature) {
    // rest of function...
  }
}  // namespace rqwp
