// FUN_00436684 @ 00436684

byte FUN_00436684(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_00439dc8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca968)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

