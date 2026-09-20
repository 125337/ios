// hideWeToast: @ 00f9a400

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::hideWeToast_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 != 0) {
    pcVar1 = &cf_privateHideToast;
    _NSSelectorFromString();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performSelector__026ca7b8,pcVar1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

