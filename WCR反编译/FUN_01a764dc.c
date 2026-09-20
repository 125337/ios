// FUN_01a764dc @ 01a764dc

byte FUN_01a764dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_01a76870();
  if ((uVar1 & 1) == 0) {
    (*DAT_028e44a0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

