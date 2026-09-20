// FUN_008a2670 @ 008a2670

undefined * FUN_008a2670(void)

{
  undefined *puVar1;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)local_18 < 0x18004e2b) {
    local_18 = (undefined *)0x18004e2b;
  }
  return local_18;
}

