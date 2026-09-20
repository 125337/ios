// FUN_003dfd10 @ 003dfd10

void FUN_003dfd10(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_140;
  ulong local_138;
  ulong local_120;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  local_c0 = 0;
  _memset(auStack_108,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = uVar2;
  if (uVar2 == 0) {
    local_120 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_138 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar1 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar1 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar1,local_120);
        }
        uVar2 = *(ulong *)(local_100 + local_140 * 8);
        local_c8 = uVar2;
        FUN_003b6b3c();
        lVar3 = 0;
        if ((local_b8 == 0) || (lVar3 = uVar2 - local_c0, local_c0 <= uVar2)) {
          _objc_storeStrong(lVar3,&local_b8,local_c8);
          local_c0 = uVar2;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_120);
  lVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

