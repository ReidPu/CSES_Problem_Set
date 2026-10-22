## The Core Task

You are given a maximum chessboard size, $n$. Your goal is to calculate the number of ways to place two identical knights on a $k \times k$ chessboard such that they do not attack each other.

The catch is that you don't just do this for $n$; you have to calculate and print the answer for every board size starting from $1 \times 1$ all the way up to $n \times n$.Line 1 output corresponds to a $1 \times 1$ board.Line 2 output corresponds to a $2 \times 2$ board....and so on up to $n \times n$.

## The Mathematical Breakdown

Given the constraint $n \le 10000$ and a time limit of 1.00s, simulating the knight placements using nested loops will result in a Time Limit Exceeded (TLE). To solve this efficiently in an algorithmic context, it's best to use combinatorics to find an $O(1)$ formula for each $k$.

Instead of trying to count all the safe positions directly, it is much easier to count Total Possible Placements and subtract the Attacking Placements.

1. Total Possible Placements
   
   A $k \times k$ board has $k^2$ total squares. We want to choose any 2 squares to place our knights. Because the knights are identical, the order in which we place them doesn't matter. The total number of combinations is:$$ \binom{k^2}{2} = \frac{k^2(k^2 - 1)}{2} $$

2. Attacking Placements
   
   Two knights attack each other if they are placed at the opposite corners of a $2 \times 3$ or a $3 \times 2$ rectangle.
   
 - $2 \times 3$ rectangles: 
  
  On a $k \times k$ board, you can fit $(k-1)$ rectangles vertically and $(k-2)$ horizontally. So, there are $(k-1)(k-2)$ such blocks.

 - $3 \times 2$ rectangles: 
  Similarly, you can fit $(k-2)$ vertically and $(k-1)$ horizontally, giving another $(k-2)(k-1)$ blocks.
  
 - In every single one of these $2 \times 3$ and $3 \times 2$ rectangles, there are exactly 2 ways the knights can be placed to attack each other (the two diagonals).
 
 - Therefore, the total number of attacking configurations is: $$2 \cdot (k-1)(k-2) + 2 \cdot (k-2)(k-1) = 4(k-1)(k-2)$$

3. The Final FormulaSubtract the attacking positions from the total positions to get the valid, non-attacking placements:
   
   $$ \text{Valid Ways} = \frac{k^2(k^2 - 1)}{2} - 4(k-1)(k-2) $$
   