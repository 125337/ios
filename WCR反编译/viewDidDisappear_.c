// viewDidDisappear: @ 01e0cc18

/* Function Stack Size: 0x14 bytes */

void WCRefineSuperFloatButtonConfigViewController::viewDidDisappear_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = PTR_WCRefineSuperFloatButtonConfigViewController_026d0130;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_viewDidDisappear__0269de98,param_3 & 1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_deferRuntimeApply_026c5cd0);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDeferRuntimeApply__026c5cd8,0);
    _WCRSuperFloatNotifySettingsChanged();
  }
  return;
}

