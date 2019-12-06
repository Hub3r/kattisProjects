import sys

king = 1
queen = 1
rooks = 2
bishops = 2
knights = 2
pawns = 8
kingInput = int(input())
queenInput = int(input())
rooksInput = int(input())
bishopsInput = int(input())
knightsInput = int(input())
pawnsInput = int(input())
print(king - kingInput,queen - queenInput,rooks - rooksInput,bishops - bishopsInput,knights - knightsInput,pawns - pawnsInput)
sys.exit(0)
