// FUN_00515398 @ 00515398

void FUN_00515398(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = DAT_028caff0;
  DAT_028cb058 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = lVar1;
  _objc_storeStrong(&DAT_028caff0,0);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,local_20);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_20,
               local_28);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

