// FUN_0028c4c0 @ 0028c4c0

void FUN_0028c4c0(long param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  ulong local_1d0;
  ulong local_1c8;
  undefined **local_188;
  undefined **local_180;
  undefined1 local_171;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined4 local_ec;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  undefined **local_c8;
  undefined **local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCUIActionSheet";
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_getClass();
  local_c0 = (undefined **)pcVar1;
  if ((undefined **)pcVar1 == (undefined **)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SuUSNS_u);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = &cf_addBtnTitle_handler_;
    local_c8 = (undefined **)pcVar1;
    _NSSelectorFromString();
    pcVar3 = &cf_addCancelBtnTitle_handler_;
    local_d0 = pcVar2;
    _NSSelectorFromString();
    ppuVar4 = local_c8;
    local_e8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_d0);
    if (((ulong)ppuVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SuUSNS_u);
      local_ec = 1;
    }
    else {
      _memset(auStack_138,0,0x40);
      uVar5 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_1c8 != 0) {
        lVar10 = *local_128;
        local_1d0 = 0;
        do {
          do {
            if (*local_128 - lVar10 != 0) {
              _objc_enumerationMutation(*local_128 - lVar10,uVar5);
            }
            lVar11 = *(long *)(local_130 + local_1d0 * 8);
            local_f8 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = local_f8;
            local_140 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = local_140;
            local_148 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            ppuVar4 = local_c8;
            pcVar2 = local_d0;
            lVar11 = local_140;
            lVar6 = local_148;
            if ((lVar7 == 0) || (local_148 == 0)) {
              local_ec = 3;
            }
            else {
              ppuVar8 = &local_170;
              local_170 = PTR___NSConcreteStackBlock_02578660;
              local_168 = 0xc2000000;
              local_164 = 0;
              local_160 = FUN_0028ce40;
              local_158 = &DAT_02579910;
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = lVar6;
              local_171 = 1;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(ppuVar4,pcVar2,lVar11);
              local_171 = 0;
              (*(code *)PTR__objc_release_02578630)(ppuVar8);
              _objc_storeStrong(&local_150,0);
              local_ec = 0;
            }
            _objc_storeStrong(&local_148);
            _objc_storeStrong(&local_140,0);
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d0 = 0;
        } while (local_1c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      ppuVar8 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_e8);
      ppuVar4 = local_c8;
      pcVar2 = local_e8;
      if (((ulong)ppuVar8 & 1) == 0) {
        ppuVar8 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addCancelBtnTitle_target_sel__0269d268);
        if (((ulong)ppuVar8 & 1) != 0) {
          ppuVar8 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        }
      }
      else {
        ppuVar8 = &PTR___NSConcreteGlobalBlock_0257b468;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(ppuVar4,pcVar2,&cf_Sm);
        (*(code *)PTR__objc_release_02578630)();
      }
      local_180 = (undefined **)0x0;
      FUN_0028cf78();
      _objc_retainAutoreleasedReturnValue();
      local_188 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (ppuVar8,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      if (((ulong)ppuVar8 & 1) != 0) {
        ppuVar8 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = local_180;
        local_180 = ppuVar8;
        (*(code *)PTR__objc_release_02578630)(ppuVar4);
      }
      if (local_180 == (undefined **)0x0) {
        ppuVar8 = (undefined **)PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = local_180;
        local_180 = ppuVar9;
        (*(code *)PTR__objc_release_02578630)(ppuVar4);
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
      }
      if (local_180 == (undefined **)0x0) {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = local_180;
        local_180 = ppuVar9;
        (*(code *)PTR__objc_release_02578630)(ppuVar4);
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
      }
      ppuVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
      if ((((ulong)ppuVar4 & 1) == 0) || (local_180 == (undefined **)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QN_US);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_showInView__0269d310,local_180);
      }
      _objc_storeStrong(&local_188);
      _objc_storeStrong(&local_180,0);
      local_ec = 0;
    }
    _objc_storeStrong(&local_c8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

