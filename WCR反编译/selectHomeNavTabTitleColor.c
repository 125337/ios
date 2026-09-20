// selectHomeNavTabTitleColor @ 01e61d54

/* Function Stack Size: 0x10 bytes */

void WCRefineTextReplaceViewController::selectHomeNavTabTitleColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_120;
  undefined *local_108;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined1 auStack_80 [15];
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_59 = 0;
  bVar1 = local_38 == (undefined *)0x0;
  local_48 = puVar3;
  if (bVar1) {
    local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_108;
  }
  else {
    local_108 = local_38;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hexStringFromColor__026b30d0,local_108);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar3 = local_48;
  local_71 = 0;
  bVar1 = local_40 == (undefined *)0x0;
  if (bVar1) {
    local_120 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_120;
  }
  else {
    local_120 = local_40;
  }
  local_71 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_hexStringFromColor__026b30d0,local_120);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  _objc_initWeak(auStack_80,local_28);
  puVar5 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  puVar4 = local_50;
  puVar3 = local_68;
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_01e62244;
  local_b0 = &DAT_0258c140;
  _objc_copyWeak(auStack_a0,auStack_80);
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar4,puVar3,&local_c8);
  local_88 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setTitle__0269cef0,&cf_uvhh__r);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithRootViewController__0269d2a0,local_88);
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1,0);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_a8,0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

