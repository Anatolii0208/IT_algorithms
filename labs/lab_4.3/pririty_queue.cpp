// Дейкстра на очереди с приоритетами

#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> Q;
  Q.push(12);
  Q.push(25);
  Q.push(17);
  if (!Q.empty())
    Q.pop();
  Q.push(18);
  Q.push(22);
  if (!Q.empty())
    Q.pop();
  Q.push(13);
  std::cout << Q.front() << " " << Q.back() << "\n";
 
  priority_queue<int> PQ;
  PQ.push(12);
  PQ.push(25);
  PQ.push(17);
  if (!PQ.empty())
    PQ.pop();
  PQ.push(18);
  PQ.push(22);
  if (!PQ.empty())
    PQ.pop();
  PQ.push(13);
  while (!PQ.empty()) {
    int x = PQ.top();
    cout << x << endl;
    PQ.pop();
  }


  return 0;
}

