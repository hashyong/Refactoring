#pragma once

namespace rfwc {

void bad() {
  function score(candidate, medicalExam, scoringGuide) {
    let result = 0;
    let healthLevel = 0;
    // long body code
  }
}

void good() {
  class Scorer {
    constructor(candidate, medicalExam, scoringGuide) {
      this._candidate = candidate;
      this._medicalExam = medicalExam;
      this._scoringGuide = scoringGuide;
    }
    execute() {
      this._result = 0;
      this._healthLevel = 0;
      // long body code
    }
  }
}

}  // namespace rfwc