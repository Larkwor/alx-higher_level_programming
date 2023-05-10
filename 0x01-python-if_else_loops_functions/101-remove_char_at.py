#!/usr/bin/python3
def remove_char_at(s, n):
    # Return original string if index is out of range
    if n >= len(s) or n < 0:
        return s

    # Create a new string without the character at the given index
    return s[:n] + s[n+1:]
