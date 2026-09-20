// FUN_00775b44 @ 00775b44

long FUN_00775b44(long param_1,long param_2)

{
  u_int32_t uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_00775ae8();
  FUN_00775ae8();
  local_28 = param_2;
  local_20 = param_1;
  if (param_2 < param_1) {
    local_28 = param_1;
    local_20 = param_2;
  }
  if (local_20 == local_28) {
    local_18 = local_20;
  }
  else {
    uVar1 = _arc4random_uniform(((int)local_28 - (int)local_20) + 1);
    local_18 = local_20 + (ulong)uVar1;
  }
  return local_18;
}

