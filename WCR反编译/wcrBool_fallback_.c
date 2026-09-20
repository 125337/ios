// wcrBool:fallback: @ 017ce07c

/* Function Stack Size: 0x1c bytes */

bool WCRefineAISessionSettingsViewController::wcrBool_fallback_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  uint local_48;
  ID local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_38 == 0) {
    local_48 = local_29 & 1;
  }
  else {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    local_48 = (uint)IVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return (uint)(local_48 != 0);
}

