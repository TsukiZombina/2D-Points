# 2D-Points
Circular counterclock.wise sorting of points with std::forward_list

## Description
- Entrada: This program recieves a set of coodinates of type integer through text file.
- Salida: Print in the standard output the counter-clockwise list of points.

## Execution example
```markdown
`$` g++ .*cpp -o points -std=c++11
`$`./points points.txt
2 6
4 5
5 3
5 0
2 0
0 0
3 5
3 1
```
## Input test
| Test 1 | Test 2 | Test 3 | Test 4 | Test 5 | Test 6 |
|--------|--------|--------|--------|--------|--------|
| 2 6    | 3 5    | 4 4    | 6 6    | 7 4    | 3 2    |
| 4 5    | 7 6    | 6 4    | 0 0    | 5 4    | 1 1    |
| 5 3    | 1 0    | 5 6    | 4 0    | 5 6    | 2 0    |
| 5 0    | 4 6    | 6 7    | 4 5    | 4 5    | 3 2    |
| 2 0    | 7 1    | 1 4    | 2 5    | 6 5    | 4 5    |
| 0 0    | 0 8    | 2 4    | 4 3    | 4 6    | 6 8    |
| 3 5    | 2 7    | 3 5    | 4 3    | 5 6    | 9 7    |
| 3 1    | 4 5    | 3 6    | 9 5    | 4 5    | 0 1    |

## Output test
| Test 1 | Test 2 | Test 3 | Test 4 | Test 5 | Test 6 |
|--------|--------|--------|--------|--------|--------|
| 0 0    | 1 0    | 1 4    | 0 0    | 5 4    | 2 0    |
| 2 0    | 7 1    | 2 4    | 4 0    | 7 4    | 9 7    |
| 5 0    | 7 6    | 4 4    | 9 5    | 6 5    | 3 2    |
| 3 1    | 4 5    | 6 4    | 4 3    | 5 6    | 3 2    |
| 5 3    | 4 6    | 3 5    | 4 3    | 5 6    | 6 8    |
| 4 5    | 3 5    | 5 6    | 6 6    | 4 6    | 4 5    |
| 3 5    | 2 7    | 6 7    | 4 5    | 4 5    | 1 1    |
| 2 6    | 0 8    | 3 6    | 2 5    | 4 5    | 0 1    |

## Plots
### Test 1
![Test 1](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image003.png)

### Test 2
![Test 2](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image004.png)

### Test 3
![Test 3](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image005.png)

### Test 4
![Test 4](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image006.png)

### Test 5
![Test 5](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image007.png)

### Test 6
![Test 6](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/image008.png)

## Code
[2DPoints.tar.gz](https://computacion.cs.cinvestav.mx/~zmarquez/CircularForwardList_files/2DPoints.tar.gz)