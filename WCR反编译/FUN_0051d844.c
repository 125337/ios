// FUN_0051d844 @ 0051d844

void FUN_0051d844(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_onLikeButtonSelected_;
  _NSSelectorFromString();
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MR_bN_ecp_);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

