
h,m =map(int,input().split())

if h=0:
    h=23
    m=m+15
    print(h,m)
else:
    h=h-1
    m=m+15
    print(h,m)