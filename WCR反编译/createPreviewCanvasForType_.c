// createPreviewCanvasForType: @ 0183e630

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameSpecialUserDetailViewController::createPreviewCanvasForType_
             (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID local_228;
  double local_100;
  ID local_f8;
  bool local_e9;
  ID local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  byte local_39;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  dVar10 = DAT_02323ca0;
  local_39 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0.0;
  local_68 = 0.0;
  local_70 = 1.5;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (param_3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_boolValueForKey_default__026b6668,&cf_chatPageEnabled,0);
    local_39 = (byte)param_1;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringValueForKey__026b6670,&cf_chatPagePath);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_48;
    local_48 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringValueForKey__026b6670,&cf_chatPageNightPath);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_50;
    local_50 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_integerValueForKey_default__026b6678,&cf_chatPageAddMode,0);
    dVar6 = 0.0;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageOffsetX);
    dVar7 = 0.0;
    local_60 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageOffsetY);
    dVar6 = 1.5;
    local_68 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatPageScale);
    local_70 = dVar6;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_boolValueForKey_default__026b6668,&cf_chatListEnabled,0);
    local_39 = (byte)param_1;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringValueForKey__026b6670,&cf_chatListPath);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_48;
    local_48 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_stringValueForKey__026b6670,&cf_chatListNightPath);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_50;
    local_50 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_integerValueForKey_default__026b6678,&cf_chatListAddMode,0);
    dVar6 = 0.0;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatListOffsetX);
    dVar7 = 0.0;
    local_60 = dVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatListOffsetY);
    dVar6 = 1.5;
    local_68 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_floatValueForKey_default__026b6680,&cf_chatListScale);
    local_70 = dVar6;
  }
  local_78 = 60.0;
  local_80 = 0x4052000000000000;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar11 = 0;
  uVar8 = 0;
  uVar9 = local_80;
  uVar12 = local_80;
  FUN_0183e5b8();
  local_a8 = uVar8;
  local_a0 = uVar11;
  local_98 = uVar9;
  local_90 = uVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,uVar11,uVar9,uVar12,puVar4,PTR_s_initWithFrame__026ca6e8);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_88 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClipsToBounds__026ca8c8,0);
  puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uVar12 = 0x4018000000000000;
  uVar9 = 0x4018000000000000;
  dVar6 = local_78;
  dVar7 = local_78;
  FUN_0183e5b8();
  local_d0 = uVar9;
  local_c8 = uVar12;
  local_c0 = dVar6;
  local_b8 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,uVar12,puVar4,PTR_s_initWithFrame__026ca6e8);
  local_b0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setContentMode__026ca8e0,2);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242b8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAvatarImage_026b6628);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setImage__026ca978);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setClipsToBounds__026ca8c8,1);
  dVar6 = local_78 / 2.0;
  puVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_d8 = (undefined *)0x0;
  local_e9 = false;
  bVar1 = (local_39 & 1) == 0;
  if (bVar1) {
    local_228 = 0;
  }
  else {
    local_228 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_effectivePathDay_night__026b6688,local_48,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_228;
  }
  local_e9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_228;
  if ((local_e9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_resolvedImagePathForRelative__026ab210,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    local_100 = local_70;
    if ((local_70 <= 0.0) || (5.0 < local_70)) {
      local_100 = 1.5;
    }
    if (local_100 < dVar10) {
      local_100 = dVar10;
    }
    dVar6 = local_78 * local_100;
    local_100 = local_78 * local_100;
    dVar10 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
    dVar7 = dVar10 + (local_78 - dVar6) / 2.0 + local_60;
    dVar10 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
    dVar10 = (dVar10 + (local_78 - local_100) / 2.0) - local_68;
    puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    FUN_0183e5b8();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar10,dVar6,local_100,puVar5,PTR_s_initWithFrame__026ca6e8);
    puVar4 = local_d8;
    local_d8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setContentMode__026ca8e0,1);
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setImage__026ca978);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if ((local_d8 != (undefined *)0x0) && (local_58 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_d8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_b0);
  if ((local_d8 != (undefined *)0x0) && (local_58 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addSubview__026ca4c0,local_d8);
  }
  puVar4 = local_88;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar4;
}

