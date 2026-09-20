// persistTabsWithReason:persistSelection: @ 01519fe0

/* Function Stack Size: 0x1c bytes */

void WCRefineTelegramGroupingStore::persistTabsWithReason_persistSelection_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *local_190;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  byte local_c1;
  undefined8 local_c0;
  SEL local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c1 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  _memset(auStack_118,0,0x40);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cachedTabs_026b0180);
  _objc_retainAutoreleasedReturnValue();
  local_148 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != (cfstringStruct *)0x0) {
    lVar4 = *local_108;
    local_150 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,pcVar2);
        }
        puVar1 = local_d0;
        uVar5 = *(undefined8 *)(local_110 + (long)local_150 * 8);
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_dictionaryRepresentation_026ae418);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_150 = (cfstringStruct *)((long)&local_150->field0_0x0 + 1);
      } while (local_150 < local_148);
      local_148 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_150 = (cfstringStruct *)0x0;
    } while (local_148 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHomeTelegramGroupingTabs__026b01a8,local_d0)
  ;
  if (((local_c1 & 1) != 0) &&
     (puVar1 = local_120,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_120,PTR_s_homeTelegramGroupingRememberSele_026b01b0), ((ulong)puVar1 & 1) != 0
     )) {
    pcVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedTab_026a2a78);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_190 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_190 = &cf_all;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_setHomeTelegramGroupingSelectedT_026b01e8,local_190);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_postChangeReason__026b01f0,local_c0);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

