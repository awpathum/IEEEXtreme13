x = input().split()
print(x)
N = int (x[0])
A = int (x[1])
B = int (x[2])

nums = list()
for i in range (A,(B + 1)):
    nums.append(i)
    print(nums)
    print(i)

for i in range(nums[i]):
    print(i)

# for i in range(nums[i],max(nums)):

#     for j in range(nums[i],nums[j]):
#         if((nums[i] + nums[j]) > N):
#             print('Break')
#             break;
#         else:
#             total = 0
#             while (total < N):
#                 total = i + j
#             print(total)
