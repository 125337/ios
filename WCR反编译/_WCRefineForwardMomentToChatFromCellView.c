// _WCRefineForwardMomentToChatFromCellView @ 0059c858

void _WCRefineForwardMomentToChatFromCellView(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = &cf_WCRefine_forwardMomentToChat_;
  _NSSelectorFromString();
  if (((local_18 == 0) || (local_20 == 0)) ||
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRub_g_b0R_YSlSeQS)
    ;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

