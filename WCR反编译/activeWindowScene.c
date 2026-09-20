// activeWindowScene @ 00ff4c5c

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertDanmakuPresenter::activeWindowScene(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_260;
  undefined *local_258;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  int local_18c;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = param_1;
  _memset(auStack_188,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_200 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_200 != (undefined *)0x0) {
    lVar3 = *local_178;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,puVar2);
        }
        uVar4 = *(ulong *)(local_180 + (long)local_208 * 8);
        puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_148 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((uVar4 & 1) != 0) &&
           (uVar5 = local_148,
           (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_activationState_026ca490),
           uVar4 = local_148, uVar5 == 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = uVar4;
          local_18c = 1;
          goto LAB_00ff4e80;
        }
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  local_18c = 0;
LAB_00ff4e80:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_18c == 0) {
    _memset(auStack_1d8,0,0x40);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar3 = *local_1c8;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1c8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1c8 - lVar3,puVar2);
          }
          uVar5 = *(ulong *)(local_1d0 + (long)local_260 * 8);
          puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
          local_198 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          uVar4 = local_198;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = uVar4;
            local_18c = 1;
            goto LAB_00ff5080;
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    local_18c = 0;
LAB_00ff5080:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_18c == 0) {
      local_130 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

