// FUN_0056583c @ 0056583c

void FUN_0056583c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  int local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar4 = local_30;
  FUN_00566368(local_30,&cf_copyedText);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  if (uVar4 == 0) {
    uVar1 = local_30;
    FUN_00566368(local_30,&cf_copiedText);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_38 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  uVar4 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar4 & 1) != 0) &&
     (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar4 = local_38, uVar1 != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    local_48 = 1;
    goto LAB_00565d84;
  }
  uVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = uVar1 & 0xffffffff;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_28 = uVar4;
      goto LAB_00565d84;
    }
  }
  uVar1 = local_30;
  FUN_00566368(uVar4,local_30,&cf_contentView);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getTextString_026a5170);
  if ((uVar1 & 1) == 0) {
LAB_00565bfc:
    uVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar4 & 1) != 0) {
      uVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_60 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar4 = uVar1 & 0xffffffff;
      if ((uVar1 & 1) == 0) {
LAB_00565d30:
        local_48 = 0;
      }
      else {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        uVar1 = local_60;
        uVar4 = 0;
        if (uVar3 == 0) goto LAB_00565d30;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar1;
        uVar4 = 1;
        local_48 = 1;
      }
      _objc_storeStrong(uVar4,&local_60,0);
      if (local_48 != 0) goto LAB_00565d64;
    }
    local_28 = 0;
    local_48 = 1;
  }
  else {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getTextString_026a5170);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = uVar1 & 0xffffffff;
    if ((uVar1 & 1) == 0) {
LAB_00565bd8:
      local_48 = 0;
    }
    else {
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      uVar1 = local_58;
      uVar4 = 0;
      if (uVar3 == 0) goto LAB_00565bd8;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      uVar4 = 1;
      local_48 = 1;
    }
    _objc_storeStrong(uVar4,&local_58,0);
    if (local_48 == 0) goto LAB_00565bfc;
  }
LAB_00565d64:
  _objc_storeStrong(&local_50,0);
LAB_00565d84:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

