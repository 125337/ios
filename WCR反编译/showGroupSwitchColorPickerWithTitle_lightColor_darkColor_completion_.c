// showGroupSwitchColorPickerWithTitle:lightColor:darkColor:completion: @ 01c88740

/* Function Stack Size: 0x30 bytes */

void WCRefinePluginContainerSettingsViewController::
     showGroupSwitchColorPickerWithTitle_lightColor_darkColor_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_128;
  undefined *local_110;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar3 = DAT_02324040;
  uVar2 = DAT_02323e00;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar6 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_69 = 0;
  bVar1 = local_40 == (undefined *)0x0;
  local_58 = puVar6;
  if (bVar1) {
    local_110 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,uVar3,DAT_02323ff8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_110;
  }
  else {
    local_110 = local_40;
  }
  local_69 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_hexStringFromColor__026b30d0,local_110);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar6;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar6 = local_58;
  local_81 = 0;
  bVar1 = local_48 == (undefined *)0x0;
  if (bVar1) {
    local_128 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,DAT_02323d58,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_128;
  }
  else {
    local_128 = local_48;
  }
  local_81 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_hexStringFromColor__026b30d0,local_128);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar6;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  puVar7 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  puVar5 = local_58;
  puVar4 = local_60;
  puVar6 = local_78;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_01c88bb0;
  local_a8 = &DAT_02586e08;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_50;
  local_a0 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_initWithLightHex_darkHex_callbac_026b30c8,puVar4,puVar6,&local_c0);
  local_90 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_setTitle__0269cef0,local_38);
  puVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_c8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,puVar6,1);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

