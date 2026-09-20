// FUN_00686470 @ 00686470

void FUN_00686470(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  if ((local_19 & 1) == 0) {
    FUN_00684440(local_28);
  }
  else {
    FUN_00686558(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

