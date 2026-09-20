// FUN_0093353c @ 0093353c

void FUN_0093353c(int *param_1,char *param_2,ulong param_3)

{
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined1 *local_68;
  int *local_60;
  int *local_58;
  uint local_4c;
  int *local_48;
  int *local_40;
  ulong local_38;
  char *local_30;
  int *local_28;
  
  local_68 = (undefined1 *)&local_f0;
  if ((((param_2 != (char *)0x0) && (0x24 < param_3)) && (*param_2 = '\0', param_1 != (int *)0x0))
     && ((*param_1 == -0x1120531 || (*param_1 == -0x30051202)))) {
    local_48 = param_1 + 8;
    for (local_4c = 0; local_4c < (uint)param_1[4]; local_4c = local_4c + 1) {
      local_58 = local_48;
      if (*local_48 == 0x1b) {
        local_60 = local_48;
        local_f0 = (ulong)*(byte *)(local_48 + 2);
        local_e8 = (ulong)*(byte *)((long)local_48 + 9);
        local_e0 = (ulong)*(byte *)((long)local_48 + 10);
        local_d8 = (ulong)*(byte *)((long)local_48 + 0xb);
        local_d0 = (ulong)*(byte *)(local_48 + 3);
        local_c8 = (ulong)*(byte *)((long)local_48 + 0xd);
        local_c0 = (ulong)*(byte *)((long)local_48 + 0xe);
        local_b8 = (ulong)*(byte *)((long)local_48 + 0xf);
        local_b0 = (ulong)*(byte *)(local_48 + 4);
        local_a8 = (ulong)*(byte *)((long)local_48 + 0x11);
        local_a0 = (ulong)*(byte *)((long)local_48 + 0x12);
        local_98 = (ulong)*(byte *)((long)local_48 + 0x13);
        local_90 = (ulong)*(byte *)(local_48 + 5);
        local_88 = (ulong)*(byte *)((long)local_48 + 0x15);
        local_80 = (ulong)*(byte *)((long)local_48 + 0x16);
        local_78 = (ulong)*(byte *)((long)local_48 + 0x17);
        local_40 = param_1;
        local_38 = param_3;
        local_30 = param_2;
        local_28 = param_1;
        _snprintf(param_2,param_3,
                  "%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X");
        return;
      }
      if (local_48[1] == 0) {
        return;
      }
      local_48 = (int *)((long)local_48 + (ulong)(uint)local_48[1]);
    }
  }
  return;
}

