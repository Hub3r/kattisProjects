n = int(input())
if n <= 2 or n >= 30:
    print("incorrect size")
    exit
paper_sizes = input().split()

#reference values since each consecutive paper size has half the previous area
A2_Width = float(2 ** (-5/4))
A2_Length = float(2 ** (-3/4))
A2_Area = A2_Width * A2_Length

An_Width = A2_Width
An_Length = A2_Length

#A1 Paper Area
A1_Area = 2 * A2_Area
area_needed = A1_Area
tape_needed = 0

#begin calculations to find minimum amount of paper
for x in paper_sizes:
    x = int(x)
    for y in range( x ):
        area_needed -= (An_Length * An_Width)
        if area_needed <= 0:
            if y >= 3:
                tape_needed += 2 * An_Width
            break
        if y % 2 == 0:
            tape_needed += An_Length
    An_Temp = An_Length
    An_Length = An_Width
    An_Width = An_Temp / 2

if area_needed >= 0:
    print("impossible")
    exit()

#reset a size divisor and total area
print(tape_needed)