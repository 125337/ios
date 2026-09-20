// FUN_00fcad38 @ 00fcad38

undefined1 FUN_00fcad38(ushort param_1)

{
  undefined1 local_1;
  
  if ((param_1 < 0x4e00) || (0x9fff < param_1)) {
    if ((param_1 < 0x3400) || (0x4dbf < param_1)) {
      if ((param_1 < 0xf900) || (0xfaff < param_1)) {
        if ((param_1 < 0x3000) || (0x303f < param_1)) {
          if ((param_1 < 0xff00) || (0xffef < param_1)) {
            local_1 = 0;
          }
          else {
            local_1 = 1;
          }
        }
        else {
          local_1 = 1;
        }
      }
      else {
        local_1 = 1;
      }
    }
    else {
      local_1 = 1;
    }
  }
  else {
    local_1 = 1;
  }
  return local_1;
}

