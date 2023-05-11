#!/usr/bin/python3
import sys

args = sys.argv[1:]
n_args = len(args)

if n_args == 0:
    print("{} arguments.".format(n_args))
else:
    print("{} argument{}:".format(n_args, "" if n_args == 1 else "s"))
    for i, arg in enumerate(args):
        print("{}: {}".format(i+1, arg))
