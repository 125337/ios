// FUN_00079024 @ 00079024

uint FUN_00079024(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_0006fa28();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_0007b230();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

