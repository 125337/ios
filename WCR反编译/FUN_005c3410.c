// FUN_005c3410 @ 005c3410

void FUN_005c3410(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_80;
  long local_50;
  long local_40;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0059d260(local_20,&cf_itemID);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = local_20;
    FUN_0059d260(0,local_20,&cf_tid);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_40;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  else {
    local_80 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

