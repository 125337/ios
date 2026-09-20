// FUN_00537eb4 @ 00537eb4

void FUN_00537eb4(void)

{
  undefined *puVar1;
  
  FUN_00537d34();
  puVar1 = PTR_WCRefineMomentsAutoRefreshManager_026ce730;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsAutoRefreshManager_026ce730,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

