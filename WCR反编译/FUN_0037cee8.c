// FUN_0037cee8 @ 0037cee8

void FUN_0037cee8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1a8;
  ulong local_1a0;
  uint local_16c;
  ulong local_160;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_indexPathsForVisibleRows_0269ec40);
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar1;
  if (uVar1 == 0) {
    local_160 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_160;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    FUN_0037d3b4(local_b0,local_b8);
    local_c4 = 1;
    goto LAB_0037d35c;
  }
  uVar1 = local_b0;
  _WCRGroupingState();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_d9 = 0;
  local_e9 = 0;
  local_16c = 0;
  if (local_d0 != 0) {
    uVar1 = local_b0;
    _WCRGroupingState();
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_16c = (uint)uVar1 ^ 1;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_16c & 1) == 0) {
LAB_0037d338:
    FUN_0037d3b4(local_b0,local_b8);
    local_c4 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    _memset(auStack_140,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar3 = *local_130;
      local_1a8 = 0;
      do {
        do {
          if (*local_130 - lVar3 != 0) {
            _objc_enumerationMutation(*local_130 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_138 + local_1a8 * 8);
          local_100 = uVar4;
          FUN_0039d120(uVar4,local_d0);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_100);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_c4 = 1;
    }
    else {
      uVar1 = local_b0;
      FUN_003d1e44(local_b0,local_b8,local_f8);
      if ((uVar1 & 1) == 0) {
        local_c4 = 0;
      }
      else {
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_f8,0);
    if (local_c4 == 0) goto LAB_0037d338;
  }
  _objc_storeStrong(&local_d0,0);
LAB_0037d35c:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

