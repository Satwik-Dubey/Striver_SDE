# Heaps

 Heap is a Complete Binary Tree that comes with a heap order property.

### Complete Binary Tree

A complete binary tree is a type of binary tree that satisfies two specific conditions:
####
All levels, except possibly the last, are completely filled.
This means that for any level above the last one, every possible node position at that level is occupied by a node.
####
All nodes in the last level are as far left as possible.
If the last level is not completely filled, the nodes present in that level must be arranged starting from the leftmost position, with no gaps in between. There cannot be a node with a right child but no left child. 

#### Max & Min Heap
<img width="766" height="660" alt="image" src="https://github.com/user-attachments/assets/ee92eb23-11b7-4c39-81df-2a947cad8ebf" />

#### Insertion

<img width="2834" height="1254" alt="image" src="https://github.com/user-attachments/assets/f58ff9c2-fc1f-4689-8962-f044070f3d74" />

#### Deletion

In this we always talk about deleting the root node.

<img width="2688" height="1228" alt="image" src="https://github.com/user-attachments/assets/853cf5ae-a92d-4b30-941e-4007bd6aebc0" />
<img width="2500" height="794" alt="image" src="https://github.com/user-attachments/assets/f50ac25e-eac3-46be-bc44-c4d7dd1ad0ad" />
<img width="2498" height="638" alt="image" src="https://github.com/user-attachments/assets/4850c460-0010-4cee-92a0-b4dd4178925c" />

TC - O(logn)

#### Heapify Algorithm O(logN)

<img width="2754" height="1462" alt="image" src="https://github.com/user-attachments/assets/9da56022-1e4a-4a06-a405-dfd1d592f162" />

What heapify function do is to take a node to its right place, this is the work of heapify function 

#### HeapSort O(nlogn)

When we are talking to move node to correct location i.e root node then apply heapify function automatically.

<img width="2746" height="1454" alt="image" src="https://github.com/user-attachments/assets/a87baca2-c4fd-40ee-9996-f5580d73038e" />

#### Priority Queue 

- We can use heap functionality through it .
- We can make maxHeap and minHeap through it .
- In this if we enter elements then the highest node will be on top
  <img width="984" height="590" alt="image" src="https://github.com/user-attachments/assets/18bf6a85-5d8e-4854-b442-3c3fec83e646" />
  
#### O/P : Element at top 5

- and now if e pop then 5 will be deleted and the next max node will come on top
  <img width="1110" height="852" alt="image" src="https://github.com/user-attachments/assets/f44a5aca-de3b-4a2b-b8dd-b733d519a18d" />

- Above is for max heap and now for min heap

- <img width="1216" height="860" alt="image" src="https://github.com/user-attachments/assets/4272b158-5602-4bc7-99c7-313772c54dae" />

- and for maxheap we write ``` priority_queue<int>pq```




