// _WCRSFURLSchemePlaceholders @ 01635914

void _WCRSFURLSchemePlaceholders(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_e0;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  if (local_50 == (cfstringStruct *)0x0) {
    local_e0 = &cf___;
  }
  else {
    local_e0 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if (local_e0 == (cfstringStruct *)0x0) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_5c = 1;
    local_48 = puVar4;
  }
  else {
    local_68 = 0;
    local_78 = 0;
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf____________,0,&local_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_68,local_78);
    local_70 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_5c = 1;
      local_48 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_80 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      puVar1 = local_70;
      pcVar6 = local_58;
      local_88 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar3 = local_58;
      local_38 = 0;
      local_30 = 0;
      local_98 = 0;
      local_d0 = PTR___NSConcreteGlobalBlock_02578658;
      local_c8 = 0xd0800000;
      local_c4 = 0;
      local_c0 = FUN_01635cb4;
      local_b8 = &DAT_025878a0;
      local_90 = pcVar6;
      local_40 = pcVar6;
      local_28 = pcVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_88;
      local_b0 = pcVar3;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_80;
      local_a8 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_enumerateMatchesInString_options_0269ef28,pcVar2,0,local_98,local_90,
                 &local_d0);
      puVar4 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar4;
      local_5c = 1;
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

