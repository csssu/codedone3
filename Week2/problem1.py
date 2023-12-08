def fits_pattern(num):
   num_str = str(num)
   len_num = len(num_str)
   
   if len_num % 2 == 0:
       half = len_num // 2
       first_half = int(num_str[:half])
       second_half = int(num_str[half:])
       
       sum_numbers = sum(range(first_half, second_half + 1))
       
       if sum_numbers == num:
           return "YES!"
       else:
           return "NO!"
   else:
       return "NO!"

num = int(input())
print(fits_pattern(num))