// createAvatarFrameRealtimePreviewRowView @ 01814c0c

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarCornerBeautifyViewController::createAvatarFrameRealtimePreviewRowView
             (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d2;
  double dVar8;
  undefined8 uVar9;
  double local_240;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  ID local_1f0;
  undefined8 local_1e8;
  ID local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  long local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  double local_70;
  SEL local_68;
  ID local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar8 = in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_70 = in_d2;
  if (in_d2 <= 0.0) {
    IVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = dVar8;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  if (local_70 <= 0.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = dVar8;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_dc = 0x438c0000;
  local_e8 = local_70;
  if (local_70 <= 280.0) {
    local_240 = 280.0;
  }
  else {
    local_240 = local_70;
  }
  local_f0 = local_240;
  local_d8 = local_240;
  local_f8 = 0x4058800000000000;
  puVar2 = PTR_WCRAvatarPreviewRowView_026cf060;
  _objc_alloc();
  uVar7 = 0;
  uVar6 = 0;
  dVar8 = local_d8;
  uVar9 = local_f8;
  FUN_01815654();
  local_120 = uVar6;
  local_118 = uVar7;
  local_110 = dVar8;
  local_108 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,dVar8,uVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_100 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uStack_158 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
  local_160 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
  uStack_148 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
  local_150 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
  local_140 = local_160;
  uStack_138 = uStack_158;
  local_130 = local_150;
  uStack_128 = uStack_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_160,uStack_158,local_150,uStack_148,local_100,PTR_s_setLayoutMargins__026a0250);
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setPreservesSuperviewLayoutMargi_026a89d8,0)
  ;
  local_40 = &cf_hQ__;
  local_38 = &cf__e;
  local_30 = &cf_be;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_168 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  for (local_178 = 0; local_178 < 3; local_178 = local_178 + 1) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    puVar2 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    local_180 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setTag__026caa80,
               "/System/Library/Frameworks/CoreText.framework/CoreText" + local_178 + 0x2c);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uStack_1b8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8);
    local_1c0 = *(undefined8 *)PTR__UIEdgeInsetsZero_02578118;
    uStack_1a8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18);
    local_1b0 = *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10);
    local_1a0 = local_1c0;
    uStack_198 = uStack_1b8;
    local_190 = local_1b0;
    uStack_188 = uStack_1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,uStack_1b8,local_1b0,uStack_1a8,local_180,PTR_s_setLayoutMargins__026a0250)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_180,PTR_s_setPreservesSuperviewLayoutMargi_026a89d8,0);
    puVar3 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_objectAtIndex__026b0360,local_178);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_60;
    local_1c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_integerValue_026ca750);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_createAvatarFrameRealtimePreview_026b6058,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setTag__026caa80,
               "/System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore" +
               local_178 + 0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addSubview__026ca4c0,local_1d0);
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),*(undefined8 *)(puVar2 + 0x10),
               *(undefined8 *)(puVar2 + 0x18));
    local_1d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setTag__026caa80,
               "/System/Library/Frameworks/Security.framework/Security" + local_178 + 0x14);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTextAlignment__026caa90,1);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_02578158,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02339b60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_objectAtIndex__026b0360,local_178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addSubview__026ca4c0,local_1d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addSubview__026ca4c0,local_180);
    _objc_storeStrong(&local_1d8);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_180,0);
  }
  local_1e0 = local_60;
  local_210 = PTR___NSConcreteStackBlock_02578660;
  local_208 = 0xc0000000;
  local_204 = 0;
  local_200 = FUN_018156a0;
  local_1f8 = &DAT_02589778;
  local_1f0 = local_60;
  local_1e8 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setLayoutHandler__026b6060,&local_210);
  puVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layoutHandler_026b5f30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_layoutHandler_026b5f30);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar2 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_setAvatarPreviewContainerView__026b6068,local_100);
  puVar2 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

