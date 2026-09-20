// FUN_0079b440 @ 0079b440

uint FUN_0079b440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 ulong param_9)

{
  uint uVar1;
  undefined4 local_54;
  
  FUN_00798f28(param_1,param_5);
  local_54 = 0;
  if ((param_9 & 1) != 0) {
    FUN_00798f28(param_2,param_6);
    local_54 = 0;
    if ((param_9 & 1) != 0) {
      FUN_00798f28(param_3,param_7);
      local_54 = 0;
      uVar1 = (uint)param_9;
      if ((param_9 & 1) != 0) {
        FUN_00798f28(param_4,param_8);
        local_54 = uVar1;
      }
    }
  }
  return local_54 & 1;
}

