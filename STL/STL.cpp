/*
   _   _                        _      __       _
  /_\ | |__  _ __ ___   ___  __| |    / _| __ _| |__  _ __ ___  _   _
 / _ \| '_ \| '_ ` _ \ / _ \/ _` |   | |_ / _` | '_ \| '_ ` _ \| | | |
/  _  | | | | | | | | |  __| (_| |   |  _| (_| | | | | | | | | | |_| |
\_/ \_|_| |_|_| |_| |_|\___|\__,_|   |_|  \__,_|_| |_|_| |_| |_|\__, |
                                                              |___/    */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double

#define INF 1e9
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define el << '\n'
#define all(x) x.begin(), x.end()
#define cel cout << '\n';
#define cinv(v)         \
    for (auto &ele : v) \
        cin >> ele;
#define coutv(v)        \
    for (auto &ele : v) \
        cout << ele << " ";
#define forv(i, n) for (ll i = 0; i < n; i++)

int Vector() {
    vector<int> vec = {1, 2, 3, 10, 5, 8};

    // Adding elements
    vec.push_back(4); // Add element at end
    vec.insert(vec.begin(), 0); // Insert at the beginning
    vec.insert(vec.begin() + 2, 5); // Insert at specific position

    // Removing elements
    vec.pop_back(); // Remove last element
    vec.erase(vec.begin()); // Remove first element
    vec.erase(vec.begin() + 1); // Remove at specific position
    vec.clear(); // Remove all elements

    // Accessing elements
    vec = {10, 20, 30, 40, 50};
    cout << "Vector front: " << vec.front() << endl;
    cout << "Vector back: " << vec.back() << endl;
    cout << "Vector[2]: " << vec[2] << endl;

    // Capacity functions
    cout << "Vector size: " << vec.size() << endl;
    cout << "Vector max size: " << vec.max_size() << endl;
    cout << "Vector capacity: " << vec.capacity() << endl;
    vec.shrink_to_fit(); // Reduce capacity to fit size

    // Iterators
    cout << "Vector elements: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iterators
    cout << "Vector elements in reverse: ";
    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // Using range-based loop
    cout << "Vector elements (range-based loop): ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;

    // Resizing and reserving
    vec.resize(3); // Resize to contain 3 elements
    vec.reserve(10); // Reserve capacity for 10 elements
    
    cout << "Vector after resizing: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;
    
    // Sorting
    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;
    
    // Finding max element
    auto maxElement = max_element(vec.begin(), vec.end());
    if (maxElement != vec.end()) {
        cout << "Max element: " << *maxElement << endl;
    }
    
    // Finding min element
    auto minElement = min_element(vec.begin(), vec.end());
    if (minElement != vec.end()) {
        cout << "Min element: " << *minElement << endl;
    }
    
    // Checking if vector is sorted
    cout << "Is sorted: " << (is_sorted(vec.begin(), vec.end()) ? "Yes" : "No") << endl;
    
    // Reversing the vector
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << endl;
    
    // Finding an element
    auto it = find(vec.begin(), vec.end(), 20);
    if (it != vec.end()) {
        cout << "Element 20 found at position: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "Element 20 not found" << endl;
    }
    
    return 0;
}

int List() {
    // LIST - Doubly linked list
    list<int> lst = {10, 20, 30, 40, 50};

    // Adding elements
    lst.push_back(60); // Add at end
    lst.push_front(5); // Add at beginning
    lst.insert(next(lst.begin(), 2), 15); // Insert at specific position

    // Removing elements
    lst.pop_back(); // Remove last element
    lst.pop_front(); // Remove first element
    lst.erase(next(lst.begin(), 2)); // Remove element at specific position
    lst.remove(30); // Remove all occurrences of value 30

    // Accessing elements
    cout << "List front: " << lst.front() << endl;
    cout << "List back: " << lst.back() << endl;

    // Iterators
    cout << "List elements: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iteration
    cout << "List elements in reverse: ";
    for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // Sorting
    lst.sort();
    cout << "Sorted list: ";
    for (int v : lst) {
        cout << v << " ";
    }
    cout << endl;

    // Finding max and min elements
    auto maxElement = max_element(lst.begin(), lst.end());
    if (maxElement != lst.end()) {
        cout << "Max element: " << *maxElement << endl;
    }
    auto minElement = min_element(lst.begin(), lst.end());
    if (minElement != lst.end()) {
        cout << "Min element: " << *minElement << endl;
    }

    // Reversing list
    lst.reverse();
    cout << "Reversed list: ";
    for (int v : lst) {
        cout << v << " ";
    }
    cout << endl;

    // Merging lists
    list<int> lst2 = {70, 80, 90};
    lst.merge(lst2); // Merge two sorted lists
    cout << "Merged list: ";
    for (int v : lst) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

int Forward_list() {
    // FORWARD_LIST - Singly linked list
    forward_list<int> flst = {10, 20, 30, 40, 50};

    // Adding elements
    flst.push_front(5); // Add at beginning
    auto it = flst.before_begin(); // Iterator before the first element
    flst.insert_after(it, 15); // Insert after a specific position

    // Removing elements
    flst.pop_front(); // Remove first element
    flst.remove(30); // Remove all occurrences of value 30
    flst.erase_after(flst.before_begin()); // Remove element after a specific position

    // Accessing elements (Forward_list does not support indexing)
    cout << "Forward List elements: ";
    for (const int& v : flst) {
        cout << v << " ";
    }
    cout << endl;

    // Sorting (Requires reassigning since forward_list does not have random access iterators)
    flst.sort();
    cout << "Sorted forward list: ";
    for (int v : flst) {
        cout << v << " ";
    }
    cout << endl;

    // Finding max and min elements
    auto maxElement = max_element(flst.begin(), flst.end());
    if (maxElement != flst.end()) {
        cout << "Max element: " << *maxElement << endl;
    }
    auto minElement = min_element(flst.begin(), flst.end());
    if (minElement != flst.end()) {
        cout << "Min element: " << *minElement << endl;
    }

    // Reversing the list
    flst.reverse();
    cout << "Reversed forward list: ";
    for (int v : flst) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

int Deque() {
    // DEQUE - Double-ended queue
    deque<int> dq = {10, 20, 30, 40, 50};

    // Adding elements
    dq.push_back(60); // Add at end
    dq.push_front(5); // Add at beginning
    dq.insert(dq.begin() + 2, 15); // Insert at specific position

    // Removing elements
    dq.pop_back(); // Remove last element
    dq.pop_front(); // Remove first element
    dq.erase(dq.begin() + 2); // Remove element at specific position

    // Accessing elements
    cout << "Deque front: " << dq.front() << endl;
    cout << "Deque back: " << dq.back() << endl;
    cout << "Deque[2]: " << dq[2] << endl;

    // Iterators
    cout << "Deque elements: ";
    for (deque<int>::iterator it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iteration
    cout << "Deque elements in reverse: ";
    for (deque<int>::reverse_iterator rit = dq.rbegin(); rit != dq.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // Sorting
    sort(dq.begin(), dq.end());
    cout << "Sorted deque: ";
    for (int v : dq) {
        cout << v << " ";
    }
    cout << endl;

    // Finding max and min elements
    auto maxElement = max_element(dq.begin(), dq.end());
    if (maxElement != dq.end()) {
        cout << "Max element: " << *maxElement << endl;
    }
    auto minElement = min_element(dq.begin(), dq.end());
    if (minElement != dq.end()) {
        cout << "Min element: " << *minElement << endl;
    }

    // Reversing deque
    reverse(dq.begin(), dq.end());
    cout << "Reversed deque: ";
    for (int v : dq) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

int Queue() {
    // QUEUE - FIFO (First In, First Out)
    queue<int> q;
    
    // Pushing elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    cout << "Queue elements (from front to back): ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    
    // Popping elements
    q.pop();
    cout << "Front after pop: " << q.front() << endl;
    
    // Checking if queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    
    // Queue size
    cout << "Queue size: " << q.size() << endl;
    
    // Clearing the queue
    while (!q.empty()) {
        q.pop();
    }
    cout << "Queue size after clearing: " << q.size() << endl;
    
    return 0;
}

int Priority_Queue() {
    // PRIORITY QUEUE - Max Heap by default
    priority_queue<int> pq;
    
    // Pushing elements
    pq.push(10);
    pq.push(50);
    pq.push(30);
    pq.push(20);
    pq.push(40);
    
    cout << "Priority Queue elements (from top to bottom): ";
    priority_queue<int> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
    cout << "Top element: " << pq.top() << endl;
    
    // Popping elements
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl;
    
    // Checking if priority queue is empty
    if (pq.empty()) {
        cout << "Priority Queue is empty" << endl;
    } else {
        cout << "Priority Queue is not empty" << endl;
    }
    
    // Priority Queue size
    cout << "Priority Queue size: " << pq.size() << endl;
    
    // Clearing the priority queue
    while (!pq.empty()) {
        pq.pop();
    }
    cout << "Priority Queue size after clearing: " << pq.size() << endl;
    
    return 0;
}

int Stack() {
    // STACK - LIFO (Last In, First Out)
    stack<int> st;
    
    // Pushing elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    cout << "Stack elements (from top to bottom): ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
    cout << "Stack top element: " << st.top() << endl; // 50
    
    // Popping elements
    st.pop();
    cout << "Stack top after pop: " << st.top() << endl; // 40
    
    // Checking if stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    
    // Stack size
    cout << "Stack size: " << st.size() << endl;
    
    // Clearing the stack
    while (!st.empty()) {
        st.pop();
    }
    cout << "Stack size after clearing: " << st.size() << endl;
    
    return 0;
}

int Pair() {
    // Defining a pair
    pair<int, string> p1(1, "Hello");
    pair<int, string> p2 = make_pair(2, "World");
    
    // Accessing pair elements
    cout << "Pair 1: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "Pair 2: (" << p2.first << ", " << p2.second << ")" << endl;
    
    // Modifying a pair
    p1.first = 10;
    p1.second = "Changed";
    cout << "Modified Pair 1: (" << p1.first << ", " << p1.second << ")" << endl;
    
    // Swapping pairs
    swap(p1, p2);
    cout << "After swapping:\n";
    cout << "Pair 1: (" << p1.first << ", " << p1.second << ")" << endl;
    cout << "Pair 2: (" << p2.first << ", " << p2.second << ")" << endl;
    
    // Nested pairs
    pair<int, pair<string, double>> nestedPair = {3, {"Nested", 4.5}};
    cout << "Nested Pair: (" << nestedPair.first << ", (" << nestedPair.second.first << ", " << nestedPair.second.second << "))" << endl;
    
    // Comparing pairs
    pair<int, int> a = {1, 5};
    pair<int, int> b = {1, 10};
    if (a < b) {
        cout << "Pair a is smaller than Pair b" << endl;
    } else {
        cout << "Pair a is not smaller than Pair b" << endl;
    }
    
    return 0;
}

int Set() {
    // SET - Unique and Sorted Elements
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20); // Duplicate, will not be added
    
    cout << "Set elements: ";
    for (int v : s) {
        cout << v << " ";
    }
    cout << endl;
    
    // Finding an element in set
    if (s.find(20) != s.end()) {
        cout << "20 is in the set" << endl;
    }
    
    // Removing elements from set
    s.erase(10);
    cout << "Set after removing 10: ";
    for (int v : s) {
        cout << v << " ";
    }
    cout << endl;
    
    // MULTISET - Allows duplicate elements
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);
    
    cout << "Multiset elements: ";
    for (int v : ms) {
        cout << v << " ";
    }
    cout << endl;
    
    // Counting occurrences in multiset
    cout << "Count of 20 in multiset: " << ms.count(20) << endl;
    
    // Removing a specific occurrence in multiset
    ms.erase(ms.find(20));
    cout << "Multiset after erasing one 20: ";
    for (int v : ms) {
        cout << v << " ";
    }
    cout << endl;
    
    // UNORDERED_SET - Unique elements, but unordered
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20); // Duplicate, will not be added
    
    cout << "Unordered Set elements: ";
    for (int v : us) {
        cout << v << " ";
    }
    cout << endl;
    
    // Checking existence in unordered_set
    if (us.find(30) != us.end()) {
        cout << "30 exists in unordered_set" << endl;
    }
    
    // UNORDERED_MULTISET - Allows duplicates, unordered
    unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(20);
    ums.insert(20);
    ums.insert(30);
    
    cout << "Unordered Multiset elements: ";
    for (int v : ums) {
        cout << v << " ";
    }
    cout << endl;
    
    // Count occurrences in unordered_multiset
    cout << "Count of 20 in unordered_multiset: " << ums.count(20) << endl;
    
    return 0;
}

int Map() {
    // MAP - Unique keys, sorted by key
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";
    mp[3] = "Three";
    mp.insert({4, "Four"});
    
    cout << "Map elements: " << endl;
    for (auto &p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    // Finding an element
    if (mp.find(2) != mp.end()) {
        cout << "Key 2 exists in the map" << endl;
    }
    
    // MULTIMAP - Allows duplicate keys, sorted by key
    multimap<int, string> mmp;
    mmp.insert({1, "One"});
    mmp.insert({2, "Two"});
    mmp.insert({2, "Deux"}); // Duplicate key
    mmp.insert({3, "Three"});
    
    cout << "Multimap elements: " << endl;
    for (auto &p : mmp) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    // UNORDERED_MAP - Unique keys, but unordered
    unordered_map<int, string> ump;
    ump[1] = "One";
    ump[2] = "Two";
    ump[3] = "Three";
    ump.insert({4, "Four"});
    
    cout << "Unordered Map elements: " << endl;
    for (auto &p : ump) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    // UNORDERED_MULTIMAP - Allows duplicate keys, unordered
    unordered_multimap<int, string> ummp;
    ummp.insert({1, "One"});
    ummp.insert({2, "Two"});
    ummp.insert({2, "Deux"});
    ummp.insert({3, "Three"});
    
    cout << "Unordered Multimap elements: " << endl;
    for (auto &p : ummp) {
        cout << p.first << " -> " << p.second << endl;
    }
    
    return 0;
}


int main() {

    
#ifdef _fahmy
freopen("input.in", "rt", stdin);
freopen("output.out", "w", stdout);
#endif
IO;
ll t = 1;
// cin >> t;
while (t--)
{
    // Vector();
    // List();
    // Forward_list();
    // Deque();
    // Queue();
    // Priority_Queue();
    // Stack();
    // Pair();
    // Set();
    // Map();

}

return 0;
}