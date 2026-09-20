// FUN_00826364 @ 00826364

void FUN_00826364(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong local_5e0;
  ulong local_5d8;
  undefined *local_540;
  undefined *local_538;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_450;
  undefined *local_448;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  ulong local_3c0;
  ulong local_3b0;
  ulong local_3a8;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  undefined8 local_360;
  ulong local_350;
  undefined1 auStack_348 [8];
  long local_340;
  long *local_338;
  undefined8 local_308;
  ulong local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  uint local_2a4;
  ulong local_2a0 [3];
  ulong local_288;
  ulong local_280;
  undefined1 auStack_278 [128];
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  undefined1 auStack_1d0 [128];
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_288 = 0;
  _objc_storeStrong(&local_288,param_1);
  uVar2 = local_288;
  (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_isViewLoaded_0269cde0);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_288;
    (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_008308b0();
    _objc_retainAutoreleasedReturnValue();
    local_2a0[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_2a0[0];
    bVar1 = local_2a0[0] != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = uVar2;
    }
    local_2a4 = (uint)bVar1;
    _objc_storeStrong(local_2a0,0);
    if (local_2a4 != 0) goto LAB_00827100;
  }
  _memset(auStack_2f0,0,0x40);
  local_b8 = &cf_findMainTableView;
  local_b0 = &cf_getParentTableView;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_448 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_448 != (undefined *)0x0) {
    lVar6 = *local_2e0;
    local_450 = (undefined *)0x0;
    do {
      do {
        if (*local_2e0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2e0 - lVar6,puVar4);
        }
        uVar7 = *(undefined8 *)(local_2e8 + (long)local_450 * 8);
        local_2b0 = uVar7;
        _NSSelectorFromString();
        uVar2 = local_288;
        local_2f8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_respondsToSelector__026ca818,uVar7);
        if ((uVar2 & 1) != 0) {
          uVar3 = local_288;
          (*(code *)PTR__objc_msgSend_02578628)(local_288,local_2f8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_300 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar2 = local_300;
          bVar1 = (uVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_280 = uVar2;
          }
          local_2a4 = (uint)bVar1;
          _objc_storeStrong(&local_300,0);
          if (local_2a4 != 0) goto LAB_0082676c;
        }
        local_450 = local_450 + 1;
      } while (local_450 < local_448);
      local_448 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_a8,0x10)
      ;
      local_450 = (undefined *)0x0;
    } while (local_448 != (undefined *)0x0);
  }
  local_2a4 = 0;
LAB_0082676c:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_2a4 == 0) {
    _memset(auStack_348,0,0x40);
    local_150 = &cf_m_tableView;
    local_148 = &cf_tableView;
    local_140 = &cf_frontTableView;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_150,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_4c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_4c8 != (undefined *)0x0) {
      lVar6 = *local_338;
      local_4d0 = (undefined *)0x0;
      do {
        do {
          if (*local_338 - lVar6 != 0) {
            _objc_enumerationMutation(*local_338 - lVar6,puVar4);
          }
          local_308 = *(undefined8 *)(local_340 + (long)local_4d0 * 8);
          uVar3 = local_288;
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_valueForKey__0269d128,local_308);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
          local_350 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar2 = local_350;
          bVar1 = (uVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_280 = uVar2;
          }
          local_2a4 = (uint)bVar1;
          _objc_storeStrong(&local_350,0);
          if (local_2a4 != 0) goto LAB_00826a48;
          local_4d0 = local_4d0 + 1;
        } while (local_4d0 < local_4c8);
        local_4c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_348,auStack_138,
                   0x10);
        local_4d0 = (undefined *)0x0;
      } while (local_4c8 != (undefined *)0x0);
    }
    local_2a4 = 0;
LAB_00826a48:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_2a4 == 0) {
      _memset(auStack_3a0,0,0x40);
      local_1f8 = &cf_manager;
      local_1f0 = &cf_m_tableViewMgr;
      local_1e8 = &cf_m_tableViewManager;
      local_1e0 = &cf_tableViewManager;
      local_1d8 = &cf_tableViewMgr;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_1f8,5);
      _objc_retainAutoreleasedReturnValue();
      local_538 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_538 != (undefined *)0x0) {
        lVar6 = *local_390;
        local_540 = (undefined *)0x0;
        do {
          do {
            if (*local_390 - lVar6 != 0) {
              _objc_enumerationMutation(*local_390 - lVar6,puVar4);
            }
            local_360 = *(undefined8 *)(local_398 + (long)local_540 * 8);
            uVar3 = local_288;
            (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_valueForKey__0269d128,local_360);
            _objc_retainAutoreleasedReturnValue();
            local_3a8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128,&cf_tableView);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
            local_3b0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar2 = local_3b0;
            bVar1 = (uVar3 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_280 = uVar2;
            }
            local_2a4 = (uint)bVar1;
            _objc_storeStrong(&local_3b0);
            _objc_storeStrong(&local_3a8,0);
            if (local_2a4 != 0) goto LAB_00826db8;
            local_540 = local_540 + 1;
          } while (local_540 < local_538);
          local_538 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,auStack_1d0,
                     0x10);
          local_540 = (undefined *)0x0;
        } while (local_538 != (undefined *)0x0);
      }
      local_2a4 = 0;
LAB_00826db8:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_2a4 == 0) {
        uVar2 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_isViewLoaded_0269cde0);
        if ((uVar2 & 1) != 0) {
          _memset(auStack_400,0,0x40);
          uVar2 = local_288;
          (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_5d8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_278,
                     0x10);
          if (local_5d8 != 0) {
            lVar6 = *local_3f0;
            local_5e0 = 0;
            do {
              do {
                if (*local_3f0 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_3f0 - lVar6,uVar3);
                }
                uVar8 = *(ulong *)(local_3f8 + local_5e0 * 8);
                puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
                local_3c0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
                uVar2 = local_3c0;
                if ((uVar8 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_280 = uVar2;
                  local_2a4 = 1;
                  goto LAB_008270cc;
                }
                local_5e0 = local_5e0 + 1;
              } while (local_5e0 < local_5d8);
              local_5d8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,
                         auStack_278,0x10);
              local_5e0 = 0;
            } while (local_5d8 != 0);
          }
          local_2a4 = 0;
LAB_008270cc:
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if (local_2a4 != 0) goto LAB_00827100;
        }
        local_280 = 0;
        local_2a4 = 1;
      }
    }
  }
LAB_00827100:
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_280);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

