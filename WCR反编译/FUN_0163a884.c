// FUN_0163a884 @ 0163a884

void FUN_0163a884(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_18;
  
  FUN_0163a868();
  if ((param_1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      local_18 = &cf_WCRSuperFloatBallWindow;
      _NSClassFromString();
      if (local_18 == (cfstringStruct *)0x0) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        pcVar3 = &cf_sharedInstance;
        _NSSelectorFromString(&cf_sharedInstance);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

