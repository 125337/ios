// FUN_0011f10c @ 0011f10c

void FUN_0011f10c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_00121400();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_30;
  if (lVar1 == 0) {
    lVar2 = local_28;
    FUN_00121400(0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

