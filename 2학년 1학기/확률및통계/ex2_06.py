def combi(N, k):
  N_fac = fac(N)
  k_fac = fac(k)
  Nk_fac = fac(N-k)
  return (N_fac)/(k_fac * Nk_fac)

def fac(n):
  result = 1
  for i in range(1, n+1):
    result *= i
  return result


print("Example 2.6")
a = combi(25,5)
b = combi(10, 2)*combi(15, 3) + combi(10, 3)*combi(15, 2) + combi(10, 4)*combi(15, 1) + combi(10, 5)
print(a)
print(b)
print(b/a)