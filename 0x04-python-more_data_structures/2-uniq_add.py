#!/usr/bin/python3
def uniq_add(my_list):
    unique_set = set()
    sum_unique = 0
    for num in my_list:
        if num not in unique_set:
            sum_unique += num
            unique_set.add(num)
    return sum_unique
