// FUN_003981f8 @ 003981f8

void FUN_003981f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    lVar1 = *(long *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

