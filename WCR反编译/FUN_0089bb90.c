// FUN_0089bb90 @ 0089bb90

ulong FUN_0089bb90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToString__0269ccc8,&cf_all);
  _objc_storeStrong(&local_18,0);
  return (ulong)puVar1 & 0xffffffff;
}

