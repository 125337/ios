// handleConfirmNewPasswordInput: @ 01a34094

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::handleConfirmNewPasswordInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_30);
  IVar1 = local_18;
  puVar3 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar4 & 1) == 0) {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01a343a8;
    local_48 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_WCRefine,&cf__N_keQve_xN,
               &::cf__,&local_60);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEncryptionPassword__026bc370,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&cf_R__x_bRO9e,&cf_nx_,&PTR___NSConcreteGlobalBlock_0258ad90);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

