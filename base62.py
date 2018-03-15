# -*- coding: utf-8 -*-
"""
Two functions to encode and decode numbers to/from base62

https://www.reddit.com/r/dailyprogrammer/comments/7yyt8e/20180220_
challenge_352_easy_making_imgurstyle/

"""

def to_base62(num):
    BASE = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    div = num // 62
    ost = num % 62
    res = BASE[ost]
    while div != 0:
        ost = div % 62
        div = div // 62
        res = BASE[ost] + res
       
    return res

def from_base62(num):
    BASE = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    res = 0
    for i in range(len(num)):
        res = res * 62 + BASE.index(num[i])
    
    return res

# Tests on some numbers:
if __name__ == "__main__":
    print(to_base62(62))
    print(to_base62(63))
    print(to_base62(15674))
    print(to_base62(7026425611433322325))
    print(f"number 8n36rbfRcDb is {from_base62('8n36rbfRcDb')}")
    print(from_base62('44O'))
    print(from_base62('11'))
    print(from_base62('10'))
    print(to_base62(987654321) == '14Q60p')
