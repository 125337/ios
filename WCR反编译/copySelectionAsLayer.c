// copySelectionAsLayer @ 01669e98

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::copySelectionAsLayer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_d0;
  double dVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  double local_1b8;
  undefined *local_148;
  undefined *local_138;
  undefined *local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined8 uStack_f8;
  double local_d8;
  undefined8 uStack_d0;
  undefined *local_b8;
  double local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ensureCropSelection_026b24b8);
  if (((ulong)puVar1 & 1) != 0) {
    local_38 = 0;
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translateStickerView_026b1df8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFloatingOverlays__026b1be8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslateStickerView__026b24c0,0);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_croppedImageForTranslate_026b24c8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_138 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_138 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_croppedImage_026b2310);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_138;
    }
    local_51 = puVar1 == (undefined *)0x0;
    _objc_storeStrong(&local_38,local_138);
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mutableCopy_0269d8a0);
    local_61 = 0;
    local_148 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_148 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_148;
    }
    local_61 = puVar1 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFloatingOverlays__026b1be8,local_148);
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslateStickerView__026b24c0,local_48)
    ;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_4V1Y_);
      local_68 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropRect_026b1ec0);
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_88 = in_d0;
      local_80 = in_d1;
      local_78 = in_d2;
      local_70 = in_d3;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_88,local_80);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_90 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      puVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3e8f5c29);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      dVar3 = 0.0;
      uVar4 = 0x4000000000000000;
      FUN_0163f628();
      puVar1 = local_90;
      local_a0 = dVar3;
      uStack_98 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uStack_98;
      local_b0 = local_a0;
      dVar3 = local_a0;
      uVar4 = uStack_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setContentMode__026ca8e0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_bounds_026ca548);
      local_100 = dVar3;
      uStack_f8 = uVar4;
      local_d8 = dVar3;
      uStack_d0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar3,uVar4,local_78,local_70,local_b8,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_110 = 0x3ff0000000000000;
      local_1b8 = dVar3;
      if (dVar3 < 1.0) {
        local_1b8 = 1.0;
      }
      local_118 = local_1b8;
      local_108 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setContentScaleFactor__026b24d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentScaleFactor_026b24d8);
      puVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323c98,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addSubview__026ca4c0,local_b8);
      FUN_0164fe20(local_90,local_38);
      puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_120 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_addGestureRecognizer__026ca4a8,puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingOverlays_026b1e00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFloatingOverlays__026b1be8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingOverlays_026b1e00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toolbarScroll_026b1cb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bringSubviewToFront__026ca550);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintBlur_026b1c90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintLabel_026b1ca0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hintLabel_026b1ca0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_SVB_);
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_90,0);
      local_68 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

