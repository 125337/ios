// FUN_008a1ebc @ 008a1ebc

uint FUN_008a1ebc(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_008a1f00();
  local_14 = 0;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    FUN_0089045c();
    local_14 = uVar1 ^ 1;
  }
  return local_14 & 1;
}

