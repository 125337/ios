// applyToolbarCollapsedChrome @ 01669538

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyToolbarCollapsedChrome(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2d0;
  ulong local_2c8;
  ulong local_268;
  ulong local_260;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collapsedHiddenPanels_026b2488);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCollapsedHiddenPanels__026b2490);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarCollapsed_026b1db8);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbar_026b1cd0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarExpandButton_026b1e78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarExpandButton_026b1e78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _memset(auStack_1f0,0,0x40);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collapsedHiddenPanels_026b2488);
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2c8 != 0) {
      lVar4 = *local_1e0;
      local_2d0 = 0;
      do {
        do {
          if (*local_1e0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar4,IVar2);
          }
          local_1b0 = *(undefined8 *)(local_1e8 + local_2d0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setHidden__026ca970,0);
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                   0x10);
        local_2d0 = 0;
      } while (local_2c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collapsedHiddenPanels_026b2488);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_applyAdaptiveToolbarLayout_026b1cf8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ensureToolbarExpandButton_026b2498);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbar_026b1cd0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarExpandButton_026b1e78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    uStack_148 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_150 = *(undefined8 *)PTR__CGPointZero_025782e0;
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uStack_148;
    local_160 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,uStack_148);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collapsedHiddenPanels_026b2488);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _memset(auStack_1a8,0,0x40);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collapsibleOverlayPanels_026b24a0);
    _objc_retainAutoreleasedReturnValue();
    local_260 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != 0) {
      lVar4 = *local_198;
      local_268 = 0;
      do {
        do {
          if (*local_198 - lVar4 != 0) {
            _objc_enumerationMutation(*local_198 - lVar4,IVar2);
          }
          uVar5 = *(ulong *)(local_1a0 + local_268 * 8);
          local_168 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setHidden__026ca970,1);
            IVar3 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_collapsedHiddenPanels_026b2488);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar3);
          }
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_268 = 0;
      } while (local_260 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_toolbarScroll_026b1cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_bringSubviewToFront__026ca550);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

