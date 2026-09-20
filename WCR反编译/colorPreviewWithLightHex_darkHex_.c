// colorPreviewWithLightHex:darkHex: @ 01e4bad8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineTelegramGroupingViewController::colorPreviewWithLightHex_darkHex_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_220;
  undefined *local_1d8;
  undefined *local_160;
  undefined *local_150;
  undefined *local_128;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar3 = local_38;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_59 = 0;
  local_69 = 0;
  if (lVar3 == 0) {
    local_150 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_150;
  }
  else {
    local_150 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_colorFromHexString__026b30d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_150;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_150;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  lVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_81 = 0;
  local_91 = 0;
  if (lVar3 == 0) {
    local_160 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_160;
  }
  else {
    local_160 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_colorFromHexString__026b30d8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_160;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = 0x4046000000000000;
  uVar8 = 0x4034000000000000;
  FUN_01e4ba8c();
  local_c0 = uVar5;
  local_b8 = uVar6;
  local_b0 = uVar7;
  local_a8 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar7,uVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_a0 = puVar2;
  _objc_alloc();
  uVar7 = 0;
  uVar8 = 0x4034000000000000;
  uVar5 = uVar7;
  uVar6 = uVar8;
  FUN_01e4ba8c();
  local_e8 = uVar7;
  local_e0 = uVar5;
  local_d8 = uVar8;
  local_d0 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar5,uVar8,uVar6,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_1d8 = local_50;
  local_f1 = 0;
  bVar1 = local_50 == (undefined *)0x0;
  if (bVar1) {
    local_1d8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_1d8;
  }
  local_f1 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888,local_1d8);
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0x4038000000000000;
  uVar6 = 0;
  uVar8 = 0x4034000000000000;
  uVar7 = 0x4034000000000000;
  FUN_01e4ba8c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,uVar7,uVar8,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_100 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar4 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_220 = local_78;
  bVar1 = local_78 == (undefined *)0x0;
  if (bVar1) {
    local_220 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_128 = local_220;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setBackgroundColor__026ca888,local_220);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_100);
  puVar2 = local_a0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

