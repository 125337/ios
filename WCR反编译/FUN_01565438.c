// FUN_01565438 @ 01565438

void FUN_01565438(void)

{
  undefined *puVar1;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      local_18 = local_30;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar1;
      }
    }
    else {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

