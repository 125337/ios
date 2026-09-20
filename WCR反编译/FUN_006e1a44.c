// FUN_006e1a44 @ 006e1a44

bool FUN_006e1a44(ulong param_1)

{
  bool local_11;
  
  if ((param_1 == 0) || ((param_1 & 7) != 0)) {
    local_11 = false;
  }
  else if (param_1 < 0x100000000) {
    local_11 = false;
  }
  else {
    _malloc_size(param_1 - 0x100000000);
    local_11 = param_1 != 0;
  }
  return local_11;
}

