#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """define function perimeter of island"""

    count0 = 0

    for x in range(1, (len(grid)) - 1):
        for y in range(1, (len(grid)) - 1):
            if grid[x][y]:
                up = grid[x][y - 1] == 0
                down = grid[x][y + 1] == 0
                left = grid[x - 1][y] == 0
                rigth = grid[x + 1][y] == 0

                count0 += up+down+left+rigth
    return count0

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
