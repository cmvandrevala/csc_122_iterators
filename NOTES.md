# Notes

## Vocabulary and Definitions

Algorithm - a procedure used for solving a problem or performing a computation.
Data structure - A format for organizing, processing, retrieving, and storing data

* What kind of information will be stored?
* How will that information be used?
* Where should data persist, or be kept, after it is created?
* What is the best way to organize the data?
* What aspects of memory and storage reservation management should be considered?

Static - the data structure has a fixed size and structure at compile time
Dynamic - the data structure has a changeable size and / or structure
Contiguous - elements are stored next to each other in memory
Random Access - any element in the container can be retrieved in constant time
Double Ended - elements can be added to the back or the front of the structure
Linear - items are arranged in a sequential order, such as with an array
Non Linear - items are arranged in an unordered sequence, such as with a graph
Homogeneous - items in a given structure are of the same type
Heterogeneous - items in a given structure are different types

Container - an object that stores a collection of other objects (called its elements).

* They are implemented as class templates in C++, which allows flexibility in the types supported as elements
* You will often see them called STL containers or standard template library containers
* STL containers must contain all the same type of element
* Containers are broadly categorized

Sequence containers - data structures that can be accessed sequentially (i.e. you start at an element and iterate through them in a pre-determined, ordered manner)

* array - Static contiguous array
* vector - Dynamic, contiguous array, random-access iterator
* deque - Double-ended queue, random-access iterator
* forward_list - Singly-linked list
* list - Doubly-linked list
* It is pretty natural to iterate over sequence containers - for(int i = 0; i< N; i++)

Associative containers - data structures that are sorted so that they can be quickly searched

* set: Collection of unique keys, sorted by keys
* map: Collection of key-value pairs, sorted by keys, keys are unique
* multiset: Collection of keys, sorted by keys
* multimap: Collection of key-value pairs, sorted by keys

Unordered associative containers - hashed data structures that can be quickly searched

* unordered_set: Collection of unique keys, hashed by keys. (class template)
* unordered_map: Collection of key-value pairs, hashed by keys, keys are unique. (class template)
* unordered_multiset: Collection of keys, hashed by keys (class template)
* unordered_multimap: Collection of key-value pairs, hashed by keys (class template)

Container adapters - takes an existing sequential container and gives it a different interface

* stack: Adapts a container to provide stack (LIFO data structure)
* queue: Adapts a container to provide queue (FIFO data structure)
* priority_queue: Adapts a container to provide priority queue
* These structures do not support iterators

Iterators allow you to iterate over any container - whether it is ordered or not

* They allow us to view a non-linear container in a linear manner
* `myStructure.begin()` refers to the beginning of the data structure
* You can get the value at a point in the iterator by using the dereferencing operator
* You can check to see if you hit the end of the data structure by using `if(iter == mySet.end()) return;`
