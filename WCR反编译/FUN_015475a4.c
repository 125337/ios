// FUN_015475a4 @ 015475a4

undefined8 FUN_015475a4(byte param_1,long param_2)

{
  undefined8 local_8;
  
  if (param_2 == 0) {
    local_8 = DAT_02323da8;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02332dd0;
    }
  }
  else if (param_2 == 1) {
    local_8 = DAT_02332dd8;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02332de0;
    }
  }
  else if (param_2 == 2) {
    local_8 = DAT_02323d58;
    if ((param_1 & 1) == 0) {
      local_8 = DAT_02323c90;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

