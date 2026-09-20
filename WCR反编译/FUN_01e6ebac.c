// FUN_01e6ebac @ 01e6ebac

double FUN_01e6ebac(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  FUN_01e6f90c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  FUN_01e6fbd4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
  if (0.0 < param_1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    FUN_01e9bfa4();
    local_34 = 1;
    local_18 = param_1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_toDoCardWebAutoHeightSignature);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_51 = false;
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      local_88 = &cf___;
    }
    else {
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_toDoCardWebAutoHeightSignature
                );
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_toDoCardWebAutoRawHeight);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_69 = ((ulong)pcVar6 & 1) == 0;
    if (local_69) {
      local_a0 = (cfstringStruct *)0x0;
    }
    else {
      local_a0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_toDoCardWebAutoRawHeight);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_a0;
    }
    local_69 = !local_69;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_28);
    if ((((ulong)pcVar4 & 1) == 0) ||
       (pcVar4 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608), param_1 <= 0.0))
    {
      local_18 = 0.0;
    }
    else {
      FUN_01e6fbd4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608);
      FUN_01e9bfa4();
      local_18 = param_1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

