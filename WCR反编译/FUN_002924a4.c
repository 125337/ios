// FUN_002924a4 @ 002924a4

void FUN_002924a4(long param_1)

{
  char *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong local_1d8;
  ulong local_1d0;
  cfstringStruct *local_198;
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
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_198 = &cf_SN_;
    }
    else {
      local_198 = *(cfstringStruct **)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_198);
    pcVar3 = &cf_addBtnTitle_handler_;
    local_c8 = (undefined **)pcVar1;
    _NSSelectorFromString();
    pcVar4 = &cf_addCancelBtnTitle_handler_;
    local_d0 = pcVar3;
    _NSSelectorFromString();
    ppuVar5 = local_c8;
    local_e8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_d0);
    if (((ulong)ppuVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SuUSNS_u);
      local_ec = 1;
    }
    else {
      _memset(auStack_138,0,0x40);
      uVar6 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      if (local_1d0 != 0) {
        lVar2 = *local_128;
        local_1d8 = 0;
        do {
          do {
            if (*local_128 - lVar2 != 0) {
              _objc_enumerationMutation(*local_128 - lVar2,uVar6);
            }
            lVar11 = *(long *)(local_130 + local_1d8 * 8);
            local_f8 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = local_f8;
            local_140 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = local_140;
            local_148 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            ppuVar5 = local_c8;
            pcVar3 = local_d0;
            lVar11 = local_140;
            lVar7 = local_148;
            if ((lVar8 == 0) || (local_148 == 0)) {
              local_ec = 3;
            }
            else {
              ppuVar9 = &local_170;
              local_170 = PTR___NSConcreteStackBlock_02578660;
              local_168 = 0xc2000000;
              local_164 = 0;
              local_160 = FUN_00292d20;
              local_158 = &DAT_02579910;
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = lVar7;
              local_171 = 1;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(ppuVar5,pcVar3,lVar11);
              local_171 = 0;
              (*(code *)PTR__objc_release_02578630)(ppuVar9);
              _objc_storeStrong(&local_150,0);
              local_ec = 0;
            }
            _objc_storeStrong(&local_148);
            _objc_storeStrong(&local_140,0);
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d8 = 0;
        } while (local_1d0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      ppuVar9 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_e8);
      ppuVar5 = local_c8;
      pcVar3 = local_e8;
      if (((ulong)ppuVar9 & 1) == 0) {
        ppuVar9 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addCancelBtnTitle_target_sel__0269d268);
        if (((ulong)ppuVar9 & 1) != 0) {
          ppuVar9 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Smd_O,0);
        }
      }
      else {
        ppuVar9 = &PTR___NSConcreteGlobalBlock_0257b668;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(ppuVar5,pcVar3,&cf_Smd_O);
        (*(code *)PTR__objc_release_02578630)();
      }
      FUN_00292e58();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_180 = ppuVar5;
      (*(code *)PTR__objc_release_02578630)(ppuVar9);
      if (local_180 == (undefined **)0x0) {
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = local_180;
        local_180 = ppuVar10;
        (*(code *)PTR__objc_release_02578630)(ppuVar5);
        (*(code *)PTR__objc_release_02578630)(ppuVar9);
      }
      ppuVar5 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
      if ((((ulong)ppuVar5 & 1) != 0) && (local_180 != (undefined **)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_showInView__0269d310,local_180);
      }
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

