// selectRandomPaletteColor @ 01894658

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::selectRandomPaletteColor(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  cfstringStruct *local_268;
  cfstringStruct *local_250;
  cfstringStruct *local_230;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a8;
  undefined *local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [24];
  undefined *local_130;
  undefined1 auStack_128 [8];
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1a8 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_1a8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1c8 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_1c8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isUsingDefaultRandomPaletteWithL_026b7390,local_38,local_40);
  local_41 = (byte)IVar5;
  local_59 = 0;
  local_69 = 0;
  if ((IVar5 & 1) == 0) {
    local_1d8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
    local_69 = 1;
    local_68 = local_1d8;
  }
  else {
    local_1d8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_1d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_1d8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  local_81 = 0;
  local_91 = 0;
  if ((local_41 & 1) == 0) {
    local_1e8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    local_91 = 1;
    local_90 = local_1e8;
  }
  else {
    local_1e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_1e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_1e8;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (local_50 == (cfstringStruct *)0x0) {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_50;
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if (local_78 == (cfstringStruct *)0x0) {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_78;
    local_78 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  pcVar4 = local_78;
  local_a8 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
  local_200 = pcVar4;
  if ((long)local_a8 < (long)pcVar4) {
    local_200 = local_a8;
  }
  local_b8 = local_200;
  local_a0 = local_200;
  local_b0 = pcVar4;
  if ((long)local_200 < 7) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    local_e1 = 0;
    local_210 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      FUN_01894008();
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_210;
    }
    local_e1 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_210;
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lastObject_0269d200);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_109 = 0;
    local_230 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      FUN_018940d0();
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_230;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_230;
    }
    local_109 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_230;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_c8;
    FUN_01895184();
    _objc_retainAutoreleasedReturnValue();
    local_250 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_250 = &cf__D8E9CD;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_250;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_f0;
    FUN_01895184();
    _objc_retainAutoreleasedReturnValue();
    local_268 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_268 = &cf__444B52;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_120 = local_268;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    _objc_initWeak(auStack_128,local_28);
    puVar6 = PTR_WCRefineColorPickerController_026ceed8;
    _objc_alloc();
    pcVar1 = local_118;
    pcVar3 = local_120;
    local_188 = PTR___NSConcreteStackBlock_02578660;
    local_180 = 0xc2000000;
    local_17c = 0;
    local_178 = FUN_018954dc;
    local_170 = &DAT_02589bd8;
    _objc_copyWeak(auStack_148,auStack_128);
    pcVar2 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_120;
    local_168 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_50;
    local_160 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_78;
    local_158 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar1,pcVar3,&local_188);
    local_130 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTitle__0269cef0,&cf_SreY);
    puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_initWithRootViewController__0269d2a0,local_130);
    local_190 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar6,1,0);
    _objc_storeStrong(&local_190);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_168,0);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_128);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    local_bc = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

