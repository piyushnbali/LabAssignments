echo Enter Name of Person you want to search  #enter name of person
read input                                    #read input
grep -w $input data.txt                      #dispaly specific line
exit 0
