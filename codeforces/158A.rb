#!/usr/bin/ruby

n, m = gets.split.map(&:to_i)
a = [] 
a = gets.split.map(&:to_i)
i = 0

for j in a do
	if j >= a[m-1] and j != 0
		i = i+1
	end
end

puts i