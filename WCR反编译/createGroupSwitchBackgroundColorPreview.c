// createGroupSwitchBackgroundColorPreview @ 01c87dc4

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginContainerSettingsViewController::createGroupSwitchBackgroundColorPreview
             (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_1a0;
  undefined *local_158;
  undefined *local_c8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  uVar5 = DAT_02324040;
  uVar1 = DAT_02323e00;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar2;
  _objc_alloc();
  uVar6 = 0;
  uVar4 = 0;
  uVar7 = 0x4046000000000000;
  uVar8 = 0x4034000000000000;
  FUN_01c86a60();
  local_60 = uVar4;
  local_58 = uVar6;
  local_50 = uVar7;
  local_48 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar6,uVar7,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = puVar3;
  _objc_alloc();
  uVar7 = 0;
  uVar8 = 0x4034000000000000;
  uVar4 = uVar7;
  uVar6 = uVar8;
  FUN_01c86a60();
  local_88 = uVar7;
  local_80 = uVar4;
  local_78 = uVar8;
  local_70 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar4,uVar8,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pluginHubGroupSwitchBackgroundCo_026b44c0);
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_158 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_158 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar5,DAT_02323ff8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_158;
  }
  local_91 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBackgroundColor__026ca888,local_158);
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0x4038000000000000;
  uVar4 = 0;
  uVar7 = 0x4034000000000000;
  uVar6 = 0x4034000000000000;
  FUN_01c86a60();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar4,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pluginHubGroupSwitchBackgroundCo_026b44b8);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,DAT_02323d58,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = local_c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888,local_1a0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_a0);
  puVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

