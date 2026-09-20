// pickSidebarColor @ 01d13cec

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickChatSettingsViewController::pickSidebarColor(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_f0;
  cfstringStruct *local_c8;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined1 auStack_58 [8];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = (cfstringStruct *)PTR_WCRefineColorPickerController_026ceed8;
  local_38 = puVar3;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar3 = local_38;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatSidebarColorLight_026b1158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_hexStringFromColor__026b30d0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_c8 = &cf__FFFFFFFF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c8;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar4 = local_40;
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_quickChatSidebarColorDark_026b1150);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_hexStringFromColor__026b30d0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_f0 = &cf__1F1F1FFF;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_initWeak(auStack_58,local_28);
  puVar3 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  pcVar2 = local_40;
  pcVar1 = local_48;
  pcVar4 = local_50;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01d14104;
  local_88 = &DAT_0258c140;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = pcVar2;
  _objc_copyWeak(auStack_78,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,pcVar1,pcVar4,&local_a0);
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitle__0269cef0,&cf_Ohr);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithRootViewController__0269d2a0,local_60);
  local_a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1,0);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_60,0);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_80,0);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

