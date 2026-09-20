// FUN_000bd2e0 @ 000bd2e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000bd2e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar2 = &cf_onSearch;
  _NSSelectorFromString();
  pcVar3 = &cf_WCRefine_onContactsTopBarSearchButtonTapped;
  local_c8 = pcVar2;
  _NSSelectorFromString();
  pcVar2 = &cf_doGlobalSearchPrepareWork;
  local_e0 = pcVar3;
  _NSSelectorFromString();
  pcVar3 = &cf_setSearchBarActive_;
  local_e8 = pcVar2;
  _NSSelectorFromString();
  local_f0 = pcVar3;
  _memset(auStack_138,0,0x40);
  uVar4 = local_b8;
  FUN_000be6a4(local_b8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_198 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_198 != 0) {
    lVar5 = *local_128;
    local_1a0 = 0;
    do {
      do {
        if (*local_128 - lVar5 != 0) {
          _objc_enumerationMutation(*local_128 - lVar5,uVar4);
        }
        uVar6 = *(ulong *)(local_130 + local_1a0 * 8);
        local_f8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_respondsToSelector__026ca818,local_c8);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_c8);
          local_a9 = 1;
          bVar1 = true;
          goto LAB_000bd690;
        }
        uVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,local_e0);
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_e0);
          local_a9 = 1;
          bVar1 = true;
          goto LAB_000bd690;
        }
        uVar6 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,local_e8);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = local_f8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_f8,PTR_s_respondsToSelector__026ca818,local_f0), (uVar6 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_f0,1);
          local_a9 = 1;
          bVar1 = true;
          goto LAB_000bd690;
        }
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  bVar1 = false;
LAB_000bd690:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

