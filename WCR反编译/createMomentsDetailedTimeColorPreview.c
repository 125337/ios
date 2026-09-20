// createMomentsDetailedTimeColorPreview @ 01c0fff8

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsViewController::createMomentsDetailedTimeColorPreview(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_1a8;
  undefined *local_158;
  undefined *local_c0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  uVar2 = DAT_02323f78;
  uVar1 = DAT_02323e10;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = 0x4046000000000000;
  uVar8 = 0x4034000000000000;
  FUN_01c106d8();
  local_58 = uVar5;
  local_50 = uVar6;
  local_48 = uVar7;
  local_40 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar7,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar3;
  _objc_alloc();
  uVar7 = 0;
  uVar8 = 0x4034000000000000;
  uVar5 = uVar7;
  uVar6 = uVar8;
  FUN_01c106d8();
  local_80 = uVar7;
  local_78 = uVar5;
  local_70 = uVar8;
  local_68 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar5,uVar8,uVar6,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  puVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  local_158 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_158 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_158;
  }
  local_89 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888,local_158);
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0x4038000000000000;
  uVar6 = 0;
  uVar8 = 0x4034000000000000;
  uVar7 = 0x4034000000000000;
  FUN_01c106d8();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar7,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_98 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  puVar4 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar2,uVar1,DAT_02323db8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888,local_1a8);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_98);
  puVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

