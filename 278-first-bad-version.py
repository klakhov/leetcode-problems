def is_bad(n):
    return n >= 4


def fun(n):
    left = 1
    right = n
    last_bad_v = right
    while left <= right:
        mid = left + (right - left) // 2
        if is_bad(mid):
            last_bad_v = mid
            right = mid - 1
        else:
            left = mid + 1
    return last_bad_v


print(fun(10))