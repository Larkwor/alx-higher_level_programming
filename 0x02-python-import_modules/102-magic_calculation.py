#!/usr/bin/python3
# 102-magic_calculation.py

# Import the add and sub functions from the magic_calculation_102 module
from magic_calculation_102 import add, sub

def magic_calculation(a, b):
    """Performs a magic calculation based on the given arguments."""

    # If a is less than b, perform a series of additions and return the result
    if a < b:
        c = add(a, b)
        for i in range(4, 6):
            c = add(c, i)
        return c

    # If a is not less than b, perform a subtraction and return the result
    else:
        return sub(a, b)
