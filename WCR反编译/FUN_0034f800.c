// FUN_0034f800 @ 0034f800

uint FUN_0034f800(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_0034e7a8();
  local_14 = 0;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    FUN_003506a0();
    local_14 = uVar1 ^ 1;
  }
  return local_14 & 1;
}

