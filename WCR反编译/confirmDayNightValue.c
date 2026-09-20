// confirmDayNightValue @ 01aeeccc

/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripSettingsViewController::confirmDayNightValue(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  cfstringStruct *local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_48 = 0;
  IVar3 = local_18;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingDayNightSelector_026be5a0);
  if (IVar3 == 0) {
    FUN_01aef04c(0,0,0,local_30,0,&local_40,&local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5b0);
  }
  else if (IVar3 == 1) {
    FUN_01aef04c(0,0,0,local_30,0,&local_40,&local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5c0);
  }
  else if (IVar3 == 2) {
    FUN_01aef04c(0x3ff0000000000000,0x3ff0000000000000,DAT_02323c68,0x4014000000000000,local_30,1,
                 &local_40,&local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5d0);
  }
  else if (IVar3 == 3) {
    FUN_01aef04c(0x3ff0000000000000,0x3ff0000000000000,0,local_30,1,&local_40,&local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,local_38,PTR_s_setHomeAvatarStripBackgroundMedi_026be5e0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

