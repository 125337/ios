// FUN_00764fb0 @ 00764fb0

byte FUN_00764fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  long local_40;
  byte local_31;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  uVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      uVar2 == 0)) ||
     (lVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_31 = 0;
    local_4c = 1;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf__N);
    if ((uVar2 & 1) == 0) {
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48);
      local_31 = (byte)lVar3 & 1;
      local_4c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_escapedPatternForString__0269ef40,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_58 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N,&cf___d__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,local_60,0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_40;
      local_31 = false;
      local_68 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        local_28 = 0;
        local_20 = 0;
        local_30 = lVar5;
        local_18 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_numberOfMatchesInString_options__026a7d90,lVar3,0,0,lVar5);
        local_31 = puVar1 != (undefined *)0x0;
      }
      local_4c = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

