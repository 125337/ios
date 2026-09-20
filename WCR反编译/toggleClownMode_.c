// toggleClownMode: @ 0174b050

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAutoRedeemViewController::toggleClownMode_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 uVar3;
  dispatch_time_t dVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  byte local_31;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  local_31 = (byte)uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setThemeBoxClownModeEnabled__026b4160,local_31 & 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  if ((local_31 & 1) == 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_themeBoxActualRedeemedCount_026a8568);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setThemeBoxRedeemedCount__026a8580,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  }
  else {
    dVar4 = _dispatch_time(0,100000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0174b26c;
    local_48 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = IVar1;
    _dispatch_after(dVar4,puVar2,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

