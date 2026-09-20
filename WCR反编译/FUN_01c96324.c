// FUN_01c96324 @ 01c96324

void FUN_01c96324(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    lVar1 = local_18;
    FUN_01c96cac(local_18,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPluginFeatureSuppressedContro_026c2c10);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

