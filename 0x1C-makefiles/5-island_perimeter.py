#!/usr/bin/python3
"""
contains function that calculates island perimeter
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    grid: 2d list of integer - 1 land zone & 0 water zone"""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 and grid[i + 1][j] == 0\
                       and grid[i][j - 1] == 0 and grid[i][j + 1] == 0:
                        perimeter += 4
                        continue
                except IndexError:
                    pass
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
