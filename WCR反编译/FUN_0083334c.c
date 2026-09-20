// FUN_0083334c @ 0083334c

uint FUN_0083334c(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_0082d7bc();
  local_14 = 0;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    FUN_00821dcc();
    local_14 = uVar1 ^ 1;
  }
  return local_14 & 1;
}

