// FUN_016c1e8c @ 016c1e8c

void FUN_016c1e8c(undefined8 param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  long local_28;
  byte local_19;
  undefined8 local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

