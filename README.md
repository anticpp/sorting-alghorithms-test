Sorting algorithm test
========================

- isort: Insert sort
- ssort: Select sort
- bsort: Bubble sort
- bbsort: Bidirectional bubble sort
- qsort: Quick sort
- hsort: Heap sort


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

Test[0] - Array len 38048
Algorithm       Compare         Elapse(ms)     
isort           362233121       1073.949       
ssort           723806128       1630.646       
bsort           723806128       5114.22        
bbsort          723806128       4428.819       
qsort           720350          5.544       
hsort           13357           7.40

Test[1] ...
```

