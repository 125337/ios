// FUN_009d381c @ 009d381c

void FUN_009d381c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_20;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)puVar1 & 1) == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar2 = local_20;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar1 == (undefined *)0x0) {
      local_40 = (undefined *)0x0;
    }
    else {
      local_40 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_40;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

