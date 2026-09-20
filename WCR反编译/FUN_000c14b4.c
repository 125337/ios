// FUN_000c14b4 @ 000c14b4

byte FUN_000c14b4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_000c1888();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c81b0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

