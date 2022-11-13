#!/bin/python3

import math
import os
import random
import re
import sys


import requests

#
# Complete the 'getNumDraws' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER year as parameter.
#

def getNumDraws(year):
    # Write your code here
    url1 = "https://jsonmock.hackerrank.com/api/football_matches?year=" + str(year)
    response1 = requests.get(url1).json()
    total_page_url_1 = response1['total_pages']
    total = 0
    for i in range(0,12):
        url1 = "https://jsonmock.hackerrank.com/api/football_matches?year={0}&team1goals={1}&team2goals={1}".format(year,i)
        response1 = requests.get(url1).json()
        total += response1['total']
    return total

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = getNumDraws(year)

    fptr.write(str(result) + '\n')

    fptr.close() 