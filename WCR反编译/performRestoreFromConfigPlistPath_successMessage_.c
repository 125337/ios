// performRestoreFromConfigPlistPath:successMessage: @ 01ca2e80

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginManagementViewController::performRestoreFromConfigPlistPath_successMessage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_e0;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (cfstringStruct *)0x0;
  local_40 = 0;
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_applyWCRefineConfigPlistAtPath_e_026acf78,local_28,
             &local_40);
  _objc_storeStrong(&local_38,local_40);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_e0 = &cf_vMn_1Y_;
    }
    else {
      local_e0 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showErrorAlert_message__026c2da8,&cf_b_Y1Y_,local_e0);
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01ca3090;
    local_58 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_50 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar1;
    _dispatch_async(puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

