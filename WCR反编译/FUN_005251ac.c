// FUN_005251ac @ 005251ac

byte FUN_005251ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0052c1c8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cb158)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

