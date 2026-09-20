// FUN_0150d184 @ 0150d184

undefined1 FUN_0150d184(byte *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined7 uStack_bf;
  ulong local_a0;
  undefined1 auStack_90 [24];
  long local_78;
  undefined7 uStack_6f;
  long local_50;
  ulong local_48;
  long local_40;
  undefined8 *local_38;
  ulong local_30;
  ulong local_28;
  byte *local_20;
  undefined1 local_11;
  
  if ((((param_2 < 2) || (0x18 < param_3)) || (*param_1 == 0)) || ((*param_1 & 0x1f) == 0x1f)) {
    local_11 = 0;
  }
  else {
    local_40 = 2;
    local_48 = (ulong)param_1[1];
    if (local_48 == 0x80) {
      if ((*param_1 >> 5 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_48 = 0x80;
        local_38 = param_4;
        local_30 = param_3;
        local_28 = param_2;
        local_20 = param_1;
        for (local_50 = 2; 1 < local_28 - local_50; local_50 = local_50 + local_78) {
          if ((local_20[local_50] == 0) && (local_20[local_50 + 1] == 0)) {
            bVar1 = *local_20;
            local_38[1] = local_40;
            *local_38 = CONCAT71(uStack_6f,bVar1);
            local_38[3] = local_50 + 2;
            local_38[2] = local_50 - local_40;
            return 1;
          }
          pbVar2 = local_20 + local_50;
          FUN_0150d184(pbVar2,local_28 - local_50,local_30 + 1,auStack_90);
          if (((ulong)pbVar2 & 1) == 0) {
            return 0;
          }
        }
        local_11 = 0;
      }
    }
    else {
      if ((char)param_1[1] < '\0') {
        uVar3 = local_48 & 0x7f;
        if ((8 < uVar3) || (param_2 - 2 < uVar3)) {
          return 0;
        }
        local_48 = 0;
        for (local_a0 = 0; local_a0 < uVar3; local_a0 = local_a0 + 1) {
          if (0xffffffffffffff < local_48) {
            return 0;
          }
          local_48 = (ulong)param_1[local_40] | local_48 << 8;
          local_40 = local_40 + 1;
        }
      }
      if (param_2 - local_40 < local_48) {
        local_11 = 0;
      }
      else {
        bVar1 = *param_1;
        param_4[1] = local_40;
        *param_4 = CONCAT71(uStack_bf,bVar1);
        param_4[3] = local_40 + local_48;
        param_4[2] = local_48;
        local_11 = 1;
      }
    }
  }
  return local_11;
}

