// FUN_006366c4 @ 006366c4

uint FUN_006366c4(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_00636704();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_0063a16c();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

