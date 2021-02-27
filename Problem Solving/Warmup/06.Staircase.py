#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    for j in range(1,n+1):
        print(str('#' * j).rjust(n))
    print()    

if __name__ == '__main__':
    n = int(input())

    staircase(n)
