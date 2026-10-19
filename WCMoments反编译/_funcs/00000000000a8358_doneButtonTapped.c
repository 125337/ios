// doneButtonTapped @0xa8358

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::doneButtonTapped(ID param_1,SEL param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  dispatch_time_t dVar9;
  undefined8 uVar10;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar11;
  uint local_524;
  undefined8 local_2a0;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  long local_208;
  byte local_200;
  byte local_1ff;
  byte local_1f9;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  byte local_170;
  byte local_16f;
  undefined8 local_168;
  byte local_15a;
  byte local_159;
  byte local_158;
  byte local_157;
  byte local_156;
  byte local_155;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [48];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = param_2;
  local_40 = param_1;
  uVar3 = _objc_msgSend_cropView(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_68 = _objc_msgSend_imageCropFrame(uVar3,local_2a0);
  uStack_60 = in_d1;
  local_58 = in_d2;
  uStack_50 = in_d3;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar3 = _objc_msgSend_cropView(local_40,local_2a0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = _objc_msgSend_angle(uVar3,local_2a0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_70 = lVar4;
  uVar3 = _objc_msgSend_onDidTapDone(local_40,local_2a0);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_00110458)();
  if (lVar4 != 0) {
    _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);
    uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);
    local_98 = PTR___NSConcreteStackBlock_001104f0;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke;
    local_80 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_78 = (*(code *)PTR__objc_retain_00110460)(local_40);
    _dispatch_async(uVar3,&local_98);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_78,0);
  }
  uVar2 = _objc_msgSend_showActivitySheetOnDone(local_40,local_2a0);
  if ((uVar2 & 1) == 0) {
    _objc_msgSend_setDoneButtonsEnabled_(local_40,local_2a0,0);
    local_155 = 0;
    local_156 = 0;
    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar2 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didCropImageToRect:angle:");
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar3 = _objc_msgSend_delegate(local_40,local_2a0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      in_d2 = uStack_60;
      _objc_msgSend_cropViewController_didCropImageToRect_angle_
                (local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,local_40,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_155 = 1;
    }
    uVar3 = _objc_msgSend_onDidCropImageToRect(local_40,local_2a0);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_00110458)();
    if (lVar4 != 0) {
      uVar3 = _objc_msgSend_onDidCropImageToRect(local_40,local_2a0);
      lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      in_d2 = uStack_60;
      (**(code **)(lVar4 + 0x10))(local_68,uStack_60,local_58,uStack_50,lVar4,local_70);
      (*(code *)PTR__objc_release_00110458)(lVar4);
      local_155 = 1;
    }
    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    bVar1 = _objc_opt_respondsToSelector
                      (uVar3,"cropViewController:didCropToCircularImage:withRect:angle:");
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_157 = bVar1 & 1;
    uVar3 = _objc_msgSend_onDidCropToCircleImage(local_40,local_2a0);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_00110458)();
    local_158 = lVar4 != 0;
    uVar3 = _objc_msgSend_delegate(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    bVar1 = _objc_opt_respondsToSelector(uVar3,"cropViewController:didCropToImage:withRect:angle:");
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_159 = bVar1 & 1;
    uVar3 = _objc_msgSend_onDidCropToRect(local_40,local_2a0);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_00110458)();
    local_15a = lVar4 != 0;
    lVar4 = _objc_msgSend_croppingStyle(local_40,local_2a0);
    if ((lVar4 == 1) && (((local_157 & 1) != 0 || ((local_158 & 1) != 0)))) {
      uVar3 = _objc_msgSend_image(local_40,local_2a0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar5 = _objc_msgSend_wcm_croppedImageWithFrame_angle_circularClip_
                        (local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,local_70,1);
      local_168 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      dVar9 = _dispatch_time(0,30000000);
      _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);
      uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);
      local_1c8 = PTR___NSConcreteStackBlock_001104f0;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_64;
      local_1b0 = &___block_descriptor_90_e8_32s40s_e5_v8__0l;
      local_170 = local_157 & 1;
      local_1a8 = (*(code *)PTR__objc_retain_00110460)(local_40);
      local_1a0 = (*(code *)PTR__objc_retain_00110460)(local_168);
      uStack_190 = uStack_60;
      local_198 = local_68;
      uStack_180 = uStack_50;
      local_188 = local_58;
      local_178 = local_70;
      local_16f = local_158 & 1;
      _dispatch_after(dVar9,uVar3,&local_1c8);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_155 = 1;
      local_156 = 1;
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_168,0);
    }
    else if (((local_159 & 1) != 0) || ((local_15a & 1) != 0)) {
      local_1d0 = 0;
      local_1f9 = 0;
      local_524 = 0;
      if (local_70 == 0) {
        uStack_1e8 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
        local_1f0 = *(undefined8 *)PTR__CGPointZero_00110850;
        uVar3 = _objc_msgSend_image(local_40,local_2a0);
        local_1f8 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_1f9 = 1;
        local_1e0 = _objc_msgSend_size(local_1f8,local_2a0);
        local_524 = _CGRectEqualToRect(local_68,uStack_60,local_58,uStack_50,local_1f0,uStack_1e8,
                                       local_1e0,in_d2);
      }
      if ((local_1f9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_1f8);
      }
      if ((local_524 & 1) == 0) {
        uVar3 = _objc_msgSend_image(local_40,local_2a0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = _objc_msgSend_wcm_croppedImageWithFrame_angle_circularClip_
                          (local_68,uStack_60,local_58,uStack_50,uVar5,local_2a0,local_70,0);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = local_1d0;
        local_1d0 = uVar10;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        (*(code *)PTR__objc_release_00110458)(uVar5);
      }
      else {
        uVar3 = _objc_msgSend_image(local_40,local_2a0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = local_1d0;
        local_1d0 = uVar5;
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      dVar9 = _dispatch_time(0,30000000);
      _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);
      uVar3 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);
      local_258 = PTR___NSConcreteStackBlock_001104f0;
      local_250 = 0xc2000000;
      local_24c = 0;
      local_248 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_65;
      local_240 = &___block_descriptor_90_e8_32s40s_e5_v8__0l;
      local_200 = local_159 & 1;
      local_238 = (*(code *)PTR__objc_retain_00110460)(local_40);
      local_230 = (*(code *)PTR__objc_retain_00110460)(local_1d0);
      uStack_220 = uStack_60;
      local_228 = local_68;
      uStack_210 = uStack_50;
      local_218 = local_58;
      local_208 = local_70;
      local_1ff = local_15a & 1;
      _dispatch_after(dVar9,uVar3,&local_258);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_155 = 1;
      local_156 = 1;
      _objc_storeStrong(&local_230,0);
      _objc_storeStrong(&local_238,0);
      _objc_storeStrong(&local_1d0,0);
    }
    if ((local_155 & 1) == 0) {
      uVar3 = _objc_msgSend_presentingViewController(local_40,local_2a0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      _objc_msgSend_dismissViewControllerAnimated_completion_(uVar3,local_2a0,1,0);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    else if ((local_156 & 1) == 0) {
      _objc_msgSend_setDoneButtonsEnabled_(local_40,local_2a0,1);
    }
  }
  else {
    uVar3 = _objc_alloc(&objc::class_t::WCMTOActivityCroppedImageProvider);
    uVar5 = _objc_msgSend_image(local_40,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    lVar4 = local_70;
    lVar6 = _objc_msgSend_croppingStyle(local_40,local_2a0);
    local_a0 = _objc_msgSend_initWithImage_cropFrame_angle_circular_
                         (lVar6 + -1,local_68,uStack_60,local_58,uStack_50,uVar3,local_2a0,uVar5,
                          lVar4,lVar6 + -1 == 0);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    uVar3 = _objc_alloc(&objc::class_t::WCMTOCroppedImageAttributes);
    lVar4 = local_70;
    uVar5 = _objc_msgSend_image(local_40,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_b8 = _objc_msgSend_size(uVar5,local_2a0);
    local_a8 = _objc_msgSend_initWithCroppedFrame_angle_originalImageSize_
                         (local_68,uVar3,local_2a0,lVar4);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    local_38 = local_a0;
    local_30 = local_a8;
    uVar3 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2a0,&local_38,2);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    local_c0 = _objc_msgSend_mutableCopy(uVar3,local_2a0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_msgSend_activityItems(local_40,local_2a0);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_release_00110458)();
    uVar3 = local_c0;
    uVar5 = uStack_60;
    uVar10 = local_58;
    uVar11 = uStack_50;
    if (lVar4 != 0) {
      uVar5 = _objc_msgSend_activityItems(local_40,local_2a0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      _objc_msgSend_addObjectsFromArray_(uVar3,local_2a0);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      uVar5 = uStack_60;
      uVar10 = local_58;
      uVar11 = uStack_50;
    }
    uVar7 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
    uVar3 = local_c0;
    uVar8 = _objc_msgSend_applicationActivities(local_40,local_2a0);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    local_c8 = _objc_msgSend_initWithActivityItems_applicationActivities_(uVar7,local_2a0,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    uVar3 = _objc_msgSend_excludedActivityTypes(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    _objc_msgSend_setExcludedActivityTypes_(local_c8,local_2a0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_setModalPresentationStyle_(local_c8,local_2a0,7);
    uVar3 = _objc_msgSend_toolbar(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar7 = _objc_msgSend_popoverPresentationController(local_c8,local_2a0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    _objc_msgSend_setSourceView_(uVar7,local_2a0,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    uVar3 = _objc_msgSend_toolbar(local_40,local_2a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    local_e8 = _objc_msgSend_doneButtonFrame(uVar3,local_2a0);
    uStack_e0 = uVar5;
    local_d8 = uVar10;
    uStack_d0 = uVar11;
    uVar5 = _objc_msgSend_popoverPresentationController(local_c8,local_2a0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    _objc_msgSend_setSourceRect_(local_e8,uStack_e0,local_d8,uStack_d0,uVar5,local_2a0);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_presentViewController_animated_completion_(local_40,local_2a0,local_c8,1,0);
    _objc_initWeak(auStack_118,local_c8);
    local_148 = PTR___NSConcreteStackBlock_001104f0;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_2;
    local_130 = &___block_descriptor_48_e8_32s40w_e45_v36__0__NSString_8B16__NSArray_20__NSError_28l
    ;
    local_128 = (*(code *)PTR__objc_retain_00110460)(local_40);
    _objc_copyWeak(auStack_120,auStack_118);
    _objc_msgSend_setCompletionWithItemsHandler_(local_c8,local_2a0,&local_148);
    _objc_destroyWeak(auStack_120);
    _objc_storeStrong(&local_128,0);
    _objc_destroyWeak(auStack_118);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

