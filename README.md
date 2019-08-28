Sorting algorithm test
========================

- isort: Insert sort
- ssort: Select sort
- bsort: Bubble sort
- bbsort: Bidirectional bubble sort
- qsort: Quick sort
- hsort: Heap sort
- msort: Merge sort


## Usage

```
Usage: ./sort [options]

    -p        Print array data before and after sorted. Useful for handy debug.
    -c        Check if correct order for sorted data.
    -tn int   Test data number. Default 10.
    -mal int  Max array len. Default 50000.
    -mav int  Max array value. Default 100000.
```

## Result

```
Test number(tn): 10, Max array len(mal): 50000, Max array value(mav): 100000.
Sort check: Off.

Test[0] - Array len 8209
Algorithm       Compare         Elapse(ms)     
isort           16925412        66.31        
ssort           33689736        80.311       
bsort           33689736        217.487       
bbsort          33689736        200.497       
qsort           121524          0.973       
hsort           2906            1.367       
msort           96299           32.329

Test[1] ...
```

