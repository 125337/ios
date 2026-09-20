// FUN_000bcdd8 @ 000bcdd8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000bcdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_198;
  ulong local_190;
  ulong local_138;
  int local_12c;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  cfstringStruct *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  pcVar2 = &cf_WCRefine_openPluginSearchSettings;
  _NSSelectorFromString();
  local_d0 = pcVar2;
  _memset(auStack_128,0,0x40);
  uVar3 = local_b8;
  FUN_000be6a4(local_b8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_190 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != 0) {
    lVar5 = *local_118;
    local_198 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_120 + local_198 * 8);
        local_e8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_respondsToSelector__026ca818,local_d0);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_d0);
          local_a9 = 1;
          local_12c = 1;
          goto LAB_000bd03c;
        }
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_198 = 0;
    } while (local_190 != 0);
  }
  local_12c = 0;
LAB_000bd03c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_c8;
  if (local_12c == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = local_c0;
    local_138 = uVar3;
    if (uVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar6 & 1) != 0) {
        _objc_storeStrong(&local_138,local_c0);
      }
    }
    bVar1 = false;
    if (local_138 == 0) {
      uVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (bVar1) {
      uVar6 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_138;
      local_138 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_138;
    FUN_000bede0();
    local_a9 = (byte)uVar3 & 1;
    local_12c = 1;
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

