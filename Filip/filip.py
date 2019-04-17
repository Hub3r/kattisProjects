x = int(input())
y = int(input())
reverseX = 0
while(x > 0):
    remainderX = x % 10
    reverseX = (reverseX * 10) + remainderX
    x = x // 10
reverseY = 0
while(y > 0):
    remainderY = y % 10
    reverseY = (reverseY * 10) + remainderY
    y = y // 10
if reverseY > reverseX:
    print(reverseY)
else:
    print(reverseX)
