// FUN_0069b884 @ 0069b884

byte FUN_0069b884(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint local_68;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = &cf_getCellCount;
  _NSSelectorFromString();
  pcVar3 = &cf_getCellAt_;
  local_28 = pcVar2;
  _NSSelectorFromString();
  uVar4 = local_20;
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_30),
     (uVar4 & 1) == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    local_40 = uVar4;
    for (local_48 = 0; local_48 < local_40; local_48 = local_48 + 1) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      FUN_0069c020(uVar4,&cf_userInfo);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_58 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_68 = 0;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefineBuiltInPluginHub);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = (uint)uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      bVar1 = (local_68 & 1) != 0;
      if (bVar1) {
        local_11 = 1;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      if (local_34 != 0) goto LAB_0069bb00;
    }
    local_11 = 0;
    local_34 = 1;
  }
LAB_0069bb00:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

