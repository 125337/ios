// selectMomentsDetailedTimeColor @ 01c10724

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::selectMomentsDetailedTimeColor(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_f8;
  undefined *local_d8;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  ID local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  uVar2 = DAT_02323f78;
  uVar1 = DAT_02323e10;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_d8 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    local_d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_d8;
  }
  local_49 = puVar6 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_hexStringFromColor__026b30d0,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar4 = local_38;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_f8 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    local_f8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,uVar1,DAT_02323db8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_f8;
  }
  local_61 = puVar6 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_hexStringFromColor__026b30d0,local_f8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar7 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  puVar6 = local_38;
  puVar5 = local_40;
  puVar4 = local_58;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01c10bd8;
  local_88 = &DAT_02586c58;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_80 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar5,puVar4,&local_a0);
  local_70 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setTitle__0269cef0,&cf_ber);
  puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar4,1);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

