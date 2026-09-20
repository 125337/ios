// buildTabsSection @ 01e45a54

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::buildTabsSection(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  ulong local_168;
  ulong local_160;
  undefined *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  cfstringStruct *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_setFooterTitle__0269e3c8,&cf_pS_tbXT0TRegn0_cR_ObRd0);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setListedTabs__026c6548);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_108,0,0x40);
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_listedTabs_026c6550);
  _objc_retainAutoreleasedReturnValue();
  local_160 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != 0) {
    lVar6 = *local_f8;
    local_168 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,IVar4);
        }
        pcVar7 = *(cfstringStruct **)(local_100 + local_168 * 8);
        local_c8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_detailText_026a3240);
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_190 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = local_190;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        pcVar7 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_disabled_026a2c20);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          local_119 = false;
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_1a0 = &cf__y_u;
          }
          else {
            local_1a0 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
            _objc_retainAutoreleasedReturnValue();
            local_118 = local_1a0;
          }
          local_119 = pcVar7 != (cfstringStruct *)0x0;
          _objc_storeStrong(&local_110,local_1a0);
          if ((local_119 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_118);
          }
        }
        IVar2 = local_b0;
        puVar5 = PTR_WCRefineHelper_026ce000;
        puVar3 = PTR_s_didTapListedTab__026c6558;
        pcVar7 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar2,pcVar7,
                   local_110,1);
        _objc_retainAutoreleasedReturnValue();
        local_128 = puVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        puVar3 = local_128;
        uVar1 = DAT_028c69f0;
        pcVar7 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(puVar3,uVar1,pcVar7,3);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addCell__0269e3f8,local_128);
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_110,0);
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

