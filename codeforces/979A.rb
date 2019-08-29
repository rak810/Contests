n = gets.to_i

if (n+1) % 2 == 0 and n != 0 
    puts ((n+1)/2)
elsif (n+1) % 2 != 0 and n != 0
    puts (n+1)
elsif n == 0
    puts "0"
end   