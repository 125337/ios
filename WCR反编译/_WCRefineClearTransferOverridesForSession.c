// _WCRefineClearTransferOverridesForSession @ 00f1736c

void _WCRefineClearTransferOverridesForSession(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  lVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_b4 = 1;
  }
  else {
    FUN_00f16cb4();
    lVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = DAT_028e2b38;
    local_c0 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b38,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_110,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar2 = *local_100;
      local_140 = 0;
      do {
        do {
          if (*local_100 - lVar2 != 0) {
            _objc_enumerationMutation(*local_100 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_108 + local_140 * 8);
          local_d0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,local_c0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e2b38,PTR_s_removeObjectForKey__0269d700,local_d0);
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

