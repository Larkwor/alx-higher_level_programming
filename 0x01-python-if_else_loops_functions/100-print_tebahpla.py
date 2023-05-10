#!/usr/bin/python
for i in range(90, 64, -1):
    print("{:c}".format(i + 32 * ((i + 1) % 2)), end="")
