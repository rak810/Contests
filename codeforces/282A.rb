x = gets.to_i
i = 0

for j in 1..x do
	y = gets.chomp
	if y[1] == "+"
		i = i+1
	else
		i = i-1
	end
end
puts i
