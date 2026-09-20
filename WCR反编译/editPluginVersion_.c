// editPluginVersion: @ 0178d500

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCPluginsViewControllerBehavior::editPluginVersion_
          (WCPluginsViewControllerBehavior *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 in_d0;
  cfstringStruct *local_a0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = (cfstringStruct *)PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  _objc_initWeak(auStack_38,local_18);
  puVar4 = PTR_WCRefineHelper_026ce000;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayVersionForPlugin__026b46f8,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a0 = &::cf___;
  }
  FUN_0178d2c4();
  pcVar1 = local_30;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_0178d754;
  local_68 = &DAT_02588ad0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_28;
  local_60 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  _objc_copyWeak(auStack_50,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,puVar4,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_O9eHr_gS,
             &cf_SfbccNub>f_yvHr_geW_eQ,local_a0,&local_80);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

