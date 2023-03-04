import math

total_ways = math.comb(11, 6)
ways_without_women = math.comb(7, 6)
ways_with_one_woman = math.comb(4, 1)*math.comb(7, 5)
ways_with_women = total_ways - ways_without_women - ways_with_one_woman

print(ways_with_women)