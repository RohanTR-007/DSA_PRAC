# def largest_sub_no(size,k,s):
#     index=-1
#     xor_val=0
#     max=xor_val
#     for i in range(1,size):
#         sub=s[i:size]
#         div=int(sub)
#         xor_val=(xor_val^int(s[i-1]))
#         if(div%k == 0):
#             # print("div :",div)
#             if(xor_val > max):
#                     max=xor_val
#                     index=i
#     if(index == -1):
#         return "-1"
#     return s[index:size]

# # 12 3
# # 123123123123


# # size,k=int(input()).split()
# # # k=int(input())
# # s=input()
# # print(largest_sub_no(size,k,s))
# # print(str(090998))
# str='00980'
# j=0
# k=len(str)
# while(str[j] == '0'):
#     str=str[j+1:k]
#     print(str)


x=int("098340928348238384230802907129701274774898482803333333333333334092408104444")
print(x)