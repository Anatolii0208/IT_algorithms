def lbinsearch(l, r, check):
    while l < r:
        m = (l + r) // 2
        if check(m):
            r = m
        else:
            l = m - 1
    return l
