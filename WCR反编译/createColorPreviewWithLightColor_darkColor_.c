// createColorPreviewWithLightColor:darkColor: @ 01ce4f14

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineProfileCardBeautifyViewController::createColorPreviewWithLightColor_darkColor_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_1a0;
  undefined *local_158;
  undefined *local_d0;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0x4046000000000000;
  uVar7 = 0x4034000000000000;
  FUN_01cd3384();
  local_68 = uVar4;
  local_60 = uVar5;
  local_58 = uVar6;
  local_50 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = puVar2;
  _objc_alloc();
  uVar6 = 0;
  uVar7 = 0x4034000000000000;
  uVar4 = uVar6;
  uVar5 = uVar7;
  FUN_01cd3384();
  local_90 = uVar6;
  local_88 = uVar4;
  local_80 = uVar7;
  local_78 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar4,uVar7,uVar5,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_158 = local_38;
  local_99 = 0;
  bVar1 = local_38 == (undefined *)0x0;
  if (bVar1) {
    local_158 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_158;
  }
  local_99 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888,local_158);
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar4 = 0x4038000000000000;
  uVar5 = 0;
  uVar7 = 0x4034000000000000;
  uVar6 = 0x4034000000000000;
  FUN_01cd3384();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_1a0 = local_40;
  bVar1 = local_40 == (undefined *)0x0;
  if (bVar1) {
    local_1a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fc0000000000000,0x3fc0000000000000,0x3fc0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_1a0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setBackgroundColor__026ca888,local_1a0);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_a8);
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

