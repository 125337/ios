// runTranslate @ 01675cc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::runTranslate(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_188;
  cfstringStruct *local_168;
  ID local_110;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined1 local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureCropSelection_026b24b8);
  if ((IVar2 & 1) == 0) {
    return;
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_croppedImageForTranslate_026b24c8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eVGrS_);
    local_3c = 1;
    goto LAB_01676640;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissTranslateSticker_026b2448);
  pcVar3 = &cf_WCImageTranslateLogic;
  _NSClassFromString();
  pcVar4 = &cf_translateImage_aboveView_andBackView_;
  local_48 = pcVar3;
  _NSSelectorFromString();
  local_50 = pcVar4;
  if ((local_48 != (cfstringStruct *)0x0) &&
     (pcVar5 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_instancesRespondToSelector__0269da90,pcVar4), pcVar3 = local_48,
     ((ulong)pcVar5 & 1) != 0)) {
    local_58 = (cfstringStruct *)0x0;
    pcVar4 = &cf_initWithSource_;
    _NSSelectorFromString(&cf_initWithSource_);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_instancesRespondToSelector__0269da90,pcVar4);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar4 = local_48;
      _objc_alloc_init();
      pcVar3 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      pcVar4 = local_48;
      _objc_alloc();
      pcVar3 = &cf_initWithSource_;
      _NSSelectorFromString(&cf_initWithSource_);
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar3,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_58 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_58 == (cfstringStruct *)0x0) {
LAB_016762e0:
      local_3c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImgTranslateLogic__026b2440,local_58);
      puVar6 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslateImgIdentifier__026b2690);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,local_28);
      }
      pcVar4 = local_58;
      pcVar3 = &cf_setNsBiz_;
      _NSSelectorFromString(&cf_setNsBiz_);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar3);
      pcVar3 = local_58;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = &cf_setNsBiz_;
        _NSSelectorFromString(&cf_setNsBiz_);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,&cf_wcr_sf_crop);
      }
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_110 = IVar2;
      if (IVar2 == 0) {
        local_110 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_110;
      }
      local_69 = IVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_110;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_78 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_50,local_38,local_60,IVar2);
      local_79 = SUB81(pcVar3,0);
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintBlur_026b1c90);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintLabel_026b1ca0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintLabel_026b1ca0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_W__);
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_60,0);
      if (local_3c == 0) goto LAB_016762e0;
    }
    _objc_storeStrong(&local_58,0);
    if (local_3c != 0) goto LAB_01676640;
  }
  pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_superFloatBaiduAppId_026b2698);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_88;
  local_90 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superFloatBaiduAppSecret_026b26a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_168 = local_88;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superFloatBaiduAppKey_026b26a8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_168;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superFloatBaiduAppSecret_026b26a0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_168;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_168;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if ((pcVar3 == (cfstringStruct *)0x0) ||
     (pcVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     IVar2 = local_38, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eVGr_fNS_u);
    local_3c = 0;
  }
  else {
    pcVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superFloatBaiduTargetLang_026b26b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_188 = &cf_zh;
    }
    else {
      local_188 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_superFloatBaiduTargetLang_026b26b0);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_188;
    }
    local_c1 = pcVar4 != (cfstringStruct *)0x0;
    FUN_0167665c(IVar2,local_188,local_28);
    if (local_c1) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_3c = 1;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
LAB_01676640:
  _objc_storeStrong(&local_38,0);
  return;
}

