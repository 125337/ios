// attachKeyboardSyncToPageSheet:inputResponder:preferredContentHeight: @ 00f95728

/* Function Stack Size: 0x28 bytes */

void WCRefineHelper::attachKeyboardSyncToPageSheet_inputResponder_preferredContentHeight_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  ulong uVar1;
  undefined8 local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 != 0) &&
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_showWithAnimated__0269e5a8),
     (uVar1 & 1) != 0)) {
    FUN_00f957f0(param_5,local_28,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

