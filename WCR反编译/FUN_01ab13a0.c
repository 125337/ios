// FUN_01ab13a0 @ 01ab13a0

void FUN_01ab13a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_270;
  ulong local_268;
  ulong local_230;
  ulong local_228;
  ulong local_210;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
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
  lVar6 = param_1 + 0x28;
  local_140 = param_1;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_148 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  if (*(long *)(param_1 + 0x20) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeAllObjects_0269d508);
  }
  else {
    _memset(auStack_190,0,0x40);
    uVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar7 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_210 = uVar3;
    if (uVar3 == 0) {
      local_210 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_228 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
              );
    if (local_228 != 0) {
      lVar6 = *local_180;
      local_230 = 0;
      do {
        do {
          if (*local_180 - lVar6 != 0) {
            _objc_enumerationMutation(*local_180 - lVar6,local_210);
          }
          local_150 = *(undefined8 *)(local_188 + local_230 * 8);
          uVar4 = *(ulong *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_150);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeObject__0269d678,local_150);
          }
          local_230 = local_230 + 1;
        } while (local_230 < local_228);
        local_228 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                   0x10);
        local_230 = 0;
      } while (local_228 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_210);
  }
  _memset(auStack_1d8,0,0x40);
  uVar4 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
  if (local_268 != 0) {
    lVar6 = *local_1c8;
    local_270 = 0;
    do {
      do {
        if (*local_1c8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar6,uVar4);
        }
        uVar7 = *(ulong *)(local_1d0 + local_270 * 8);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_198 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar7 = *(ulong *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_containsObject__0269cbb8,local_198);
            if ((uVar7 & 1) == 0) goto LAB_01ab17f0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_198);
        }
LAB_01ab17f0:
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10)
      ;
      local_270 = 0;
    } while (local_268 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar6);
  param_1 = param_1 + 0x28;
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

