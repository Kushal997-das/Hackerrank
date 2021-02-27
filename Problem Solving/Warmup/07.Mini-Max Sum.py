#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    M=sorted(arr,reverse=True)
    m=sorted(arr)
    total_sum=0
    total=0
    for i in range(len(M)-1):
        total_sum+=M[i]
    for k in range(len(m)-1):
        total+=m[k]
    print(total,total_sum)        

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
