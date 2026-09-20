// wcrGrouping_refreshFromLiveData @ 0036407c

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_refreshFromLiveData(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  double in_d1;
  double dVar10;
  double dVar11;
  double in_d2;
  double local_378;
  double local_370;
  double local_368;
  ulong local_2f0;
  ulong local_2a0;
  ulong local_298;
  ID local_280;
  uint local_244;
  ID local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  byte local_f1;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  byte local_d1;
  ID local_d0;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mainFrame_026a2610);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    local_c4 = 1;
  }
  else {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_00364b04();
    local_d1 = 0;
    local_244 = 1;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = IVar3;
      FUN_00364dd0();
      local_244 = (uint)IVar3;
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_244 & 1) == 0) {
      IVar2 = local_c0;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_c0;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if (((local_e0 == 0) || (local_e8 == 0)) ||
         (IVar2 = local_e0, FUN_00357d1c(), (IVar2 & 1) == 0)) {
        IVar3 = local_c0;
        FUN_0036515c();
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_e0;
        local_e0 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      local_f1 = 0;
      bVar1 = true;
      if (local_e0 != 0) {
        IVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_budgetFallback_026a25d8);
        bVar1 = true;
        if ((IVar2 & 1) == 0) {
          IVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_entries_026a25d0);
          _objc_retainAutoreleasedReturnValue();
          local_f1 = 1;
          bVar1 = IVar2 == 0;
          local_f0 = IVar2;
        }
      }
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      if (bVar1) {
        local_c4 = 1;
      }
      else {
        local_100 = 0;
        _memset(auStack_148,0,0x40);
        IVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_entries_026a25d0);
        _objc_retainAutoreleasedReturnValue();
        local_280 = IVar2;
        if (IVar2 == 0) {
          local_280 = *(ID *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_298 = local_280;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_280,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        if (local_298 != 0) {
          lVar6 = *local_138;
          local_2a0 = 0;
          do {
            do {
              if (*local_138 - lVar6 != 0) {
                _objc_enumerationMutation(*local_138 - lVar6,local_280);
              }
              uVar7 = *(ulong *)(local_140 + local_2a0 * 8);
              local_108 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              IVar2 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupId_0269ea88);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8);
              (*(code *)PTR__objc_release_02578630)(IVar2);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if ((uVar4 & 1) != 0) {
                uVar7 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_items_0269e4b0);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_100;
                local_100 = uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar4);
                local_c4 = 2;
                goto LAB_003645dc;
              }
              local_2a0 = local_2a0 + 1;
            } while (local_2a0 < local_298);
            local_298 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_280,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                       auStack_a8,0x10);
            local_2a0 = 0;
          } while (local_298 != 0);
        }
        local_c4 = 0;
LAB_003645dc:
        (*(code *)PTR__objc_release_02578630)(local_280);
        if (local_100 == 0) {
          local_2f0 = *(ulong *)PTR____NSArray0___02578280;
        }
        else {
          local_2f0 = local_100;
        }
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_wcrGrouping_sortedItems__026a27c8,local_2f0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_b0;
        local_150 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar8 = in_d0;
        dVar10 = in_d1;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAllItems__026a27d0,local_150);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcrGrouping_applySearchFilter_026a2720)
        ;
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_emptyLabel_026a2668);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        dVar8 = -dVar8;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar3 = local_b0;
        dVar9 = dVar10;
        dVar11 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        _CGRectGetHeight(dVar9,dVar11);
        IVar5 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        in_d2 = (dVar10 - dVar9) + in_d2;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_368 = dVar8;
        if (dVar8 < in_d2) {
          local_368 = in_d2;
        }
        local_370 = in_d1;
        if (in_d1 < dVar8) {
          local_370 = dVar8;
        }
        if (local_368 <= local_370) {
          local_378 = local_368;
        }
        else {
          local_378 = local_370;
        }
        IVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        FUN_003631ac();
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,local_378,IVar2,PTR_s_setContentOffset_animated__0269ddd8,0);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_100,0);
        local_c4 = 0;
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
    }
    else {
      FUN_00364ea4(local_c0);
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

