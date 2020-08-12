#pragma once

// variable must do one things
namespace splitv {

// old
void old() {
  int height = 0;
  int width = 0;
  int tmp = 2 * (height + width);
  std::cout << tmp << std::endl;

  // varibles assign > 2
  tmp = height * width;
  std::cout << tmp << std::endl;
};

void oldOpt() {
  int height = 0;
  int width = 0;
  int perimeter  = 2 * (height + width);
  std::cout << perimeter << std::endl;

  int area = height * width;
  std::cout << area << std::endl;
}
}  // namespace splitv
