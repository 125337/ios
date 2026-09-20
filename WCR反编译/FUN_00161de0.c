// FUN_00161de0 @ 00161de0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00161de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  ulong local_250;
  ulong local_248;
  ulong local_218;
  cfstringStruct *local_1d8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  byte local_109;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char *local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_c8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_d8 = 1;
  }
  else {
    _objc_alloc();
    local_1d8 = local_b8;
    if (local_b8 == (cfstringStruct *)0x0) {
      local_1d8 = &cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_1d8);
    pcVar2 = &cf_addBtnTitle_handler_;
    local_e0 = pcVar1;
    _NSSelectorFromString();
    pcVar3 = &cf_addCancelBtnTitle_handler_;
    local_e8 = pcVar2;
    _NSSelectorFromString();
    local_f8 = 0;
    uVar4 = local_b0;
    local_f0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getViewController_0269d328);
    if ((uVar4 & 1) != 0) {
      uVar5 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getViewController_0269d328);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_f8;
      local_f8 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_109 = 0;
    uVar4 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
    if ((uVar4 & 1) == 0) {
      local_218 = 0;
    }
    else {
      local_218 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = local_218;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_218;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    pcVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,local_e8);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fel9_QbUS);
      local_d8 = 1;
    }
    else {
      _memset(auStack_158,0,0x40);
      uVar4 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_248 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      if (local_248 != 0) {
        lVar10 = *local_148;
        local_250 = 0;
        do {
          do {
            if (*local_148 - lVar10 != 0) {
              _objc_enumerationMutation(*local_148 - lVar10,uVar4);
            }
            lVar11 = *(long *)(local_150 + local_250 * 8);
            local_118 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = local_118;
            local_160 = lVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_handler);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = local_160;
            local_168 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            pcVar1 = local_e0;
            pcVar2 = local_e8;
            lVar11 = local_160;
            lVar6 = local_168;
            if ((lVar7 == 0) || (local_168 == 0)) {
              local_d8 = 3;
            }
            else {
              ppuVar8 = &local_190;
              local_190 = PTR___NSConcreteStackBlock_02578660;
              local_188 = 0xc2000000;
              local_184 = 0;
              local_180 = FUN_00164098;
              local_178 = &DAT_02579910;
              (*(code *)PTR__objc_retain_02578638)();
              local_170 = lVar6;
              _objc_retainBlock();
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,lVar11);
              (*(code *)PTR__objc_release_02578630)(ppuVar8);
              _objc_storeStrong(&local_170,0);
              local_d8 = 0;
            }
            _objc_storeStrong(&local_168);
            _objc_storeStrong(&local_160,0);
            local_250 = local_250 + 1;
          } while (local_250 < local_248);
          local_248 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_250 = 0;
        } while (local_248 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      pcVar9 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,local_f0);
      pcVar1 = local_e0;
      pcVar2 = local_f0;
      if (((ulong)pcVar9 & 1) != 0) {
        pcVar3 = &cf_Common_Cancel;
        FUN_001604fc(&cf_Common_Cancel,&cf_Sm);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR___NSConcreteGlobalBlock_0257a660;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,pcVar3);
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if ((local_100 != 0) &&
         (pcVar1 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310),
         ((ulong)pcVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_showInView__0269d310,local_100);
      }
      local_d8 = 0;
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

