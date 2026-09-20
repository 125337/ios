// FUN_007668f8 @ 007668f8

void FUN_007668f8(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  ulong local_30;
  ulong local_28;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_19 = param_2;
  FUN_00766f50();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_28 = uVar2;
  _objc_getAssociatedObject(local_18,DAT_026f4640);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  if ((local_19 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_boolValue_026ca540);
    if ((uVar3 & 1) != 0) {
      _objc_setAssociatedObject(local_18,DAT_026f4640,0,1);
      pcVar4 = &cf_setNeedHidePlaceHolder_;
      _NSSelectorFromString();
      uVar2 = local_28;
      local_48 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_48,0);
      }
      pcVar4 = &cf_wcr_special_original_setPlaceHolderColor_;
      _NSSelectorFromString();
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c98,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_placeholderTextColor_026a7da0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_58;
      local_58 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_50);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_50,local_58);
      }
      FUN_007670b0(local_28,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  else {
    pcVar4 = &cf_setNeedHidePlaceHolder_;
    _NSSelectorFromString();
    uVar2 = local_28;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_38,1);
    }
    pcVar4 = &cf_setPlaceHolderColor_;
    _NSSelectorFromString();
    uVar3 = local_18;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar4);
    uVar2 = local_18;
    pcVar4 = local_40;
    if ((uVar3 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,local_40);
    uVar2 = local_28;
    pcVar4 = local_40;
    if ((uVar3 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (uVar3 != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    FUN_007670b0(local_28,1);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
    uVar2 = local_18;
    uVar1 = DAT_026f4640;
    if ((uVar3 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

