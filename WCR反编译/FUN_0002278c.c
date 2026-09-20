// FUN_0002278c @ 0002278c

void FUN_0002278c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00020d74();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar2 = local_28;
  if (lVar1 == 0) {
    lVar2 = local_20;
    FUN_00016f40();
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

