// visibleTabs @ 01519118

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::visibleTabs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_2a0;
  undefined *local_280;
  undefined *local_278;
  undefined *local_240;
  undefined *local_238;
  undefined *local_208;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  long local_1b0;
  undefined *local_1a8;
  undefined4 local_19c;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
  SEL local_148;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_130 [128];
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = param_2;
  local_140 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar1;
  _memset(auStack_198,0,0x40);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_tabs_026b01e0);
  _objc_retainAutoreleasedReturnValue();
  local_238 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_238 != (undefined *)0x0) {
    lVar3 = *local_188;
    local_240 = (undefined *)0x0;
    do {
      do {
        if (*local_188 - lVar3 != 0) {
          _objc_enumerationMutation(*local_188 - lVar3,puVar1);
        }
        uVar5 = *(ulong *)(local_190 + (long)local_240 * 8);
        local_158 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_disabled_026a2c20);
        if (((uVar5 & 1) == 0) &&
           (puVar2 = local_140,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_140,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_158),
           ((ulong)puVar2 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
        }
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10)
      ;
      local_240 = (undefined *)0x0;
    } while (local_238 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_tabForId__026a8278,&cf_all);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      _memset(auStack_1f0,0,0x40);
      puVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_tabs_026b01e0);
      _objc_retainAutoreleasedReturnValue();
      local_278 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_278 != (undefined *)0x0) {
        lVar3 = *local_1e0;
        local_280 = (undefined *)0x0;
        do {
          do {
            if (*local_1e0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar3,puVar1);
            }
            lVar4 = *(long *)(local_1e8 + (long)local_280 * 8);
            local_1b0 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_kind_026a27e8);
            if (lVar4 != 5) {
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1b0);
            }
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_130,
                     0x10);
          local_280 = (undefined *)0x0;
        } while (local_278 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_2a0 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_tabs_026b01e0);
        _objc_retainAutoreleasedReturnValue();
        local_208 = local_2a0;
      }
      else {
        local_2a0 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
        local_1f8 = local_2a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_138 = local_2a0;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_208);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_1f8);
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar2;
    }
    local_19c = 1;
    _objc_storeStrong(&local_1a8,0);
  }
  else {
    puVar1 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_19c = 1;
    local_138 = puVar1;
  }
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_138;
}

