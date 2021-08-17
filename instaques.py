## Q1: Print duplicate characters from String?

# s = input("Enter the String: ")
# dict={}
# for a in s:
#     if a in dict:
#         dict[a]+=1
#     else:
#         dict[a]=1
# for b in dict:
#     if dict[b]>1:
#         print(b)
    

## Q2: Check if two strings are anagrams of each other?

# s1=input("Enter 1st string: ")
# s2 = input("Enter 2nd string: ")
# if sorted(s1)== sorted(s2):
#     print('Strings are anagrams')  
# else: 
#     print('Strings are not anagrams')
##### Below line is One line code of above lines of code :
# print('Strings are anagrams' if sorted(input("Enter 1st string: "))== sorted(input("Enter 2nd string: ")) else 'Strings are not anagrams')


## Q3: Print the non repeater from string?

# s = input("Enter the String: ")
# dict={}
# for a in s:
#     if a in dict:
#         dict[a]+=1
#     else:
#         dict[a]=1
# for b in dict:
#     if dict[b]==1:
#         print(b)



def reverse(s):
    if len(s)==0:
        return s
    else:
        return reverse(s[1:])+s[0]

s = 'abcd'
reverse(s)



