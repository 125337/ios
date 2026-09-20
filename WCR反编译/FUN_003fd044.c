// FUN_003fd044 @ 003fd044

byte FUN_003fd044(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0040101c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca668)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

