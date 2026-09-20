// FUN_005958a0 @ 005958a0

void FUN_005958a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 != 0) {
    _WCRefineCrashReporterBreadcrumb(&cf_moments_sched_exit);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_doExit_026a4d68);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doExit_026a4d68);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

