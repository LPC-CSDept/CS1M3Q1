

with open("output.txt") as f:
    cnt = 0
    flag = 1
    name = f.readline().split()
    print(name[0])
    if name[0] != 'Morris':
        flag = 0
    name = f.readline().split()
    print(name[0])
    if name[0] != 'James':
        flag = 0
    name = f.readline().split()
    print(name[0])
    if name[0] != 'John':
        flag = 0
    print(flag)
