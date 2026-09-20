// FUN_005277e4 @ 005277e4

void FUN_005277e4(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  FUN_00537c48(param_1);
  FUN_00537d34();
  puVar1 = PTR_WCRefineMomentsAutoRefreshManager_026ce730;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsAutoRefreshManager_026ce730,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*DAT_028cb1c8)(param_1,param_2,param_3 & 1);
  return;
}

