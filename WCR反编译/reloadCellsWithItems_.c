// reloadCellsWithItems: @ 015ef6e0

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::reloadCellsWithItems_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double in_d3;
  double local_4d0;
  double local_4c8;
  double local_480;
  double local_478;
  double local_3f8;
  undefined *local_3e0;
  uint local_3d0;
  undefined *local_3c8;
  uint local_3b4;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined *local_380;
  undefined *local_378;
  long local_330;
  long local_2e8;
  undefined *local_2d0;
  undefined *local_160;
  undefined *local_150;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d2;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  long local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_2d0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_2d0 = *(undefined **)PTR____NSArray0___02578280;
  }
  if (local_c0 == 0) {
    local_2e8 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_2e8 = local_c0;
  }
  FUN_015f0930(local_2d0,local_2e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_c1 = (byte)local_2d0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_b0;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_separateSessions_026b1480);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatSeparateSessions_026b13b8);
  local_d1 = true;
  if ((int)puVar3 == (int)puVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarAvatarSize_026b1488);
    dVar7 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatAvatarSize_026b13c0);
    local_d1 = true;
    if (in_d0 == dVar7) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarItemSpacing_026b1490);
      dVar7 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatItemSpacing_026b13d8);
      local_d1 = true;
      if (in_d0 == dVar7) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarNicknameSpacing_026b1498);
        dVar7 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatNicknameSpacing_026b13d0);
        local_d1 = true;
        if (in_d0 == dVar7) {
          puVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarShowNickname_026b14a0);
          puVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatShowNickname_026b13c8);
          local_d1 = true;
          if ((int)puVar2 == (int)puVar3) {
            puVar2 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarShowRedDot_026b14a8);
            puVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatShowRedDot_026b14b0);
            local_d1 = true;
            if ((int)puVar2 == (int)puVar3) {
              puVar2 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarShowBadgeNumber_026b14b8);
              puVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_quickChatShowBadgeNumber_026b14c0);
              local_d1 = (int)puVar2 != (int)puVar3;
            }
          }
        }
      }
    }
  }
  if (local_c0 == 0) {
    local_330 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_330 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setItems__026a17a8,local_330);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_separateSessions_026b1480);
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatSeparateSessions_026b13b8);
  local_d2 = (int)puVar2 != (int)puVar3;
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatSeparateSessions_026b13b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSeparateSessions__026b14c8,puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_b0;
  local_e8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_separateSessions_026b1480);
  if (((ulong)puVar2 & 1) != 0) {
    _memset(auStack_130,0,0x40);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_378 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_378 != (undefined *)0x0) {
      lVar4 = *local_120;
      local_380 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,puVar2);
          }
          uVar5 = *(ulong *)(local_128 + (long)local_380 * 8);
          local_f0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_group_026b14d0);
          if ((uVar5 & 1) == 0) {
            local_3a0 = local_e0;
          }
          else {
            local_3a0 = local_e8;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_addObject__0269d180,local_f0);
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_380 = (undefined *)0x0;
      } while (local_378 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_separateSessions_026b1480);
  bVar1 = ((ulong)puVar2 & 1) == 0;
  if (bVar1) {
    local_3a8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_3a8;
  }
  else {
    local_3a8 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_3a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  bVar1 = false;
  local_3b4 = 1;
  if ((local_d1 & 1) == 0) {
    local_150 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_privateItems_026b14d8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_3c8 = local_150;
    if (local_150 == (undefined *)0x0) {
      local_3c8 = *(undefined **)PTR____NSArray0___02578280;
    }
    FUN_015f0930(local_3c8,local_138);
    local_3b4 = (uint)local_3c8 ^ 1;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  bVar1 = false;
  local_3d0 = 1;
  if ((local_d1 & 1) == 0) {
    local_160 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupItems_026b14e0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_3e0 = local_160;
    if (local_160 == (undefined *)0x0) {
      local_3e0 = *(undefined **)PTR____NSArray0___02578280;
    }
    FUN_015f0930(local_3e0,local_e8);
    local_3d0 = (uint)local_3e0 ^ 1;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPrivateItems__026b14e8,local_138);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setGroupItems__026b14f0,local_e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatAvatarSize_026b13c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarAvatarSize__026b14f8);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatItemSpacing_026b13d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarItemSpacing__026b1500);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatNicknameSpacing_026b13d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarNicknameSpacing__026b1508);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatShowNickname_026b13c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarShowNickname__026b1510,puVar2);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatShowRedDot_026b14b0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarShowRedDot__026b1518,puVar2);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatShowBadgeNumber_026b14c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSidebarShowBadgeNumber__026b1520,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarAvatarSize_026b1488);
  puVar2 = local_b0;
  local_3f8 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarShowNickname_026b14a0);
  if (((ulong)puVar2 & 1) == 0) {
    local_3f8 = 12.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarNicknameSpacing_026b1498);
    local_3f8 = local_3f8 + 24.0;
  }
  dVar6 = in_d0 + local_3f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarItemSpacing_026b1490);
  dVar7 = in_d0 + local_3f8 + dVar6;
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((local_c1 & 1) == 0) || ((local_d1 & 1) != 0)) {
    if ((local_d2 & 1) == 0) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar8 = dVar7;
      dVar9 = dVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      dVar8 = *(double *)PTR__CGPointZero_025782e0;
      dVar9 = dVar6;
      dVar7 = dVar8;
      dVar6 = *(double *)(PTR__CGPointZero_025782e0 + 8);
    }
    if ((local_d2 & 1) == 0) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_480 = dVar9;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      dVar8 = *(double *)PTR__CGPointZero_025782e0;
      local_480 = dVar9;
      dVar9 = *(double *)(PTR__CGPointZero_025782e0 + 8);
    }
    if ((local_3b4 & 1) != 0) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_478 = local_480 - in_d3;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (dVar6 < local_478) {
        local_478 = dVar6;
      }
      if (local_478 <= 0.0) {
        local_480 = 0.0;
      }
      else {
        local_480 = local_478;
      }
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar7);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_3d0 & 1) != 0) {
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_4c8 = local_480 - in_d3;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (dVar9 < local_4c8) {
        local_4c8 = dVar9;
      }
      if (local_4c8 <= 0.0) {
        local_4d0 = 0.0;
      }
      else {
        local_4d0 = local_4c8;
      }
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar8,local_4d0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

