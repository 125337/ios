// FUN_000f2368 @ 000f2368

void FUN_000f2368(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  cfstringStruct *local_40 [3];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  FUN_000f30c4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    lVar1 = local_18;
    FUN_000f2598();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40[0] = &cf_fe_INR_HQ0Rbv;
    if (lVar2 == 0) {
      local_40[0] = &cf_elSS_MRJ_Y_a;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_40[0]);
    _objc_storeStrong(local_40,0);
  }
  else {
    FUN_000ed584(local_18,local_20,local_28,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

