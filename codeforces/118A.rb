x = gets.chomp
y = x.downcase
a = y.split('')

for i in a do
	if i != "a" and i != "e" and i != "i" and i != "o" and i != "u" and i != "y"
		print ".#{i}"
	end
end