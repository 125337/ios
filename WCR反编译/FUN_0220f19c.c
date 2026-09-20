// FUN_0220f19c @ 0220f19c

int FUN_0220f19c(byte *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_28;
  uint local_20;
  int local_14;
  
  if (param_2 == 0) {
    local_28 = -1;
  }
  else {
    if (0xfc < param_2) {
      uVar1 = (param_2 + 3 >> 8) + 1;
      local_14 = 1;
      if ((0xff < uVar1) && (local_14 = 2, 0xffff < uVar1)) {
        local_14 = 4;
      }
      if (local_14 == 0) {
        local_20 = 0;
      }
      else if (local_14 == 1) {
        local_20 = (uint)param_1[1];
      }
      else if (local_14 == 2) {
        local_20 = (uint)*(ushort *)(param_1 + 1);
      }
      else {
        if (local_14 != 4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x220f288);
          (*pcVar2)();
        }
        local_20 = *(uint *)(param_1 + 1);
      }
      if (local_20 != 0) {
        local_28 = ((uint)*param_1 | (local_20 - 1) * 0x100) + 0xfc;
        goto LAB_0220f2f4;
      }
    }
    local_28 = *param_1 - 4;
    if (local_28 < 0) {
      local_28 = -1;
    }
  }
LAB_0220f2f4:
  return local_28 + 1;
}

