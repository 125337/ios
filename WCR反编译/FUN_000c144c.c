// FUN_000c144c @ 000c144c

byte FUN_000c144c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_000c151c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c81a8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

