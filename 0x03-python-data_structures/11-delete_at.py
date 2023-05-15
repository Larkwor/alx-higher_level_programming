#!/usr/bin/python3

def delete_at(my_list=[], idx=0):
    if idx < 0 or idx >= len(my_list):
        # index out of range, return the same list
        return my_list

    # create a new list with all elements except the one at the given index
    new_list = my_list[:idx] + my_list[idx+1:]

    return new_list
