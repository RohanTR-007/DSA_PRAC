# def solve(s):
#     mp = {}
#     i = 0
#     while i < len(s):
#         if 'a' <= s[i] <= 'z':
#             t = ""
#             j = i + 1
#             while j < len(s):
#                 if '0' <= s[j] <= '9':
#                     t += s[j]
#                     j += 1
#                 else:
#                     break
#             if s[i] not in mp:
#                 mp[s[i]] = int(t)
#             else:
#                 mp[s[i]] += int(t)
#             i = j
#         else:
#             i += 1

#     res = ""
#     for key, value in mp.items():
#         res += key
#         res += str(value)
#     return res


# # Example usage:
# input_string = ""
# result = solve(input_string)
# print(result)  # Output: "a12b3c45d6"


def sol(n, arr):
    rec, has = 1, 1
    while n > 0:
        rec = arr[has - 1]
        has = rec
        n -= 1
    return rec


if __name__ == "__main__":
    # You can uncomment the following lines for demonstration purposes:
    # s = "a22222"
    # print(solve(s))

    arr = [2, 4, 1, 5, 3]
    print(sol(6, arr))
