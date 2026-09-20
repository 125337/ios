// nameplateSpecialUserPaused: @ 020c349c

/* Function Stack Size: 0x18 bytes */

bool WCRefineConfig::nameplateSpecialUserPaused_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  byte local_6c;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nameplateSpecialUserConfigs_026ae7c8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_48;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_6c = 0;
    bVar1 = (IVar4 & 1) != 0;
    if (bVar1) {
      local_50 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_paused);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_6c = (byte)IVar4;
    }
    local_11 = local_6c & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

