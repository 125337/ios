// showPageSheet:animated:thenFocus: @ 00f95a60

/* Function Stack Size: 0x24 bytes */

void WCRefineHelper::showPageSheet_animated_thenFocus_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  ulong uVar1;
  ulong local_38;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if (local_28 != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showWithAnimated__0269e5a8,local_29 & 1);
    }
    if ((local_38 != 0) &&
       (uVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
       (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_becomeFirstResponder_0269d108);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

