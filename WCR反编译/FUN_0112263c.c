// FUN_0112263c @ 0112263c

void FUN_0112263c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_38;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  FUN_01119e60();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  if (param_1 == 0) {
    local_38 = (undefined *)0x0;
  }
  else {
    local_38 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfURL__026af148,
               param_1);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_38;
  if (param_1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_50 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_50 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_50);
  return;
}

