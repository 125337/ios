// hideWeToastAndShowDoneWithText:fromToast: @ 00f99fc0

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::hideWeToastAndShowDoneWithText_fromToast_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  cfstringStruct *local_58;
  ulong local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar3 = local_30;
  if (local_30 == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_58 = &cf__b;
    }
    else {
      local_58 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showWeToastDoneWithText__0269cee0,local_58)
    ;
  }
  else {
    pcVar2 = &cf_privateHideToast;
    _NSSelectorFromString(&cf_privateHideToast);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = local_30;
    if ((uVar3 & 1) != 0) {
      pcVar2 = &cf_privateHideToast;
      _NSSelectorFromString(&cf_privateHideToast);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_performSelector__026ca7b8,pcVar2);
    }
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_showDoneToastWithText__026acd48);
    if ((uVar3 & 1) == 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_a0 = &cf__b;
      }
      else {
        local_a0 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showModernToast__0269ce78,local_a0);
    }
    else {
      if (local_28 == (cfstringStruct *)0x0) {
        local_88 = &cf__b;
      }
      else {
        local_88 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_performSelector_withObject__026ca7c0,
                 PTR_s_showDoneToastWithText__026acd48,local_88);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

