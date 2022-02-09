#!/usr/bin/python3
"""
Module Island Perimeter
"""

def island_perimeter(grid):
"""create a function thats returns the perimeter of the island descripted in grid"""
    i = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                elif row == 0 or grid[row - 1][col] == 0:
                    i += 1
                elif row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    i += 1
                elif col == 0 or grid[row][col - 1] == 0:
                    i += 1
                elif col == (len(grid[0] - 1) or grid[row][col + 1] == 0:
                    i += 1
    return i
