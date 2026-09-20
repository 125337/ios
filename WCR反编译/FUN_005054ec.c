// FUN_005054ec @ 005054ec

byte FUN_005054ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_005055f8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cafa8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

