// _WCRChatAttachmentLiveContainsIdentifier @ 00ec453c

byte _WCRChatAttachmentLiveContainsIdentifier(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_158;
  ulong local_150;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar2 = local_c0;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_c0;
  local_c0 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar5);
  if ((local_b8 == 0) ||
     (lVar5 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar3 = local_b8;
    FUN_00ec489c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    if (uVar3 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar3 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_150 != 0) {
        lVar5 = *local_108;
        local_158 = 0;
        do {
          do {
            if (*local_108 - lVar5 != 0) {
              _objc_enumerationMutation(*local_108 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_110 + local_158 * 8);
            local_d8 = uVar6;
            FUN_00ec4b28(uVar6,&cf_pathKey);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            FUN_00ebd790();
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            uVar4 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_isEqualToString__0269ccc8,local_c0);
            bVar1 = (uVar4 & 1) != 0;
            if (bVar1) {
              local_a9 = 1;
            }
            local_c4 = (uint)bVar1;
            _objc_storeStrong(&local_120,0);
            if (local_c4 != 0) goto LAB_00ec47f4;
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      local_c4 = 0;
LAB_00ec47f4:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_c4 == 0) {
        local_a9 = 0;
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

