// createFloatingSelectedBackgroundColorPreview @ 019c8858

/* Function Stack Size: 0x10 bytes */

ID WCRefineFloatingTabBarSettingsViewController::createFloatingSelectedBackgroundColorPreview
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_190;
  undefined *local_148;
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
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar1;
  _objc_alloc();
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0x4046000000000000;
  uVar6 = 0x4034000000000000;
  FUN_019be8a8();
  local_60 = uVar3;
  local_58 = uVar4;
  local_50 = uVar5;
  local_48 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = puVar2;
  _objc_alloc();
  uVar5 = 0;
  uVar6 = 0x4034000000000000;
  uVar3 = uVar5;
  uVar4 = uVar6;
  FUN_019be8a8();
  local_88 = uVar5;
  local_80 = uVar3;
  local_78 = uVar6;
  local_70 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar3,uVar6,uVar4,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarSelectedBackground_026a1a68);
  _objc_retainAutoreleasedReturnValue();
  local_91 = 0;
  local_148 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_148 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_148;
  }
  local_91 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBackgroundColor__026ca888,local_148);
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar3 = 0x4038000000000000;
  uVar4 = 0;
  uVar6 = 0x4034000000000000;
  uVar5 = 0x4034000000000000;
  FUN_019be8a8();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_floatingTabBarSelectedBackground_026a1a60);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_c8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_190 = local_c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888,local_190);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_a0);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

