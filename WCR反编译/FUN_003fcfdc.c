// FUN_003fcfdc @ 003fcfdc

byte FUN_003fcfdc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0040101c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca660)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

