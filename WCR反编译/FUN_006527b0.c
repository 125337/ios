// FUN_006527b0 @ 006527b0

uint FUN_006527b0(long param_1)

{
  undefined4 local_1c;
  
  if (param_1 + -1 == 0) {
    FUN_00656ed8();
    local_1c = (uint)param_1;
  }
  else {
    FUN_00656ef4(param_1 + -1);
    local_1c = (uint)param_1;
  }
  return local_1c & 1;
}

