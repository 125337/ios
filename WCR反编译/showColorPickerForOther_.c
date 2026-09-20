// showColorPickerForOther: @ 018c0484

/* Function Stack Size: 0x14 bytes */

void WCRefineChatTimeViewController::showColorPickerForOther_(ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  cfstringStruct *local_68;
  byte local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  pcVar3 = (cfstringStruct *)PTR_WCRefineColorPickerController_026ceed8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)(&cf__FFFFFF);
  local_48 = &cf__FFFFFF;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = &cf__202020;
  if ((local_31 & 1) == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorTagTextColor_026b7d98);
    if ((IVar4 & 1) == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkBackgroundColor_026b3080);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkBackgroundColor_026b3080);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textColor_0269f098);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkTextColor_026aa838);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkTextColor_026aa838);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorTagTextColor_026b7d98);
    if ((IVar4 & 1) == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColorOther_026b7da8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColorOther_026b7da8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkBackgroundColorOther_026b30b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkBackgroundColorOther_026b30b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textColorOther_026b7da0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textColorOther_026b7da0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkTextColorOther_026b3098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      pcVar3 = local_40;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_darkTextColorOther_026b3098);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hexStringFromColor__026b30d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
    }
  }
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  IVar4 = local_28;
  pcVar1 = local_48;
  pcVar3 = local_50;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_018c0e14;
  local_78 = &DAT_02589fa8;
  local_60 = local_31 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_40;
  local_70 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar1,pcVar3,&local_90);
  IVar4 = local_28;
  local_58 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorTagTextColor_026b7d98);
  local_98 = &cf_eW_;
  if ((IVar4 & 1) == 0) {
    local_98 = &cf_of;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = &cf__e;
  if ((local_31 & 1) == 0) {
    local_a0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_b_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar5,1);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

