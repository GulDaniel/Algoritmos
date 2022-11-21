'''Binary Search em python'''
def binarysearch(v, l, r, x):
    if l <= r:
        m = l + (r-l) // 2
        if v[m] == x:
            return m
        elif v[m] > x:
            return binarysearch(v, l, m-1, x)
        else:
            return binarysearch(v, m+1, r, x)
    else:
        return -1
