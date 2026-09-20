// FUN_008ae444 @ 008ae444

byte FUN_008ae444(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_008b8a0c();
  if (((uVar1 & 1) == 0) || (uVar1 = param_1, FUN_008b8b30(), (uVar1 & 1) == 0)) {
    (*DAT_028cded0)(param_1,param_2);
    FUN_008b8a0c();
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

