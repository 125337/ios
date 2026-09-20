// FUN_002967f4 @ 002967f4

void FUN_002967f4(long param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_78 = &cf_OX_1Y_;
    }
    else {
      local_78 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_78,
               *(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (local_28 == (cfstringStruct *)0x0) {
      local_60 = &cf__b_OX_0RvQ;
    }
    else {
      local_60 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_60,
               *(undefined8 *)(param_1 + 0x20));
    FUN_0028f70c(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

