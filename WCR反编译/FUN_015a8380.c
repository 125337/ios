// FUN_015a8380 @ 015a8380

void FUN_015a8380(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((local_19 & 1) == 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_48 = &cf_ub1Y_;
    }
    else {
      local_48 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_48,
               *(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

