
int1, int2 = input().split(" ")
int1 = int(int1)
int2 = int(int2)
def Sum(int1, int2):
    return int1 + int2

def  Mul(int1, int2):
     return int1 * int2

def Aver(int1, int2):
    return (int1 + int2)/2

print("Sum: " + str(Sum(int1, int2)), end="\n")
print("Multiplication: " + str(Mul(int1, int2)), end="\n")
print("Average: " + str(Aver(int1, int2)), end="\n")
