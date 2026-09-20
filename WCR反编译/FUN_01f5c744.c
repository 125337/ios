// FUN_01f5c744 @ 01f5c744

void FUN_01f5c744(long param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  pcVar1 = &cf_NObR;
  if ((local_19 & 1) == 0) {
    pcVar1 = &cf_NO1Y_;
  }
  if (local_28 == (cfstringStruct *)0x0) {
    local_58 = &cf__NO;
    if ((local_19 & 1) == 0) {
      local_58 = &cf__gw;
    }
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_showResultTitle_message__026c94c8,pcVar1,local_58
            );
  _objc_storeStrong(&local_28,0);
  return;
}

