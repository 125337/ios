// FUN_0064d8b4 @ 0064d8b4

uint FUN_0064d8b4(long param_1)

{
  undefined4 local_1c;
  
  if (param_1 + -1 == 0) {
    FUN_00650518();
    local_1c = (uint)param_1;
  }
  else {
    FUN_00650534(param_1 + -1);
    local_1c = (uint)param_1;
  }
  return local_1c & 1;
}

