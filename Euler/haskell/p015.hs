{- 
 - Solution to Project Euler problem 15
 -}


-- This is a classic combinatorics problem. To get from the top left corner to the bottom right corner of an N*N grid,
-- it involves making exactly N moves right and N moves down in some order. Because each individual down or right move
-- is indistinguishable, there are exactly 2N choose N (binomial coefficient) ways of arranging these moves.
main = putStrLn (show ans)
ans = (binomial 40 20) :: Integer
binomial n k = div (product [(n - k + 1) .. n]) (product [1..k])
