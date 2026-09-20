// FUN_0171b9c0 @ 0171b9c0

void FUN_0171b9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_ToastManager_026cef28;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_ToastManager_026cef28,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

