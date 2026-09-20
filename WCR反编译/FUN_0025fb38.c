// FUN_0025fb38 @ 0025fb38

byte FUN_0025fb38(ulong param_1,undefined8 param_2)

{
  byte local_11;
  
  (*DAT_028c9448)(param_1,param_2);
  local_11 = (byte)param_1;
  FUN_00264438();
  if ((param_1 & 1) == 0) {
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

