// FUN_01139ef0 @ 01139ef0

void FUN_01139ef0(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_b8;
  byte local_a8;
  bool local_48;
  byte local_42;
  byte local_41;
  long local_20;
  ulong local_18;
  
  plVar6 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar6,param_1);
  if (param_4 == (undefined8 *)0x0) {
    FUN_00a4ec00();
    plVar7 = plVar6;
    FUN_01138c10();
    uVar8 = 1;
    FUN_0113badc(1,0,param_3,0,plVar6,plVar7,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar8;
  }
  else {
    lVar9 = local_20;
    FUN_0113a5d8();
    local_42 = 0;
    bVar1 = false;
    if (((param_2 & 1) != 0) && (bVar1 = false, *(char *)((long)param_4 + 0x1d) != '\0')) {
      bVar1 = *(char *)((long)param_4 + 0x19) == '\0';
    }
    bVar2 = false;
    if (((param_2 & 1) != 0) &&
       ((*(char *)((long)param_4 + 0x1c) != '\0' ||
        (bVar2 = false, *(char *)((long)param_4 + 0x1d) != '\0')))) {
      bVar2 = *(char *)((long)param_4 + 0x19) == '\0';
    }
    bVar3 = false;
    if (((param_2 & 1) != 0) && (bVar3 = false, *(char *)((long)param_4 + 0x1a) != '\0')) {
      bVar3 = *(char *)((long)param_4 + 0x1f) != '\0';
    }
    bVar4 = false;
    if ((((param_2 & 1) != 0) && (bVar4 = false, *(char *)((long)param_4 + 0x1a) != '\0')) &&
       (bVar4 = true, *(char *)((long)param_4 + 0x1e) == '\0')) {
      bVar4 = *(char *)((long)param_4 + 0x1f) != '\0';
    }
    bVar5 = false;
    if ((param_2 & 1) != 0) {
      bVar5 = *(char *)(param_4 + 4) != '\0';
    }
    if (((lVar9 == 1) || (*(char *)((long)param_4 + 0x1b) != '\0')) ||
       (*(char *)(param_4 + 3) == '\x01')) {
      local_41 = 2;
    }
    else if ((param_2 & 1) == 0) {
      local_41 = 3;
      local_42 = 8;
    }
    else if (param_4[2] == 0) {
      local_41 = 1;
    }
    else if (lVar9 == 2) {
      local_41 = 3;
      local_42 = 8;
    }
    else {
      local_48 = false;
      if ((lVar9 == 0) || (lVar9 == 3)) {
        local_48 = bVar3;
        if (bVar1) {
          local_48 = true;
        }
        local_42 = bVar1;
        if (bVar3) {
          local_42 = bVar1 | 2;
        }
      }
      else if (lVar9 == 4) {
        local_a8 = 1;
        if (bVar2 == false) {
          lVar9 = 1;
          local_a8 = 1;
          if (!bVar4) {
            lVar9 = 1;
            local_a8 = 1;
            if (!bVar5) {
              FUN_00966a44();
              local_a8 = (byte)lVar9;
            }
          }
        }
        local_48 = (bool)(local_a8 & 1);
        local_42 = bVar2;
        if (bVar4) {
          local_42 = bVar2 | 2;
        }
        if (bVar5) {
          local_42 = local_42 | 4;
        }
      }
      else if (lVar9 == 5) {
        local_48 = true;
        if (bVar2 == false) {
          local_48 = bVar4;
        }
        local_42 = bVar2 != false;
        if (bVar4) {
          local_42 = local_42 | 2;
        }
      }
      if (local_48 == false) {
        local_41 = 2;
        if (*(char *)(param_4 + 3) == '\0') {
          local_41 = 1;
        }
      }
      else {
        local_41 = 3;
      }
    }
    if (((local_42 >> 1 & 1) == 0) || ((local_42 & 0xd) != 0)) {
      local_b8 = 0xffffffffffffffff;
    }
    else {
      local_b8 = param_4[1];
    }
    uVar10 = param_4[2];
    uVar11 = *param_4;
    FUN_01138c10();
    uVar8 = (ulong)local_41;
    FUN_0113badc(uVar8,local_42,param_3,uVar10,uVar11,lVar9,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar8;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

