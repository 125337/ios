// cachedDataAtPath: @ 010de908

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::cachedDataAtPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    FUN_010deb04();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    if (local_40 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        FUN_010deb04(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_30;
        puVar3 = local_48;
        puVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_forKey_cost__0269e0c0,puVar3,puVar1,puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

