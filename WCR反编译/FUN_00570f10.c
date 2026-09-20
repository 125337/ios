// FUN_00570f10 @ 00570f10

void FUN_00570f10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00566368(local_20,&cf_itemID);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_005705cc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  lVar1 = local_28;
  if (lVar2 == 0) {
    lVar1 = local_20;
    FUN_00566368(0,local_20,&cf_tid);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_005705cc();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

