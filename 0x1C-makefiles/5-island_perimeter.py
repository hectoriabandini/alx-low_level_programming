#!/usr/bin/python3
""" island perimeter measuring function defined."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid reps water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for h in range(height):
        for j in range(width):
            if grid[h][j] == 1:
                size += 1
                if (j > 0 and grid[h][j - 1] == 1):
                    edges += 1
                if (h > 0 and grid[h - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
