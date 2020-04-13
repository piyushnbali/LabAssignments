echo Enter your name   #Display message to take input
read name              #take input name from user
echo enter your phone no    #display phone no message
read phone                  # take phone no as input
echo Your_Address           # display message to take address
read address                 # read address from user

echo "$name $phone $address">>data.txt     #add data to file
exit 0
