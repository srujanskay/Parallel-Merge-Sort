Parallel Merge Sort Implementation
Overview

This project showcases a C++ implementation of the Merge Sort algorithm enhanced with parallel processing. By leveraging multithreading, the algorithm achieves substantial speedups, particularly on large datasets. The design highlights the use of a thread pool and efficient synchronization to maximize performance.

Features

Parallel Execution: Sorts data concurrently across multiple CPU threads, cutting down execution time.

Thread Pool Management: Efficiently handles task scheduling and thread reuse, avoiding overhead from repeated thread creation.

Benchmarking: Compares runtime between traditional Merge Sort and its parallel counterpart, illustrating the impact of parallelism.

Implementation Details

The core idea is to optimize the classical Merge Sort with parallelism:

Recursive Splitting: Data is repeatedly divided into smaller subarrays until a defined threshold is reached.

Concurrent Sorting: Subarrays are processed in parallel using multiple threads.

Efficient Merging: The sorted subarrays are merged to form the final result.

Thread Pool

A thread pool underpins the parallel execution, managing threads and synchronization with minimal overhead. This approach ensures better CPU utilization and improved scalability.

Performance Comparison

Benchmark results show a striking performance difference: the traditional Merge Sort takes around 25 seconds, while the Parallel Merge Sort completes the same workload in just about 1 second—demonstrating the efficiency gains from parallelism.