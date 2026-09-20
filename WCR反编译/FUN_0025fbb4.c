// FUN_0025fbb4 @ 0025fbb4

byte FUN_0025fbb4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_00264438();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9450)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

