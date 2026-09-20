// WCRefineMainFrameTopSearchMode @ 02120fc4

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::WCRefineMainFrameTopSearchMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_64;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineMainFrameTopSearchMode);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_WCRefineSearchEntryMainFrameButton);
    _objc_retainAutoreleasedReturnValue();
    local_64 = 0;
    local_50 = IVar2;
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_boolValue_026ca540);
      local_64 = (uint)IVar2;
    }
    local_18 = (ID)(int)(uint)((local_64 & 1) != 0);
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    local_40 = IVar2;
    if (((long)IVar2 < 0) || (2 < (long)IVar2)) {
      local_18 = 0;
      local_44 = 1;
    }
    else {
      local_44 = 1;
      local_18 = IVar2;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

