#!/usr/bin/python3
"""defines that returns the perimeter of the island """


def island_parameter(grid):
    """
    Args: grid list of integers for island
    Returns: periemter of island
    """
    width = ken(grid[0])
    height = len(grid)
    size = 0
    edges = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x -1][y] == 1):
                    edges += 1
    return size * 4- edges * 2

