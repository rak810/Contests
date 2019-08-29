x = gets.to_i 

def check(j)
	if j.length <= 10
		puts j
	else
		puts j[0] + (j.length - 2).to_s + j[-1]
	end
end

for i in 1..x do
	y = gets.chomp
	check(y)
end