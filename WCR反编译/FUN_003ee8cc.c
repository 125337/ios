// FUN_003ee8cc @ 003ee8cc

uint FUN_003ee8cc(ushort param_1)

{
  ulong uVar1;
  undefined4 local_18;
  
  uVar1 = (ulong)param_1;
  FUN_003ef9b8();
  local_18 = 1;
  if ((uVar1 & 1) == 0) {
    local_18 = (uint)param_1;
    FUN_003efa74();
  }
  return local_18 & 1;
}

