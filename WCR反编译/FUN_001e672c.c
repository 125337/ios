// FUN_001e672c @ 001e672c

uint FUN_001e672c(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_001cf8b0();
  local_14 = 0;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    FUN_001e64c0();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

