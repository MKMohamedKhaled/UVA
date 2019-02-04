tc = int(input())
for i in range(tc):
    num = int(input())
    #for j in range(0,num):
    #l = [int(x) for x in input().split()]
    l = list(map(int , input().split()))
    l.sort()
    print(int((l[num-1] - l[0])*2))
