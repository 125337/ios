// FUN_014fe2e4 @ 014fe2e4

bool FUN_014fe2e4(ulong param_1)

{
  bool local_1;
  
  if ((((param_1 == 2000) || (param_1 == 0x7d1)) || (param_1 == 0x7db)) || (param_1 == 0x7d4)) {
    local_1 = true;
  }
  else {
    local_1 = (param_1 & 0xfffffffffffffffe) == 0x7d2;
  }
  return local_1;
}

