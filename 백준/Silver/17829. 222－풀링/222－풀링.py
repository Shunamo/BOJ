def pooling(arr, n):
    new_len = int(n//2)
    final_list = [[] for _ in range(new_len)] 
    if n == 1:
        return arr[0][0]
    else:
        for i in range(0, n, 2):
            for j in range(0, n, 2):
                mini_list = [ arr[i][j], arr[i][j+1], arr[i+1][j], arr[i+1][j+1] ]
                mini_list.sort()
                final_list[i//2].append(mini_list[2])
        return pooling(final_list, new_len)



n = int(input())
arr = []
for _ in range(n):
    arr.append(list(map(int, input().split())))

print(pooling(arr, n))