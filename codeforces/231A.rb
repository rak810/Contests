n = gets.to_i
a =[]
j = 0

for i in 1..n do
	a = gets.split.map(&:to_i)
	if a.count(1) > 1
		j = j+1
	end
end

puts j