// FUN_007cd424 @ 007cd424

void FUN_007cd424(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_60;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar3 = local_50;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_48 = 0;
    local_60 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    uVar4 = local_50;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_40 = uVar4;
    local_28 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,uVar3,0,0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_70 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (puVar2 != (undefined *)0x7fffffffffffffff) {
        puVar2 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = puVar2 == (undefined *)0x0;
      }
    }
    uVar3 = local_50;
    if (bVar1) {
      local_48 = 0;
    }
    else {
      puVar2 = local_70;
      puVar5 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_substringWithRange__0269d138,puVar2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
    }
    local_60 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

