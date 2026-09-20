// FUN_0112e978 @ 0112e978

void FUN_0112e978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar3 = PTR_WCRefineQuickRemarkEditor_026ce820;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickRemarkEditor_026ce820,PTR_s_applyRemark_toContact__026af298,local_20,
             *(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_O9eYl1Y_);
  }
  else {
    lVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    pcVar1 = &cf__O9eYl;
    if (lVar4 == 0) {
      pcVar1 = &cf__nzzYl;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_resignFirstResponder_0269ea18);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
    }
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
    }
    FUN_0112e938();
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

