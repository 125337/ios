// FUN_008f2e74 @ 008f2e74

uint FUN_008f2e74(ulong param_1)

{
  uint uVar1;
  uint local_14;
  
  local_14 = (uint)param_1;
  FUN_008f2ed8();
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    if (59999 < local_14) {
      local_14 = 60000;
    }
  }
  else {
    FUN_008f4084();
    local_14 = uVar1;
  }
  return local_14;
}

