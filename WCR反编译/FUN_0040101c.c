// FUN_0040101c @ 0040101c

undefined1 FUN_0040101c(ulong param_1)

{
  undefined1 local_11;
  
  FUN_003fe19c();
  if ((param_1 & 1) == 0) {
    FUN_00400c3c();
    if ((param_1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      FUN_004010e0();
      if ((param_1 & 1) == 0) {
        FUN_00401380();
        if ((param_1 & 1) != 0) {
          FUN_00400d94();
        }
        local_11 = 1;
      }
      else {
        FUN_00401380();
        if ((param_1 & 1) == 0) {
          FUN_00400fd8();
        }
        local_11 = 0;
      }
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

