// FUN_000e45bc @ 000e45bc

byte FUN_000e45bc(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_48;
  undefined4 local_3c;
  long local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  if (param_2 == 0) {
    local_21 = true;
    local_3c = 1;
    goto LAB_000e4a10;
  }
  uVar6 = local_30;
  FUN_000e11f0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = &cf_m_uiMessageType;
  local_48 = uVar6;
  _NSSelectorFromString();
  FUN_000d8bac(uVar6,pcVar7);
  uVar8 = local_48;
  pcVar7 = &cf_m_uiAppMsgInnerType;
  local_60 = uVar6;
  _NSSelectorFromString();
  FUN_000d8bac(uVar8,pcVar7);
  uVar6 = local_48;
  local_68 = uVar8;
  if ((local_60 == 0x31) && (uVar8 == 0)) {
    pcVar7 = &cf_m_nsContent;
    _NSSelectorFromString();
    FUN_000d8fe0(uVar6,pcVar7);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar6;
    FUN_000da9a8();
    uVar8 = 0;
    if (uVar6 != 0x7fffffffffffffff) {
      uVar8 = uVar6;
      local_68 = uVar6;
    }
    _objc_storeStrong(uVar8,&local_70,0);
  }
  bVar2 = local_60 == 1;
  bVar3 = local_60 == 3;
  uVar8 = local_48;
  FUN_000dee00();
  bVar4 = local_60 == 0x2b;
  bVar5 = local_60 == 0x3e;
  uVar6 = local_48;
  FUN_000da7f8();
  if (local_38 == 0) {
LAB_000e49d8:
    local_21 = true;
  }
  else {
    local_21 = bVar2;
    if ((local_38 != 1) && (local_21 = bVar3, local_38 != 2)) {
      if (local_38 == 3) {
        local_21 = (bool)((byte)uVar8 & 1);
      }
      else {
        local_21 = bVar4 || bVar5;
        if (local_38 != 4) {
          if (local_38 == 5) {
            local_21 = (bool)((byte)uVar6 & 1);
          }
          else {
            local_21 = local_60 == 0x22;
            if (local_38 != 6) {
              if (local_38 != 7) goto LAB_000e49d8;
              bVar1 = true;
              if ((((!bVar2) && (bVar1 = true, !bVar3)) && (bVar1 = true, (uVar8 & 1) == 0)) &&
                 ((bVar1 = true, !bVar4 && !bVar5 && (bVar1 = true, (uVar6 & 1) == 0)))) {
                bVar1 = local_60 == 0x22;
              }
              local_21 = (bool)(bVar1 ^ 1);
            }
          }
        }
      }
    }
  }
  local_3c = 1;
  _objc_storeStrong(&local_48,0);
LAB_000e4a10:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

