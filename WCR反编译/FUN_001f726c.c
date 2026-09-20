// FUN_001f726c @ 001f726c

uint FUN_001f726c(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_001f7a94();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_001f79f8();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

