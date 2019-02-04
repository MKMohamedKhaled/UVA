tc = int(input())

for i in range(tc):
    w,h = map(int , input().split())
    print(int(int(w/3)*int(h/3)))

