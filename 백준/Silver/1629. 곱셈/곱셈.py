A, B, C = map(int,input().split())
addMul = [1]

while(B > 1):
    if B%2 == 1:
        addMul[0] = addMul[0] * A
        
    B = B//2
    A = A**2 %C 
A = addMul[0] * A %C

print(A%C)