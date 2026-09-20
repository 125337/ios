// FUN_0017f268 @ 0017f268

void FUN_0017f268(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0017ba74(local_20,"m_contact");
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_20;
    local_30 = lVar1;
    if (lVar1 == 0) {
      pcVar2 = &cf_m_contact;
      _NSSelectorFromString();
      FUN_0017bb94(lVar3,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar3 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

