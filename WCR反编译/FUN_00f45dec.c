// FUN_00f45dec @ 00f45dec

void FUN_00f45dec(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *local_50;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = DAT_028e2d58;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = uVar1;
  _objc_storeStrong(&DAT_028e2d58,0);
  DAT_028e2d68 = 0;
  _objc_storeStrong(&DAT_028e2d60,0);
  if (local_18 == (cfstringStruct *)0x0) {
    local_50 = &cf_lh_1Y_;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_50,
             local_20);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

