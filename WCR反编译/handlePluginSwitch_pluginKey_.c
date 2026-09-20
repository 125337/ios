// handlePluginSwitch:pluginKey: @ 01d7f57c

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchSettingsViewController::handlePluginSwitch_pluginKey_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((local_38 == 0) ||
     (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_50 = 1;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_isEqualToString__0269ccc8,&cf_searchPluginHuangBai),
       (uVar2 & 1) == 0)) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      uVar2 = local_38;
      local_90 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isOn_0269d560);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_numberWithBool__0269ce60,uVar2 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setValue_forKey__0269d300,puVar4,local_40);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_saveConfig_0269e5d0);
      _objc_storeStrong(&local_90,0);
      local_50 = 0;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOn_animated__026a8098,0,1);
      uVar1 = local_38;
      puVar4 = PTR_WCRefineHelper_026ce000;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_01d7f958;
      local_70 = &DAT_02583a90;
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = local_58;
      local_68 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf__nc_y,&cf_N_ec_OSuU,
                 &::cf_N,&local_88,&cf_fN,0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      local_50 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

