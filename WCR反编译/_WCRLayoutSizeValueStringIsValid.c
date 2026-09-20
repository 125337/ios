// _WCRLayoutSizeValueStringIsValid @ 00431350

byte _WCRLayoutSizeValueStringIsValid(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_11 = false;
    local_30 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       6 < uVar2)) {
      local_11 = false;
      local_30 = 1;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_0);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        FUN_00431774();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar2;
        if (uVar2 == 0) {
          local_11 = false;
        }
        else {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf__);
          if ((uVar2 == 0x7fffffffffffffff) ||
             (uVar3 = local_38,
             (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
             (uVar3 - uVar2) - 1 < 3)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
            local_11 = false;
            if (DAT_02324160 <= param_1) {
              local_11 = param_1 <= DAT_02324158;
            }
          }
          else {
            local_11 = false;
          }
        }
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_11 = false;
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

