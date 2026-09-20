// FUN_005d9250 @ 005d9250

void FUN_005d9250(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_005d93c8(local_18,"m_tableViewManager");
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_tableViewManager);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

