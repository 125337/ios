// createTQQOnlineTextColorPreviewView @ 01c67414

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineNavigationAvatarViewController::createTQQOnlineTextColorPreviewView
             (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_190;
  undefined *local_148;
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
  undefined *local_28;
  
  uVar1 = DAT_0233a388;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_alloc();
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0x4046000000000000;
  uVar7 = 0x4034000000000000;
  FUN_01c66d84();
  local_58 = uVar4;
  local_50 = uVar5;
  local_48 = uVar6;
  local_40 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = puVar2;
  _objc_alloc();
  uVar6 = 0;
  uVar7 = 0x4034000000000000;
  uVar4 = uVar6;
  uVar5 = uVar7;
  FUN_01c66d84();
  local_80 = uVar6;
  local_78 = uVar4;
  local_70 = uVar7;
  local_68 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar4,uVar7,uVar5,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tqqOnlineTextColorLight_026c2048);
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  local_148 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_148 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe0101010101010,0x3fe0101010101010,0x3fe0101010101010,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_148;
  }
  local_89 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888,local_148);
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar4 = 0x4038000000000000;
  uVar5 = 0;
  uVar7 = 0x4034000000000000;
  uVar6 = 0x4034000000000000;
  FUN_01c66d84();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar7,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tqqOnlineTextColorDark_026c2058);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,uVar1,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_190 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888,local_190);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_98);
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

