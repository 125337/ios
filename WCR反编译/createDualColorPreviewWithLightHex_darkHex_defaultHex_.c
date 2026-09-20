// createDualColorPreviewWithLightHex:darkHex:defaultHex: @ 01d25ffc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID WCRefineRedEnvelopViewController::createDualColorPreviewWithLightHex_darkHex_defaultHex_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_280;
  undefined *local_238;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  undefined *local_138;
  undefined *local_110;
  byte local_101;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  uVar3 = DAT_023397e0;
  uVar2 = DAT_02339790;
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  puVar4 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar5 = local_48;
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_178 = &cf_DDA0DD;
  }
  else {
    local_178 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_178;
  pcVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_188 = local_58;
  }
  else {
    local_188 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_188;
  pcVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_198 = local_58;
  }
  else {
    local_198 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_198;
  pcVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf__);
  local_79 = 0;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1a8 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_1a8;
  }
  else {
    local_1a8 = local_60;
  }
  local_79 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_1a8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar5 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf__);
  local_91 = 0;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_1b8 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_1b8;
  }
  else {
    local_1b8 = local_68;
  }
  local_91 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_1b8;
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  puVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_colorFromHexString__026b30d8,local_70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_50;
  local_a0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_colorFromHexString__026b30d8,local_88);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_a8 = puVar6;
  _objc_alloc();
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = 0x4046000000000000;
  uVar10 = 0x4034000000000000;
  FUN_01d26a74();
  local_d0 = uVar7;
  local_c8 = uVar8;
  local_c0 = uVar9;
  local_b8 = uVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,uVar9,uVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
  puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b0 = puVar4;
  _objc_alloc();
  uVar9 = 0;
  uVar10 = 0x4034000000000000;
  uVar7 = uVar9;
  uVar8 = uVar10;
  FUN_01d26a74();
  local_f8 = uVar9;
  local_f0 = uVar7;
  local_e8 = uVar10;
  local_e0 = uVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar9,uVar7,uVar10,uVar8,puVar6,PTR_s_initWithFrame__026ca6e8);
  local_d8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  puVar6 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_238 = local_a0;
  local_101 = 0;
  bVar1 = local_a0 == (undefined *)0x0;
  if (bVar1) {
    local_238 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar3,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_238;
  }
  local_101 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setBackgroundColor__026ca888,local_238);
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar7 = 0x4038000000000000;
  uVar8 = 0;
  uVar10 = 0x4034000000000000;
  uVar9 = 0x4034000000000000;
  FUN_01d26a74();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,uVar8,uVar9,uVar10,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_110 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
  puVar6 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_280 = local_a8;
  bVar1 = local_a8 == (undefined *)0x0;
  if (bVar1) {
    local_280 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,uVar3,uVar2,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_138 = local_280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setBackgroundColor__026ca888,local_280);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSubview__026ca4c0,local_110);
  puVar4 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar4;
}

