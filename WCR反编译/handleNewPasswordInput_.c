// handleNewPasswordInput: @ 01a33cd4

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleNewPasswordInput_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  local_30 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isValidPassword__026bc358,uVar3);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((IVar4 & 1) == 0) {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01a33e4c;
    local_40 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,&cf__x___N6,
               &::cf__,&local_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showConfirmNewPasswordInputDialo_026bc398,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

