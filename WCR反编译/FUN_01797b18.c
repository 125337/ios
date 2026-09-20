// FUN_01797b18 @ 01797b18

void FUN_01797b18(undefined *param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  FUN_017990c4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = param_1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

