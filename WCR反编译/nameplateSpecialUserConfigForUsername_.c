// nameplateSpecialUserConfigForUsername: @ 020c2b40

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::nameplateSpecialUserConfigForUsername_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nameplateSpecialUserConfigs_026ae7c8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_48;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((IVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_configured);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_18 = local_48;
      if ((IVar4 & 1) == 0) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

