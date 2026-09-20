// setupOfficialGIFPreview @ 0196d564

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupOfficialGIFPreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  double in_d0;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d1;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_1f8 [4];
  undefined8 local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  double dStack_1a8;
  undefined8 local_190;
  double dStack_188;
  undefined8 local_180;
  double dStack_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined *local_88 [5];
  double local_60;
  double local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "MMEmoticonView";
  _objc_getClass();
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  IVar2 = local_28;
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_dataWithContentsOfFile_options_e_026a09f0,IVar2,1,0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_38 == (char *)0x0) ||
     (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setupMediaWebView_026ba120);
    local_44 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_size_026cab00);
    if ((in_d0 <= 0.0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_size_026cab00), in_d1 <= 0.0)) {
      dVar8 = 240.0;
      in_d1 = 240.0;
      FUN_0195e30c();
    }
    else {
      dVar8 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_size_026cab00);
    }
    puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    local_60 = in_d1;
    local_58 = dVar8;
    _objc_alloc();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = in_d1;
    local_a0 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(in_d1,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_88[0] = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setAutoresizingMask__026ca878);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setDelegate__026ca910,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_88[0],PTR_s_setMinimumZoomScale__026ba128);
    uVar4 = 0x4018000000000000;
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setMaximumZoomScale__026ba130);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_setShowsHorizontalScrollIndicato_0269f108,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_setShowsVerticalScrollIndicator__026caa68,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_setContentInsetAdjustmentBehavio_026ca8d8,2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImageScrollView__026ba138,local_88[0]);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_bounds_026ca548);
    dVar5 = local_60;
    dVar9 = local_58;
    local_e8 = uVar4;
    local_e0 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_aspectFitRectForSize_inBounds__026ba178);
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_c8 = dVar5;
    local_c0 = dVar9;
    local_b8 = uVar4;
    local_b0 = dVar8;
    _objc_alloc();
    uVar10 = 0;
    uVar6 = 0;
    uVar7 = local_b8;
    dVar8 = local_b0;
    FUN_0196d370();
    local_110 = uVar6;
    local_108 = uVar10;
    local_100 = uVar7;
    local_f8 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithFrame__026ca6e8);
    local_f0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_bounds_026ca548);
    local_140 = uVar6;
    local_138 = uVar10;
    local_130 = uVar7;
    local_128 = dVar8;
    _CGRectGetMidX();
    uVar4 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_bounds_026ca548);
    local_160 = uVar4;
    local_158 = uVar10;
    local_150 = uVar7;
    local_148 = dVar8;
    _CGRectGetMidY(uVar4,uVar10);
    FUN_0196cff8();
    local_120 = uVar6;
    uStack_118 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setCenter__026ca8c0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_addSubview__026ca4c0,local_f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setGifContentView__026ba180,local_f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
    uVar4 = uVar7;
    dVar5 = dVar8;
    local_1b0 = uVar7;
    dStack_1a8 = dVar8;
    local_190 = uVar7;
    dStack_188 = dVar8;
    local_180 = uVar7;
    dStack_178 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_setContentSize__026ca8e8);
    pcVar3 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
    local_1d8 = uVar7;
    local_1d0 = dVar8;
    local_1c8 = uVar4;
    local_1c0 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,dVar8,uVar4,dVar5,pcVar3,PTR_s_initWithFrame__026ca6e8);
    local_1b8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setAutoresizingMask__026ca878,0x12);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setContentMode__026ca8e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_1b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setEmoticonOnView_imageData_isGi_0269e0b0,
               local_1b8,local_40,1);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1f8[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88[0],PTR_s_addGestureRecognizer__026ca4a8,local_1f8[0]);
    _objc_storeStrong(local_1f8,0);
    local_44 = 0;
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(local_88,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

