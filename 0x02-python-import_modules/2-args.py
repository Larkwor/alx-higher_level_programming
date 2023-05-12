#!/usr/bin/python3
import sys

if __name__ == "__main__":
    num_args = len(sys.argv) - 1
    print("{} argument{}{}".format(num_args, 's' if num_args != 1 else '', ':' if num_args else '.'))
    for i in range(1, len(sys.argv)):
        print("{}: {}".format(i, sys.argv[i]))
