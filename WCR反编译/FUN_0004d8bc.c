// FUN_0004d8bc @ 0004d8bc

void FUN_0004d8bc(undefined8 param_1)

{
  long lVar1;
  long local_70;
  long local_50;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadSessionRule_0269d998);
  if (lVar1 == 1) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadSelectedSessions_0269d950);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    if (lVar1 == 0) {
      local_50 = *(long *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadExcludeSelectedSessi_0269d958);
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar1;
    if (lVar1 == 0) {
      local_70 = *(long *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

