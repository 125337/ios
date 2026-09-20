// FUN_002944d4 @ 002944d4

void FUN_002944d4(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardVoiceFromMediaPath_fr_026a1810,
             *(undefined8 *)(param_1 + 0x20),local_20);
  FUN_0028fbf8(0x405e000000000000,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_20,0);
  return;
}

