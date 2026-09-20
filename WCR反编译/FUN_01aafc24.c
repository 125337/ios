// FUN_01aafc24 @ 01aafc24

void FUN_01aafc24(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_278;
  ulong local_270;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  long local_148;
  long local_140;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  local_130 = param_1;
  _objc_storeStrong(&local_138);
  lVar5 = param_1 + 0x20;
  local_140 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_148 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar5);
  _memset(auStack_190,0,0x40);
  uVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  local_230 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_230 != 0) {
    lVar5 = *local_180;
    local_238 = 0;
    do {
      do {
        if (*local_180 - lVar5 != 0) {
          _objc_enumerationMutation(*local_180 - lVar5,uVar4);
        }
        uVar6 = *(ulong *)(local_188 + local_238 * 8);
        local_150 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_198 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if (((uVar6 & 1) != 0) ||
           (uVar6 = local_198,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_198,PTR_s_hasSuffix__0269d018,&cf__im_chatroom), (uVar6 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeObject__0269d678,local_150);
        }
        _objc_storeStrong(&local_198,0);
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
      local_238 = 0;
    } while (local_230 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _memset(auStack_1e0,0,0x40);
  uVar6 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_270 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10);
  if (local_270 != 0) {
    lVar5 = *local_1d0;
    local_278 = 0;
    do {
      do {
        if (*local_1d0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar5,uVar6);
        }
        local_1a0 = *(undefined8 *)(local_1d8 + local_278 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1a0);
        local_278 = local_278 + 1;
      } while (local_278 < local_270);
      local_270 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,0x10)
      ;
      local_278 = 0;
    } while (local_270 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

