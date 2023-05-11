#!/usr/bin/python3
"""A script that imports functions from the module calculator_1.py"""
import sys
from calculator_1 import add, sub, mul, div


if __name__ == "__main__":
    """The program's entry point."""
    op_funcs = {"+": add, "-": sub, "*": mul, "/": div}
    argc = len(sys.argv)
    if argc != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    op = sys.argv[2]
    if op not in op_funcs:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)
    a, b = int(sys.argv[1]), int(sys.argv[3])
    print(f"{a} {op} {b} = {op_funcs[op](a, b)}")
