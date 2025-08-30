#ifndef MERGESORT_H
#define MERGESORT_H
using namespace std;

#include <vector>

class MergeSort {
private:
    vector<int> *nums;

public:
    MergeSort(std::vector<int> *nums);
    ~MergeSort();
    void sort();
    void recursiveSort(int left, int right);
};

#endif