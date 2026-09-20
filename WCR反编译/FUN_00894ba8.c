// FUN_00894ba8 @ 00894ba8

byte FUN_00894ba8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_2c;
  byte local_11;
  
  uVar1 = param_1;
  FUN_008a250c();
  if ((uVar1 & 1) == 0) {
    FUN_008a25a8();
    if ((uVar1 & 1) == 0) {
      (*DAT_028cdaf0)(param_1,param_2);
      local_2c = (byte)param_1;
    }
    else {
      local_2c = 1;
    }
    local_11 = local_2c & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

