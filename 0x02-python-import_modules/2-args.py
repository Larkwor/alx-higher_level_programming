#!/usr/bin/env python3

import argparse

def main():
    parser = argparse.ArgumentParser(description="Count and list command-line arguments.")
    parser.add_argument("args", nargs="*", help="The list of command-line arguments")
    args = parser.parse_args()
    count = len(args.args)
    if count == 0:
        print("0 arguments.")
    elif count == 1:
        print("1 argument:")
    else:
        print(f"{count} arguments:")
    for i, arg in enumerate(args.args):
        print(f"{i + 1}: {arg}")

if __name__ == "__main__":
    main()
