// FUN_002d2b18 @ 002d2b18

void FUN_002d2b18(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar1 = local_20;
  local_18 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  if (lVar2 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    FUN_002d38b0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_absolutePathFromStored_underDire_026a1bd8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

