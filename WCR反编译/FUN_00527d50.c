// FUN_00527d50 @ 00527d50

uint FUN_00527d50(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_0052b2cc();
  local_14 = 1;
  if ((param_1 & 1) == 0) {
    FUN_00520b10();
    local_14 = 1;
    uVar1 = (uint)param_1;
    if ((param_1 & 1) == 0) {
      FUN_00529c74();
      local_14 = uVar1;
    }
  }
  return local_14 & 1;
}

