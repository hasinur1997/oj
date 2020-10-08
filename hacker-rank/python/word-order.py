# from collections import OrderedDict


# words = OrderedDict()
# n = int(input())


# for i in range(n):
#     input_text = input()

#     if input_text in words:
#         words[input_text] += 1

#     else:
#         words[input_text] = 1

# print(len(words))
# print(' '.join(map(str, words.values())))


# def test(*nums):
#     numbers = list(locals()['nums'])

#     numbers = map(float, numbers)

#     return sum(numbers) / len(numbers);
    


# result = test(2.5, 5.5)

# print(result)

# orders = [2.00, 5.00]

# print(sum(orders) / len(orders))

# print("The average coffee order price today is $" + str(round(average, 2)))


#!/bin/python

import math
import os
import random
import re
import sys


class Car:
    def __init__(self, speed, speed_unit):
        self.value = speed
        self.unit = speed_unit
        
    def __str__(self):
        return "Car with maximum speed of " + str(self.value) + " " + str(self.unit)
    
class Boat:
    def __init__(self, speed):
        self.value = speed
        
    def __str__(self):
        return "Boat with maximum speed of " + str(self.value) + " knots"
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    q = int(raw_input())
    queries = []
    for _ in xrange(q):
        args = raw_input().split()
        vehicle_type, params = args[0], args[1:]
        if vehicle_type == "car":
            max_speed, speed_unit = int(params[0]), params[1]
            vehicle = Car(max_speed, speed_unit)
        elif vehicle_type == "boat":
            max_speed = int(params[0])
            vehicle = Boat(max_speed)
        else:
            raise ValueError("invalid vehicle type")
        fptr.write("%s\n" % vehicle)
    fptr.close()

