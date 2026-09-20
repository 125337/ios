// FUN_004013a4 @ 004013a4

byte FUN_004013a4(ulong param_1)

{
  byte local_11;
  
  FUN_003fe19c();
  if ((param_1 & 1) == 0) {
    FUN_00400c3c();
    if ((param_1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      local_11 = DAT_028ca690._1_1_ & 1;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

