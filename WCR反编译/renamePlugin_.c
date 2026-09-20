// renamePlugin: @ 0178d09c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCPluginsViewControllerBehavior::renamePlugin_
          (WCPluginsViewControllerBehavior *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  _objc_initWeak(auStack_38,local_18);
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_displayTitleForPlugin__026b1a30,local_28);
  _objc_retainAutoreleasedReturnValue();
  FUN_0178d2c4();
  puVar1 = local_30;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_0178d2d4;
  local_68 = &DAT_02588ad0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_28;
  local_60 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  _objc_copyWeak(auStack_50,auStack_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,puVar3,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf__TTcN,&cf_O9ecN>f_yTy,
             puVar4,&local_80);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

