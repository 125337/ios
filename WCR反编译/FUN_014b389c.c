// FUN_014b389c @ 014b389c

long FUN_014b389c(long param_1)

{
  long local_8;
  
  if ((param_1 < 1) || (7 < param_1)) {
    local_8 = 1;
  }
  else {
    local_8 = (param_1 + 5) % 7 + 1;
  }
  return local_8;
}

