#!/usr/bin/python3

class Square:
    """Represents a square"""
    def __init__(self):
        self.dict_ = {}

    def print_type_and_dict(self):
        print(type(self))
        print(self.dict_)


mysquare = Square()
print(type(mysquare))
print(mysquare.dict_)
