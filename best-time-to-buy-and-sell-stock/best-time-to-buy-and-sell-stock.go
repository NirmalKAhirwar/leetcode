func maxProfit(prices []int) int {
    profit := 0
	low := 10000
	high := 0

	for _, p := range prices {
		if p < low {
			low = p
			high = profit + low
		} else if p > high {
			high = p
			profit = high - low
		}
	}

	return profit
}