// wcr_sendNotifyFromResultAlert: @ 01736f7c

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_sendNotifyFromResultAlert_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_dispatchAirDropNotifyFromPen_026b3d98,1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_shouldAskUsedCodeRemove_026b3d78);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_presentUsedCodeRemoveConfirm_026b3da0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

