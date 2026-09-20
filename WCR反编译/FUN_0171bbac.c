// FUN_0171bbac @ 0171bbac

/* WARNING: Type propagation algorithm not settling */

void FUN_0171bbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long local_30 [3];
  undefined8 local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  puVar1 = PTR_ToastManager_026cef28;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_ToastManager_026cef28,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_30[0] != 0) {
    (**(code **)(local_30[0] + 0x10))();
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

