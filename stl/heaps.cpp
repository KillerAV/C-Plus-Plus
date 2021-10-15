#include <iostream>
#include <queue>
#include <cassert>

/**
 * The following code deals with STL Maxheap usage.
 * The code depicts following:
 * (a) Push in a heap.
 * (b) Popping elements from heap.
 * (c) Accessing the largest element in a heap.
 */
int main() 
{
    std::priority_queue<int> maxHeap;

    //Insert in a maxHeap
    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(10);
    maxHeap.push(5);

    //Accessing largest element in a maxHeap
    assert(10==maxHeap.top());

    //Popping out elements from the maxHeap
    maxHeap.pop();
    assert(5==maxHeap.top());
}
