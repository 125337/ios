// FUN_0220f304 @ 0220f304

void FUN_0220f304(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int local_1c;
  int local_4;
  
  local_4 = 0;
  if (0xfc < param_3) {
    uVar1 = (param_3 + 3 >> 8) + 1;
    local_1c = 1;
    if ((0xff < uVar1) && (local_1c = 2, 0xffff < uVar1)) {
      local_1c = 4;
    }
    local_4 = local_1c;
  }
  if (param_2 < 0xfd) {
    if (local_4 != 0) {
      if (local_4 == 1) {
        param_1[1] = '\0';
      }
      else if (local_4 == 2) {
        param_1[1] = '\0';
        param_1[2] = '\0';
      }
      else {
        if (local_4 != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x220f400);
          (*pcVar3)();
        }
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
      }
    }
    if (param_2 != 0) {
      *param_1 = (char)param_2 + '\x03';
    }
  }
  else {
    iVar2 = (param_2 - 0xfd >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfd);
    if (local_4 != 0) {
      if (local_4 == 1) {
        param_1[1] = (char)iVar2;
      }
      else if (local_4 == 2) {
        *(short *)(param_1 + 1) = (short)iVar2;
      }
      else {
        if (local_4 != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x220f4f4);
          (*pcVar3)();
        }
        *(int *)(param_1 + 1) = iVar2;
      }
    }
  }
  return;
}

