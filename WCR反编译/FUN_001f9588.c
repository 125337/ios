// FUN_001f9588 @ 001f9588

uint FUN_001f9588(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_001f95dc();
  local_14 = 1;
  if ((param_1 & 1) == 0) {
    FUN_001f9678();
    local_14 = 1;
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      FUN_001fb590();
      local_14 = uVar1;
    }
  }
  return local_14 & 1;
}

