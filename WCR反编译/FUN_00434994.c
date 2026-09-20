// FUN_00434994 @ 00434994

byte FUN_00434994(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_00437b9c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca8c8)(param_1,param_2,param_3);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

