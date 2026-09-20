// FUN_001e6e3c @ 001e6e3c

uint FUN_001e6e3c(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_001e7ff4();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_001e8090();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

