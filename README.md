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

Test[0] - Array len 42822
Algorithm       Compare         Elapse(ms)     
isort           461131365       1361.321       
ssort           916840431       2100.523       
bsort           916840431       6239.693       
bbsort          916840431       5240.482       
qsort           821569          5.831       
hsort           14930           8.73        
msort           605821          31.396

Test[1] ...
```

