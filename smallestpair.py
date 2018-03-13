"""

smallest_pair function finds smallest sum of pair B and C, so
B * C = A ("number" in fumnction)

"""
def smallest_pair(number):
    for div in range(int(number**.5)):
        pass
    div = int(number**.5)
    while div > 1:
        if number % div == 0:
            break
        else:
            div-=1
    print(f"{number} = {div} * {number//div}")
    return div + number // div

# Test on some numbers:
if __name__ == "__main__":
    smallest_pair(12)
    smallest_pair(456)
    smallest_pair(4567)
    smallest_pair(12345)
    smallest_pair(1234567891011)
