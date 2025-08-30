#ifndef PARALLELMERGESORT_H
#define PARALLELMERGESORT_H
using namespace std;

#include <vector>
#include <thread>
#include <mutex>
#include <iostream>

class ParallelMergeSort {
private:
    vector<int> *nums;

public:
    ParallelMergeSort(vector<int> *nums);
    ~ParallelMergeSort();
    void sort();
    void recursiveSort(int left, int right);
};

#endif