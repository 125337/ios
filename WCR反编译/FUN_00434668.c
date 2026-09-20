// FUN_00434668 @ 00434668

byte FUN_00434668(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_00436d1c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca8a8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

