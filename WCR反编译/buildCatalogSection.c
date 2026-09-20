// buildCatalogSection @ 01e43834

/* Function Stack Size: 0x10 bytes */

void WCRTGQuickAddViewController::buildCatalogSection(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_1b0;
  ulong local_168;
  ulong local_160;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHeaderTitle__0269e3c0,&cf_SmRvR_);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_setFooterTitle__0269e3c8,&cf_psSSmRS_RYy0_SR__STUSete_m1YsQ_SReR__P_u0);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_c0;
  if (IVar4 == 0) {
    puVar6 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title__026c3030,0,local_b0,
               &cf_S_MRSy_ReQ);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_160 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != 0) {
      lVar7 = *local_100;
      local_168 = 0;
      do {
        do {
          if (*local_100 - lVar7 != 0) {
            _objc_enumerationMutation(*local_100 - lVar7,IVar3);
          }
          IVar4 = local_b0;
          puVar6 = PTR_WCRefineHelper_026ce000;
          puVar2 = PTR_s_didTapQuickAdd__026c64e0;
          pcVar8 = *(cfstringStruct **)(local_108 + local_168 * 8);
          local_d0 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_detailText_026a3240);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_1b0 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,IVar4,pcVar8,
                     local_1b0,0);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          puVar2 = local_118;
          uVar1 = DAT_028c69f0;
          pcVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar2,uVar1,pcVar5,3);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addCell__0269e3f8,local_118);
          _objc_storeStrong(&local_118,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

