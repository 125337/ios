// FUN_00551df8 @ 00551df8

uint FUN_00551df8(void)

{
  ulong uVar1;
  undefined4 local_14;
  
  uVar1 = 0;
  FUN_00552120();
  local_14 = 1;
  if ((uVar1 & 1) == 0) {
    local_14 = 1;
    FUN_00552120();
  }
  return local_14 & 1;
}

