// FUN_01fe5568 @ 01fe5568

void FUN_01fe5568(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_01fd868c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    local_18 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (uVar2 == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_longLongValue_0269d5e0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_numberWithLongLong__0269d808,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_longLongValue_0269d5e0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithLongLong__0269d808,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

