-- fv = future value
-- pv = present value
-- i = effective interest rate per peroid
-- n = number of periods

getFutureValue :: Double -> Double -> Int -> Double
getFutureValue pv i n = pv * (1 + i) ^ n

getPresentValue :: Double -> Double -> Int -> Double
getPresentValue fv i n = fv / (1 + i) ^ n

getInterestRate :: Double -> Double -> Double -> Double
getInterestRate fv pv n = ((fv / pv) ** (1 / n)) - 1

getNumberOfPeroids :: Double -> Double -> Double -> Double
getNumberOfPeroids fv pv i = (log fv - log pv) / log(1 + i)