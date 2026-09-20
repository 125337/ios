// selectSessionsFromContactPicker @ 01941d10

/* Function Stack Size: 0x10 bytes */

void WCRefineDoNotDisturbSettingsViewController::selectSessionsFromContactPicker
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doNotDisturbSelectedSessions_026abec0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01941e98;
  local_50 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentOfficialContactPickerFrom_026ac950,IVar2,&cf_bO,puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

