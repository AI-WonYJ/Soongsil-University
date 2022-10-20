password = "AAAaaa123!@#"
up, lo, nu = 0, 0, 0
for x in password:
  if x.isupper() == True:
    up += 1
  elif x.islower() == True:
    lo += 1
  elif x.isdigit() == True:
    nu += 1

print(up, lo, nu)