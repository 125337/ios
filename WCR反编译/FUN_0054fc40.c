// FUN_0054fc40 @ 0054fc40

uint FUN_0054fc40(uint param_1,uint param_2)

{
  u_int32_t uVar1;
  undefined4 local_14;
  
  local_14 = param_1;
  if (param_1 < param_2) {
    uVar1 = _arc4random_uniform((param_2 - param_1) + 1);
    local_14 = param_1 + uVar1;
  }
  return local_14;
}

