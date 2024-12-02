#include <bits/stdc++.h>
using namespace std;

void helloWorld()
{
  cout << "Hello, World!" << endl;
}

// SOME IMPORTANT DATA-STRUCTURES

void learnPair()
{
  pair<int, string> p1 = {61, "Ayush"};
  pair<int, string> p2 = {61, "Aman"};
  pair<int, string> p3 = {61, "Saksham"};

  pair<int, string> pairArray[3];
  pairArray[0] = p1;
  pairArray[1] = p2;
  pairArray[2] = p3;

  int length = sizeof(pairArray) / sizeof(pairArray[0]);

  for (int i = 0; i < length; i++)
  {
    cout << pairArray[i].second << endl;
  }
}

void learnVector()
{
  vector<int> v;

  v.push_back(2);
  // Faster than push_back
  v.emplace_back(7);

  // Vector of size 5 of Zeros of Garbage Value;
  vector<int> v1(5);

  vector<int> v2(5, 10);

  // Copy a vector into another vector
  vector<int> v2copy(v2);

  vector<int> myVector(5, 0);
  myVector.emplace_back(2);
  myVector.emplace_back(4);
  myVector.emplace_back(6);
  myVector.emplace_back(8);
  myVector.emplace_back(10);

  // vector.at(index)
  cout << myVector[7] << " " << myVector.at(7) << endl;

  cout << "Back most element : " << myVector.back() << endl;

  // myVector = [0,0,0,0,0,2,4,68,10]

  // .begin() points to the memory of first element.
  cout << *myVector.begin() << endl;
  cout << *myVector.rbegin() << endl;

  // .end() points to the memory just after the last element.
  cout << *myVector.end() << endl;
  cout << *myVector.rend() << endl;

  vector<int>::iterator it = myVector.end();
  cout << "Using iterator : " << *(it - 1) << endl;

  // Printing vectors elements using simple for loop;
  cout << "Elements of the vector : ";
  for (int i = 0; i < myVector.size(); i++)
  {
    cout << myVector.at(i) << " ";
  }
  cout << endl;

  cout << "Elements using iterator: ";
  // for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
  for (auto it = myVector.begin(); it != myVector.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  cout << "Elements using forEach loop : ";
  for (auto element : myVector)
  {
    cout << element << " ";
  }
  cout << endl;

  // Erasing in a vector
  vector<int> vec = {1, 2, 3, 4, 5};
  // Deletes 2 -> 1,3,4,5
  vec.erase(vec.begin() + 1);

  // Deletes 3,4 -> 1,5
  vec.erase(vec.begin() + 1, vec.begin() + 3);

  // Insertion
  vec.insert(vec.begin(), 81);     // 81, 1, 5
  vec.insert(vec.begin() + 1, 82); // 81, 82, 1, 5

  vector<int> vec2(2, 50);
  vec2.insert(vec2.end(), 2, 100);
  vec2.insert(vec2.begin(), 3, 10);

  // Insert another vector in a vector
  vec2.insert(vec2.begin() + 2, vec.begin(), vec.end());

  vec2.pop_back(); // To delete last element
  vec2.size();     // Length of vector
  vec.swap(vec2);  // Swaps the vectors
  vec.clear();     // Clear the vector

  vec.empty(); // returns true if empty

  for (auto x : vec2)
  {
    cout << x << " ";
  }
  cout << endl;
}

void learnList()
{
  // Same as vector, and provides front operations
  list<int> ls;
  ls.push_back(30);
  ls.push_front(20);

  // pop_front is also available unlike vector

  // Faster operations
  ls.emplace_back(40);
  ls.emplace_front(10);

  // All other functions are same as a vector like:
  // begin, end, rend, rbegin, swap, size, insert, clear

  cout << ls.front() << " " << ls.back() << endl;

  for (auto num : ls)
  {
    cout << num << " ";
  }
  cout << endl;
}

void learnDeque()
{
  // Same as vector, and provides front operations
  deque<int> dq;
  dq.push_back(30);
  dq.push_front(20);

  // pop_front is also available unlike vector

  // Faster operations
  dq.emplace_back(40);
  dq.emplace_front(10);

  // All other functions are same as a vector like:
  // begin, end, rend, rbegin, swap, size, insert, clear

  cout << dq.front() << " " << dq.back() << endl;

  for (auto num : dq)
  {
    cout << num << " ";
  }
  cout << endl;
}

void learnStack()
{
  // LIFO -> Last In First Out
  stack<int> st;
  // Indexing is not allowed in stack

  st.push(1);
  st.push(2);

  // emplace is push but better
  st.emplace(3);
  st.emplace(4);
  st.emplace(5);

  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;

  // Size of the stack
  cout << st.size() << endl;

  // Boolean value
  cout << st.empty() << endl;

  stack<string> st1, st2, st3;
  st1.push("Ayush");
  st1.push("Aman");
  st1.push("Saksham");

  st2 = st1;

  while (!st1.empty())
  {
    cout << st1.top() << " ";
    st1.pop();
  }
  cout << endl;

  st2.swap(st3);
}

void learnQueue()
{
  // FIFO -> First In First Out
  queue<int> q;
  q.push(1);
  q.emplace(2);

  q.front() = 10;
  q.back() = 20;

  cout << q.front() << endl;
  cout << q.back() << endl;

  q.pop(); // Deletes first element
  cout << q.front() << endl;

  queue<int> q1, q2;
  q1.emplace(10);
  q1.emplace(20);
  q1.emplace(30);
  q1.emplace(40);
  q1.emplace(50);

  q2 = q1;

  while (!q1.empty())
  {
    cout << q1.front() << " ";
    q1.pop();
  }

  q1 = q2;
  cout << endl;
}

void learnPriorityQueue()
{
  priority_queue<int> pq;
  // Largest element stays at the top

  // It is not a linear Data-Structure
  // Internally a tree is maintained

  pq.push(100);
  pq.emplace(101);
  pq.emplace(99);
  pq.emplace(98);
  pq.emplace(102);

  // Insertion & Deletion is done in O(log(n)) time

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;

  // For maintaining min-heap
  priority_queue<int, vector<int>, greater<int>> minPQ;
  minPQ.emplace(2);
  minPQ.emplace(1);
  minPQ.emplace(3);
  minPQ.emplace(5);
  minPQ.emplace(4);

  while (!minPQ.empty())
  {
    cout << minPQ.top() << " ";
    minPQ.pop();
  }
  cout << endl;
}

void learnSet()
{
  set<int> st;
  // Sorted and Unique

  st.insert(1);
  st.emplace(2);
  st.insert(2);
  st.emplace(2);
  st.emplace(3);
  st.emplace(4);
  st.emplace(0);
  st.insert(0);
  st.insert(-1);
  st.insert(5);

  // -1, 0, 1, 2, 3, 4, 5

  // Iterator points to the address
  auto it = st.find(3);

  // If element not present then returns set.end()
  auto it6 = st.find(6);

  st.erase(5); // Takes log(n) time

  st.emplace(6);

  // If present then count returns 1 else returns 0
  cout << st.count(1) << endl;

  // lower_bound and upper_bound functions
  // lower_bound returns the smallest index:
  // such that arr[index] >= n
  it = st.lower_bound(3);
  cout << *it << endl;

  // lower_bound returns the smallest index:
  // such that arr[index] >= n
  it = st.upper_bound(3);
  cout << *it << endl;

  // Iterating over a set
  for (auto num : st)
  {
    cout << num << " ";
  }
  cout << endl;
}

void learnMultiset()
{
  multiset<int> ms;
  // A multi-set is sorted
  // But can have multiple occurances.
  ms.insert(1);
  ms.emplace(1);
  ms.emplace(1);
  ms.emplace(2);

  ms.erase(1); // Erases all ones

  ms.emplace(1);
  ms.emplace(1);
  auto it = ms.find(1);

  // Finds a one and erases it [not all ones]
  ms.erase(it);

  ms.emplace(1);
  ms.emplace(2);
  ms.emplace(3);
  ms.emplace(4);
  ms.emplace(5);

  // next(iterator, num) -> moves iterator num times
  ms.erase(ms.find(1), next(ms.find(1), 2));

  for (auto x : ms)
  {
    cout << x << " ";
  }
  cout << endl;
}

void learnUnorderedSet()
{
  unordered_set<int> us;
  // Unique but not sorted

  // lower_bound and upper_bound functions does not work
  // Everything else similar to set

  // Has better complexity in average cases -> theta(1)
  // Worst case -> O(n) -> linear time
}

void learnMap()
{
  // Stores unique keys in a sorted order
  map<int, int> mp;
  map<int, pair<int, int>> mpp1;
  map<pair<int, int>, int> mpp2;

  mpp2.insert({{1, 1}, 1});
  mpp2.insert({{1, 2}, 2});

  for (auto it : mpp2)
  {
    cout << it.first.first << " , " << it.first.second << " -> " << it.second << endl;
  }

  mp[1] = 10;
  mp.insert({2, 20});
  mp.emplace(3, 30);

  for (auto x : mp)
  {
    cout << x.first << " -> " << x.second << endl;
  }

  bool val = !(mp.find(1) == mp.end());
  // 1 exists in the map -> true
  cout << val << endl;

  cout << mp.find(1)->second << endl;
}

void learnMultiMap()
{
  multimap<int, int> mmp;
  // Same as a map but can have store multiple keys
  // map[key] cannot be used here
}

void learnUnorderedMap()
{
  unordered_map<int, int> umap;
  // Same as a map and unordered set
  // Can have store multiple keys
  // Do have unique keys but not sorted
  // Works at O(1) but...
  // O(n) can be possible in rare cases
}

// There are more similar Structures like:
// unordered_multimap
// unordered_multiset

// SOME IMPORTANT ALGORITHMS

void learnExtra()
{
  // sort(array, array + size);
  // sort(vector.begin(), vector.end());

  // If you want to sort just a part then
  // sort(vector.begin() + 2, vector.begin() + 5);

  pair<int, int> pr[] = {{1, 2}, {2, 2}, {2, 1}, {1, 1}};
  int n = sizeof(pr) / sizeof(pr[0]);
  sort(pr, pr + n);

  for (auto element : pr)
  {
    cout << element.first << " " << element.second << endl;
  }

  int num = 7;
  int countOnes = __builtin_popcount(num);
  cout << countOnes << endl;

  long long num2 = 1234567890987;
  countOnes = __builtin_popcountll(num2);
  cout << countOnes << endl;

  int arr[] = {1, 5, 3, 8, 7, 2, 9};
  n = sizeof(arr) / sizeof(arr[0]);
  int maxValue = *max_element(arr, arr + n);

  // similarly min_element also exists

  cout << maxValue << endl;
}

vector<int> factors(int num)
{
  vector<int> v;
  for (int i = 1; i * i < num; i++)
  {
    if (num % i == 0)
    {
      v.emplace_back(i);
      if (num / i != i)
      {
        v.emplace_back(num / i);
      }
    }
  }
  return v;
}

string printBinary(unsigned int num)
{
  string str = "";
  for (int i = 31; i >= 0; --i)
  {
    if ((1 << i) & num)
    {
      str += '1';
    }
    else
    {
      str += '0';
    }
  }
  cout << str << endl;
  return str;
}

void learnBitset(long long num)
{
  string binaryStr = bitset<64>(num).to_string();
  cout << binaryStr << endl;
}

void printAllPermutations(int num)
{
  string str = to_string(num);
  // Sorting the characters is very very important
  sort(str.begin(), str.end());
  int count = 1;
  do
  {
    cout << count << " : " << str << endl;
    count++;
  } while (next_permutation(str.begin(), str.end()));
  return;
}

void printAllPermutations(string str)
{
  sort(str.begin(), str.end());
  int count = 1;
  do
  {
    cout << count << " : " << str << endl;
    count++;
  } while (next_permutation(str.begin(), str.end()));
  return;
}

bool checkForPrime(int num)
{
  if (num <= 1)
    return false;
  if (num <= 3)
    return true;
  if (num % 2 == 0)
    return false;

  for (int i = 3; i * i <= num; i += 2)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int greatestCommonDivisor(int a, int b)
{
  // Also called Highest Common Factor
  // Finding GCD or HCF of two numbers

  // This algorithm : O(min(a, b))

  a = abs(a);
  b = abs(b);

  int res = 1;
  for (int i = min(a, b); i >= 0; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      res = i;
    }
  }
  return res;
}

int gcdEuclideanAlgorithm(int a, int b)
{
  // GCD(a, b) == GCD(a-b, b)
  // This algorithm : O(log(min(a,b)))

  a = abs(a);
  b = abs(b);

  while (a > 0 && b > 0)
  {
    (a > b) ? a = a % b : b = b % a;
  }

  return (a == 0) ? b : a;
}

int main()
{
  //------------------------------------
  // DATA STRUCTURES :
  // -----------------------------------

  // learnPair();
  // learnVector();
  // learnList();
  // learnDeque();
  // learnStack();
  // learnQueue();
  // learnPriorityQueue();
  // learnSet();
  // learnMultiset();
  // learnMap();
  // learnMultiMap();
  // learnUnorderedMap();

  //------------------------------------
  // ALGORITHMS :
  // -----------------------------------

  // learnExtra();
  // printBinary(10);
  // learnBitset(3472890258937294);
  // printAllPermutations(1234);
  // printAllPermutations("Ayush");

  // vector<int> vec = factors(36);
  // for (auto element : vec)
  // {
  //   cout << element << " ";
  // }
  // cout << endl;

  // cout << checkForPrime(789);
  // cout << greatestCommonDivisor(72, 108);
  // cout << gcdEuclideanAlgorithm(36, 108);
}