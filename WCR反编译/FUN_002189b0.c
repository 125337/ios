// FUN_002189b0 @ 002189b0

void FUN_002189b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_d0;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = param_3;
  local_30 = param_1;
  if (local_28 == (undefined *)0x0) {
    local_3c = 1;
  }
  else {
    FUN_0021960c(local_28);
    puVar1 = local_28;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      local_d0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_d0;
    }
    else {
      local_60 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_d0;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_70);
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_cornerRadius);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_borderWidth);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_borderColor);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActions__0269f1c0,local_58[0]);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeAnimationForKey__026ca7f0,&cf_cornerRadius);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_28,PTR_s_setCornerRadius__026ca900);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMaskedCorners__0269ebc8,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMasksToBounds__026ca9b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setBorderWidth__026ca898);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBorderColor__026ca890,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    _objc_storeStrong(local_58,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

