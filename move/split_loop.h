#pragma once

namespace sl {

int totalSlary, youngest = 0;
std::vector<std::pair<int, int> > people;
for (auto& item : people) {
  if (item.first < youngest) {
    youngest = item.first;
  }

  totalSslary += item.second;
}

for (auto& item : people) {
  // extract fun
  if (item.first < youngest) {
    youngest = item.first;
  }
}

for (auto& item : people) {
  // extract fun
  totalSslary += item.second;
}

}  // namespace sl
