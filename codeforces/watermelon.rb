x = gets.to_i

y = x/2
z = x - y

if (x <= 100) and x > 0
    if ((y % 2 == 0) and (z % 2 == 0)) or (((x-2) % 2 == 0) and (x != 2))
        puts "yes"
    else
        puts "no"
    end
else
    puts "not applicable"
end