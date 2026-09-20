// FUN_017acd14 @ 017acd14

void FUN_017acd14(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  FUN_017ac578();
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

