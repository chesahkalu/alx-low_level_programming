#!/usr/bin/python3
"""
This module contains a function that returns the perimeter of the island
described in grid.
"""


def island_perimeter(grid):
    """
    This function returns the perimeter of the island described in grid.
    """
    border = 0
    rows = len(grid)
    for y in range(0, rows):
        sq = len(grid[y])
        for x in range(0, sq):
            if grid[y][x] == 1:
                if y == 0 or (y > 0 and grid[y - 1][x] != 1):
                    border += 1
                if y == rows - 1 or (y < rows - 1 and grid[y + 1][x] != 1):
                    border += 1
                if x == 0 or (x > 0 and grid[y][x - 1] != 1):
                    border += 1
                if x == sq - 1 or (x < sq - 1 and grid[y][x + 1] != 1):
                    border += 1
    return border
