// FUN_00341b9c @ 00341b9c

uint FUN_00341b9c(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_0033a150();
  local_14 = 0;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    FUN_0033e5dc();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

