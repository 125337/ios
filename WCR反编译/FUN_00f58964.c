// FUN_00f58964 @ 00f58964

void FUN_00f58964(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_this___wxLibrary),
     (uVar2 & 1) != 0)) {
    local_38 = 0;
    local_44 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf_advert_group_getadvert_getAdPreloadData_ad_posid__ads___ads__advertisement_,1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_50 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_38 = 0;
      local_44 = 1;
    }
    else {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = uVar3;
      local_18 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_firstMatchInString_options_range_0269ef48,uVar2,0,0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_40;
      local_58 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_38 = 0;
      }
      else {
        puVar4 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_substringWithRange__0269d138,puVar1,puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

