// FUN_0051b604 @ 0051b604

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0051b604(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  uint uVar3;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  byte local_22c;
  long local_220;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined1 local_1a1;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  long local_180;
  undefined1 local_171;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  long local_150;
  undefined1 local_141;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  long local_120;
  undefined1 local_111;
  long local_110;
  undefined *local_108;
  byte local_fa;
  bool local_f9;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  long local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined **local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined **local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined **local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined **local_30;
  long local_28;
  long *plVar4;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar4 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar4,param_1);
  uVar3 = (uint)plVar4;
  FUN_0051c4e0();
  if ((uVar3 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    lVar9 = local_b0;
    FUN_0051c57c();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_b0;
    local_c8 = lVar9;
    FUN_0051c80c();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = local_c8;
    local_d0 = lVar5;
    FUN_0051cb00(local_c8,local_b0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_c8;
    local_d8 = lVar9;
    FUN_0051d124();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = local_c8;
    local_e0 = lVar5;
    FUN_0051d3dc();
    _objc_retainAutoreleasedReturnValue();
    local_f9 = false;
    bVar1 = local_e0 == 0;
    local_e8 = lVar9;
    if (bVar1) {
      local_220 = 0;
    }
    else {
      local_220 = local_e0;
      _WCRefineFinderContentVMFromDataItem();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_220;
    }
    local_f9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_220;
    if ((local_f9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    local_22c = 0;
    if (local_f0 != 0) {
      local_22c = (byte)local_f0;
      _WCRefineFinderContentVMHasVideo();
    }
    local_fa = local_22c & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = local_b0;
    local_108 = puVar6;
    FUN_0051d5c8();
    _objc_retainAutoreleasedReturnValue();
    local_110 = lVar9;
    if (lVar9 != 0) {
      uVar3 = (uint)lVar9;
      FUN_0051d6e8();
      puVar6 = local_108;
      local_120 = local_110;
      local_111 = (undefined1)uVar3;
      local_48 = &cf_title;
      local_38 = &cf_Smp_;
      if ((uVar3 & 1) == 0) {
        local_38 = &cf_p_;
      }
      local_40 = &cf_handler;
      ppuVar7 = &local_140;
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_0051d814;
      local_128 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_141 = 1;
      _objc_retainBlock();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      local_141 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      _objc_storeStrong(&local_120,0);
    }
    lVar9 = local_f0;
    puVar6 = local_108;
    if ((local_fa & 1) == 0) {
      if (local_e8 != 0) {
        local_88 = &cf_title;
        local_78 = &cf_OX__b;
        local_80 = &cf_handler;
        ppuVar7 = &local_1a0;
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0xc2000000;
        local_194 = 0;
        local_190 = FUN_0051da74;
        local_188 = &DAT_02578c20;
        lVar9 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a1 = 1;
        local_180 = lVar9;
        _objc_retainBlock();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_70 = ppuVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_88,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
        local_1a1 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_180,0);
      }
    }
    else {
      local_68 = &cf_title;
      local_58 = &cf_OX__bS;
      local_60 = &cf_handler;
      ppuVar7 = &local_170;
      local_170 = PTR___NSConcreteStackBlock_02578660;
      local_168 = 0xc2000000;
      local_164 = 0;
      local_160 = FUN_0051d9e4;
      local_158 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = lVar9;
      local_171 = 1;
      _objc_retainBlock();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      local_171 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      _objc_storeStrong(&local_150,0);
    }
    puVar6 = local_108;
    if (local_d8 != 0) {
      local_a8 = &cf_title;
      local_98 = &cf_OX__bVGr;
      local_a0 = &cf_handler;
      ppuVar7 = &local_1d0;
      local_1d0 = PTR___NSConcreteStackBlock_02578660;
      local_1c8 = 0xc2000000;
      local_1c4 = 0;
      local_1c0 = FUN_0051daa8;
      local_1b8 = &DAT_02578c20;
      lVar9 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = lVar9;
      _objc_retainBlock();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_90 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_98,&local_a8,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      _objc_storeStrong(&local_1b0,0);
    }
    puVar6 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
    if (puVar6 == (undefined *)0x0) {
      pcVar2 = &cf_S_blR__zTQ;
      if (local_e0 == 0) {
        pcVar2 = &cf_lgS0R_b;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
      local_c0 = 1;
    }
    else {
      FUN_0051dc80(local_d0,local_108);
      local_c0 = 0;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

