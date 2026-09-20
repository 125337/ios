// FUN_003e5724 @ 003e5724

void FUN_003e5724(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar3 = local_20;
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
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
      local_18 = (undefined *)0x0;
      local_30 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithUUIDString__026a3388,local_38);
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_UUIDString_026a3380);
      _objc_retainAutoreleasedReturnValue();
      local_30 = 1;
      local_18 = puVar2;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

