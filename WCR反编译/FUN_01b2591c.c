// FUN_01b2591c @ 01b2591c

byte FUN_01b2591c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_54;
  ulong local_40;
  ulong local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_01b32c70();
    bVar2 = false;
    bVar1 = false;
    local_54 = 1;
    if ((uVar5 & 1) == 0) {
      local_30 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar5 = local_30;
      FUN_01b32c70();
      local_54 = 1;
      if ((uVar5 & 1) == 0) {
        local_40 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionName);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar5 = local_40;
        FUN_01b32c70();
        local_54 = (byte)uVar5;
      }
    }
    local_11 = local_54 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

