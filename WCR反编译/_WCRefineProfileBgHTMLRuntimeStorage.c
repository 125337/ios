// _WCRefineProfileBgHTMLRuntimeStorage @ 01cbd304

void _WCRefineProfileBgHTMLRuntimeStorage(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01cbd47c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithContentsOfFile__026a3348,
               local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_58 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_58 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

