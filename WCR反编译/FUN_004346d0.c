// FUN_004346d0 @ 004346d0

byte FUN_004346d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  (*DAT_028ca8b0)(param_1,param_2);
  local_11 = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    FUN_00436d1c();
    if (((uVar1 & 1) != 0) && (FUN_0043729c(), (param_1 & 1) != 0)) {
      return 1;
    }
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

