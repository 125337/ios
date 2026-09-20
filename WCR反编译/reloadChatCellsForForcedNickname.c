// reloadChatCellsForForcedNickname @ 010eb994

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateHelper::reloadChatCellsForForcedNickname(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_260;
  undefined *local_258;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  undefined8 local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
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
        puVar1 = local_140;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(uVar4);
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
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    FUN_010e7744();
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,puVar1);
    }
    _objc_storeStrong(&local_190,0);
  }
  _memset(auStack_1d8,0,0x40);
  puVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_258 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10);
  if (local_258 != (undefined *)0x0) {
    lVar3 = *local_1c8;
    local_260 = (undefined *)0x0;
    do {
      do {
        if (*local_1c8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar3,puVar1);
        }
        local_198 = *(undefined8 *)(local_1d0 + (long)local_260 * 8);
        FUN_010ebdf0(local_198);
        local_260 = local_260 + 1;
      } while (local_260 < local_258);
      local_258 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10
                );
      local_260 = (undefined *)0x0;
    } while (local_258 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

