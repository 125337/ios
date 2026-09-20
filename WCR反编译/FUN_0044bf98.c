// FUN_0044bf98 @ 0044bf98

byte FUN_0044bf98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0045e9e0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028caaa8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

