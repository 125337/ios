// ensureTabsLoaded @ 01518820

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingStore::ensureTabsLoaded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *local_1c0;
  ulong local_180;
  ulong local_178;
  ID local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cachedTabs_026b0180);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_c0;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
       puVar2 == (undefined *)0x0)) {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCachedTabs__026b0198);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tabsFromDictionaries__026b0190,local_c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCachedTabs__026b0198);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_b0;
    local_c8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_disablePrivateFriendTabIfFeature_026b01a0);
    if ((IVar1 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar2;
      _memset(auStack_118,0,0x40);
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cachedTabs_026b0180);
      _objc_retainAutoreleasedReturnValue();
      local_178 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar8 = *local_108;
        local_180 = 0;
        do {
          do {
            if (*local_108 - lVar8 != 0) {
              _objc_enumerationMutation(*local_108 - lVar8,IVar1);
            }
            puVar2 = local_d0;
            uVar9 = *(undefined8 *)(local_110 + local_180 * 8);
            local_d8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_dictionaryRepresentation_026ae418);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_setHomeTelegramGroupingTabs__026b01a8,local_d0);
      _objc_storeStrong(&local_d0,0);
    }
    pcVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_homeTelegramGroupingRememberSele_026b01b0);
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedTabId__026b01c0,DAT_02586510);
    }
    else {
      pcVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_homeTelegramGroupingSelectedTabI_026b01b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_01516994();
      _objc_retainAutoreleasedReturnValue();
      local_120 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1c0 = &cf_all;
      }
      else {
        local_1c0 = local_120;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedTabId__026b01c0,local_1c0);
      _objc_storeStrong(&local_120,0);
    }
    IVar1 = local_b0;
    IVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedTabId_026b01c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_tabForId__026a8278);
    _objc_retainAutoreleasedReturnValue();
    local_128 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if (((local_128 == 0) ||
        (IVar1 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_disabled_026a2c20)
        , (IVar1 & 1) != 0)) ||
       (IVar1 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_b0,PTR_s_shouldHideTabFromHomeStrip__026b01d0,local_128), (IVar1 & 1) != 0))
    {
      IVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_visibleTabs_026a8350);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSelectedTabId__026b01c0);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

