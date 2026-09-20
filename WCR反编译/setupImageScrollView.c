// setupImageScrollView @ 0196c61c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::setupImageScrollView(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_90;
  undefined *local_70 [5];
  undefined *local_48;
  uint local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageWithContentsOfFile__0269e0e0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  bVar1 = local_38 != (undefined *)0x0;
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    _objc_alloc();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAutoresizingMask__026ca878);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelegate__026ca910,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_48,PTR_s_setMinimumZoomScale__026ba128);
    uVar4 = 0x4018000000000000;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMaximumZoomScale__026ba130);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setShowsHorizontalScrollIndicato_0269f108,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setShowsVerticalScrollIndicator__026caa68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setContentInsetAdjustmentBehavio_026ca8d8);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImageScrollView__026ba138,local_48);
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setContentMode__026ca8e0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    local_b0 = uVar4;
    local_90 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,in_d1,in_d2,in_d3,local_70[0],PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_70[0]);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImageView__026b1b58,local_70[0]);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addGestureRecognizer__026ca4a8,local_b8);
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(local_70,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setupMediaWebView_026ba120);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_38,0);
  return;
}

