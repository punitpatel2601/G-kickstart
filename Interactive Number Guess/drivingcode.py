import sys

T = int(input())
for t in range(T):
    a, b = (int(s) for s in input().split())
    n = int(input())

    while True:
        mid = (a+b+1)//2
        print (mid)
        sys.stdout.flush()
        s = input()
        if s == 'CORRECT':
            break
        elif s == 'TOO_BIG':
            b = mid - 1
        else:
            a = mid
