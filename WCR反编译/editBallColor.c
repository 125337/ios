// editBallColor @ 01e2cb78

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::editBallColor(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  puVar2 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballColorHex_026b18b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballColorHexDark_026b19c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01e2ce10;
  local_50 = &DAT_0258bb10;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar3,puVar4,&local_68);
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0);
  pcVar1 = &cf_t_r;
  if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    pcVar1 = &cf_zagr;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTitle__0269cef0,pcVar1);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}

