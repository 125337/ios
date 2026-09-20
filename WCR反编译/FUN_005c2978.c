// FUN_005c2978 @ 005c2978

void FUN_005c2978(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0059d260(local_20,&cf_weappInfo);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0059d260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  lVar1 = local_28;
  if (lVar2 == 0) {
    lVar1 = local_20;
    FUN_0059d260(0,local_20,&cf_snsWeAppInfo);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_0059d260();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
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

