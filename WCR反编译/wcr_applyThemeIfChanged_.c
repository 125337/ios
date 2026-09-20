// wcr_applyThemeIfChanged: @ 015e331c

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::wcr_applyThemeIfChanged_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  long lVar9;
  ulong local_1c8;
  ulong local_1c0;
  ID local_1a8;
  undefined *local_158;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  byte local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ID local_c8;
  byte local_ba;
  byte local_b9;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = (byte)param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  FUN_015e16a4();
  local_ba = (byte)param_1;
  if ((((local_b9 & 1) != 0) ||
      (IVar1 = local_b0,
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastDarkModeValid_026b1128),
      (IVar1 & 1) == 0)) ||
     (IVar1 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_lastDarkMode_026b1130),
     (uint)IVar1 != (local_ba & 1))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastDarkMode__026b1138,local_ba & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLastDarkModeValid__026b1140,1);
    local_c8 = 2;
    if ((local_ba & 1) == 0) {
      local_c8 = 1;
    }
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_overrideUserInterfaceStyle_026b1148);
    if (IVar1 != local_c8) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setOverrideUserInterfaceStyle__026caa00,local_c8);
    }
    local_158 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 0;
    local_f1 = 0;
    local_d0 = local_158;
    if ((local_ba & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_quickChatSidebarColorLight_026b1158);
      _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      local_f0 = local_158;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_quickChatSidebarColorDark_026b1150);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = local_158;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_158;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_quickChatSidebarAlpha_026b1160);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_colorWithAlphaComponent__026ca578);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = (ulong)(local_ba & 1);
    FUN_015e155c();
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar3;
    _memset(auStack_148,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sidebarScroll_026b1170);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_groupScroll_026b1178);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = IVar6;
    if (IVar6 == 0) {
      local_1a8 = *(ID *)PTR____NSArray0___02578280;
    }
    IVar7 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_arrayByAddingObjectsFromArray__026b0268,local_1a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_1c0 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar9 = *local_138;
      local_1c8 = 0;
      do {
        do {
          if (*local_138 - lVar9 != 0) {
            _objc_enumerationMutation(*local_138 - lVar9,IVar7);
          }
          uVar3 = *(ulong *)(local_140 + local_1c8 * 8);
          puVar2 = PTR_WCRQuickChatHostCell_026cee28;
          local_108 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRQuickChatHostCell_026cee28,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) != 0) {
            uVar3 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_quickCell_026b10f0);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = IVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

