#!/usr/bin/python3

from calculator_1 import add, sub, mul, div

def main():
    a = 10
    b = 5

    c = add(a, b)
    print("{:d} + {:d} = {:d}".format(a, b, c))

    c = sub(a, b)
    print("{:d} - {:d} = {:d}".format(a, b, c))

    c = mul(a, b)
    print("{:d} * {:d} = {:d}".format(a, b, c))

    c = div(a, b)
    print("{:d} / {:d} = {:.0f}".format(a, b, c))

if __name__ == "__main__":
    main()
