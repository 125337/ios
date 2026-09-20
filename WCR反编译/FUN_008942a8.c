// FUN_008942a8 @ 008942a8

byte FUN_008942a8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0089ccc0();
  if (((uVar1 & 1) == 0) && (FUN_008a20bc(), (uVar1 & 1) == 0)) {
    (*DAT_028cdaa0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

