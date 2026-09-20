// FUN_008a89e4 @ 008a89e4

undefined4 FUN_008a89e4(long param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_4;
  
  if (param_1 < 1) {
    local_4 = 1;
  }
  else {
    local_20 = param_1 % 100;
    if (0x3b < local_20) {
      local_20 = 0x3b;
    }
    local_28 = (param_1 / 100) * 0x3c + local_20;
    if (0xffffffff < local_28) {
      local_28 = 0xffffffff;
    }
    local_4 = (undefined4)local_28;
  }
  return local_4;
}

