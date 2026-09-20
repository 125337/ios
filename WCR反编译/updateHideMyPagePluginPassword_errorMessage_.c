// updateHideMyPagePluginPassword:errorMessage: @ 02095130

/* Function Stack Size: 0x20 bytes */

bool WCRefineConfig::updateHideMyPagePluginPassword_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_isValidHideMyPagePluginPassword__026c2a38,local_30,param_4);
  local_11 = (IVar1 & 1) != 0;
  if ((bool)local_11) {
    uVar2 = local_30;
    FUN_01fd868c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHideMyPagePluginPassword__026ca328);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setHideMyPagePluginPasswordConfi_026ca330,1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

