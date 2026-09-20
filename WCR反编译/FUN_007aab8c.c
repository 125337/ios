// FUN_007aab8c @ 007aab8c

byte FUN_007aab8c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_007ab5f4();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccb98)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

