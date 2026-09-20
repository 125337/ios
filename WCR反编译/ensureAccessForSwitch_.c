// ensureAccessForSwitch: @ 01dee880

/* Function Stack Size: 0x18 bytes */

bool WCRefineStepCountSettingsViewController::ensureAccessForSwitch_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_01dee85c();
  local_11 = ((ulong)puVar1 & 1) == 0;
  if (local_11) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOn_animated__026a8098,0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__nc_y
               ,&cf_S_MRHr_gf_g,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  local_11 = !local_11;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

