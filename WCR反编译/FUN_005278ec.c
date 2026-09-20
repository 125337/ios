// FUN_005278ec @ 005278ec

void FUN_005278ec(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  (*DAT_028cb1d8)(param_1,param_2,param_3 & 1);
  FUN_00537d50(param_1);
  FUN_00537d34();
  puVar1 = PTR_WCRefineMomentsAutoRefreshManager_026ce730;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsAutoRefreshManager_026ce730,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

