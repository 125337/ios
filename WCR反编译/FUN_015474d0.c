// FUN_015474d0 @ 015474d0

undefined8 FUN_015474d0(byte param_1,long param_2)

{
  undefined8 local_8;
  
  if (param_2 == 0) {
    local_8 = DAT_02323d40;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02324058;
    }
  }
  else if (param_2 == 1) {
    local_8 = 0x3fc6666666666666;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02332dc8;
    }
  }
  else if (param_2 == 2) {
    local_8 = DAT_02323da8;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02323d40;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

