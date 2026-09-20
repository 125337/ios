// FUN_0041d1a8 @ 0041d1a8

byte FUN_0041d1a8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_74;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0041df0c();
    local_74 = 1;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      local_38 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_38;
      FUN_0041df0c();
      local_74 = (byte)uVar4;
    }
    local_11 = local_74 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

