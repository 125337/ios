// FUN_0014f650 @ 0014f650

uint FUN_0014f650(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  FUN_00150878();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_00150088();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

