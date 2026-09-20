// FUN_00f8a214 @ 00f8a214

byte FUN_00f8a214(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50 [3];
  ulong local_38;
  int local_2c;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_1;
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    local_38 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_name_0269d828);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_gaussianblur);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_50[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_containsString__0269d0b0,&cf_blur),
         (uVar1 & 1) == 0)) {
        local_2c = 0;
      }
      else {
        uVar1 = local_20;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputRadius);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_11 = 1;
        local_2c = 1;
      }
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
    if (local_2c == 0) {
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

