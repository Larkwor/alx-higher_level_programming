#!/usr/bin/python3
import sys

if __name__ == '__main__':
    num_args = len(sys.argv) - 1
    print(f"{len(sys.argv) - 1} argument{'s' if len(sys.argv) != 2 else ''}:")
    for i in range(1, len(sys.argv)):
        print("{}: {}".format(i, sys.argv[i]))
