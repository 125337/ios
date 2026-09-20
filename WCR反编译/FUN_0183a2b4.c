// FUN_0183a2b4 @ 0183a2b4

void FUN_0183a2b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    FUN_0183a0d8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKey__0269e048,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      puVar2 = local_20;
      puVar1 = local_30;
      puVar3 = local_40;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_setObject_forKey_cost__0269e0c0,puVar3,puVar2,puVar4);
      }
      puVar3 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
      local_24 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = puVar3;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

