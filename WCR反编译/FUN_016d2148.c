// FUN_016d2148 @ 016d2148

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d2148(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_188;
  ulong local_180;
  ulong local_168;
  ulong local_138 [2];
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  FUN_016d2cf0();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar3;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_indexPathsForVisibleRows_0269ec40);
  _objc_retainAutoreleasedReturnValue();
  local_168 = uVar3;
  if (uVar3 == 0) {
    local_168 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_180 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_168,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar5 = *local_108;
    local_188 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,local_168);
        }
        local_d8 = *(undefined8 *)(local_110 + local_188 * 8);
        uVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_cellForRowAtIndexPath__0269fd40,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = local_120;
        local_128 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_respondsToSelector__026ca818,PTR_s_cellView_0269e7e8);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_cellView_0269e7e8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_128;
          local_128 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_128;
        FUN_016aa360();
        _objc_retainAutoreleasedReturnValue();
        local_138[0] = uVar3;
        if ((uVar3 == 0) || (FUN_016aa590(), uVar4 = local_138[0], (uVar3 & 1) != 0)) {
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar4;
          bVar1 = true;
        }
        _objc_storeStrong(local_138);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_120,0);
        bVar2 = true;
        if (bVar1) goto LAB_016d2588;
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                 0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  bVar2 = false;
LAB_016d2588:
  (*(code *)PTR__objc_release_02578630)(local_168);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

