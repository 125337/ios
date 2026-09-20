// wcr_pushViewController: @ 018ebba0

/* Function Stack Size: 0x18 bytes */

void WCRefineClipboardSettingsViewController::wcr_pushViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_PushViewController_animated_;
    local_38 = IVar1;
    _NSSelectorFromString();
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_pushViewController_animated__0269d590,local_28,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2,local_28,1);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

