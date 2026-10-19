// ============ 功能链 85  根: _objc_msgSend$wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion: @0xd6240 ============
// 节点 73，按调用深度排序，自上而下读

// ---- [d0] _objc_msgSend$wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion: @0xd6240 ----
// CALLERS: (根)
// CALLEES: wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:


void _objc_msgSend_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion_

               (undefined8 param_1)



{

  (*(code *)PTR__objc_msgSend_00110420)

            (param_1,

             "wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:"

            );

  return;

}






// ---- [d1] wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion: @0x8d2e8 ----
// CALLERS: _objc_msgSend$wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:
// CALLEES: imageView, setImage:, showDuration, imageViewAssimilateToView:, showType, showDuration, setImage:, setImage:, setImage:, setImage:


/* WARNING: Restarted to delay deadcode elimination for space: stack */

/* Function Stack Size: 0x58 bytes */



void WCMYBIBAnimatedTransition::

     wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion_

               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6,

               long_long param_7,ID param_8,undefined4 param_9)



{

  undefined *puVar1;

  long_long lVar2;

  long lVar3;

  bool bVar4;

  ulong uVar5;

  long_long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  undefined8 local_258;

  undefined *local_250;

  undefined4 local_248;

  undefined4 local_244;

  code *local_240;

  undefined *local_238;

  undefined8 local_230;

  undefined8 local_228;

  undefined *local_220;

  undefined4 local_218;

  undefined4 local_214;

  code *local_210;

  undefined *local_208;

  undefined8 local_200;

  undefined8 local_1f8;

  undefined8 local_1f0;

  double local_1e8;

  double dStack_1e0;

  double local_1d8;

  double dStack_1d0;

  undefined8 local_1c8;

  undefined8 local_1c0;

  double dStack_1b8;

  double local_1b0;

  double dStack_1a8;

  undefined8 local_198;

  double local_190;

  double local_188;

  double local_180;

  undefined8 local_178;

  double dStack_170;

  double local_168;

  double dStack_160;

  undefined8 local_158;

  undefined *local_150;

  undefined4 local_148;

  undefined4 local_144;

  code *local_140;

  undefined *local_138;

  undefined8 local_130;

  undefined8 local_128;

  byte local_120;

  undefined *local_118;

  undefined4 local_110;

  undefined4 local_10c;

  code *local_108;

  undefined *local_100;

  undefined8 local_f8;

  undefined8 local_f0;

  undefined8 local_e8;

  double local_e0;

  double dStack_d8;

  double local_d0;

  double dStack_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  undefined8 local_98;

  byte local_8a;

  byte local_89;

  undefined8 local_88;

  long local_80;

  long local_78;

  long_long local_70;

  undefined8 local_68;

  long local_60;

  undefined8 local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double dStack_38;

  double local_30;

  double dStack_28;

  

  dVar11 = param_6.field1_0x10.field1_0x8;

  dVar10 = param_6.field1_0x10.field0_0x0;

  dVar9 = param_6.field0_0x0.field1_0x8;

  local_40 = param_6.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  dStack_38 = dVar9;

  local_30 = dVar10;

  dStack_28 = dVar11;

  _objc_storeStrong(&local_58,param_3);

  local_60 = 0;

  _objc_storeStrong(&local_60,param_4);

  local_68 = 0;

  _objc_storeStrong(&local_68,param_5);

  local_78 = 0;

  local_70 = param_7;

  _objc_storeStrong(&local_78,param_8);

  local_80 = _objc_msgSend_showType(local_48,local_258);

  if (local_80 == 2) {

    dVar9 = dStack_38;

    dVar10 = local_30;

    dVar11 = dStack_28;

    uVar5 = _CGRectIsEmpty(0,local_40);

    lVar2 = local_70;

    local_89 = 0;

    bVar4 = true;

    if (((uVar5 & 1) == 0) && (bVar4 = true, local_60 != 0)) {

      _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_258);

      local_88 = _objc_retainAutoreleasedReturnValue();

      local_89 = 1;

      lVar6 = _objc_msgSend_statusBarOrientation(local_88,local_258);

      bVar4 = lVar2 != lVar6;

    }

    if ((local_89 & 1) != 0) {

      (*(code *)PTR__objc_release_00110458)(local_88);

    }

    if (bVar4) {

      local_80 = 1;

    }

  }

  if (local_80 == 0) {

    (**(code **)(local_78 + 0x10))();

  }

  else if (local_80 == 1) {

    uVar5 = _CGRectIsEmpty(0,local_40,dStack_38,local_30,dStack_28);

    local_8a = (uVar5 & 1) == 0 && local_60 != 0;

    local_98 = 0;

    if ((bool)local_8a) {

      _objc_msgSend_imageViewAssimilateToView_(local_48,local_258,local_60);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      uVar8 = local_98;

      local_98 = uVar7;

      (*(code *)PTR__objc_release_00110458)(uVar8);

      dStack_b8 = dStack_38;

      local_c0 = local_40;

      dStack_a8 = dStack_28;

      local_b0 = local_30;

      dStack_d8 = dStack_38;

      local_e0 = local_40;

      dStack_c8 = dStack_28;

      local_d0 = local_30;

      _objc_msgSend_setFrame_(local_40,dStack_38,local_30,dStack_28,local_98,local_258);

      _objc_msgSend_setImage_(local_98,local_258,local_68);

      _objc_msgSend_addSubview_(local_58,local_258,local_98);

    }

    local_e8 = _objc_msgSend_alpha(local_58,local_258);

    _objc_msgSend_setAlpha_(0,local_58,local_258);

    if ((local_8a & 1) == 0) {

      (**(code **)(local_78 + 0x10))();

    }

    uVar8 = _objc_msgSend_showDuration(local_48,local_258);

    puVar1 = PTR___NSConcreteStackBlock_001104f0;

    local_118 = PTR___NSConcreteStackBlock_001104f0;

    local_110 = 0xc2000000;

    local_10c = 0;

    local_108 = 

    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke

    ;

    local_100 = &___block_descriptor_48_e8_32s_e5_v8__0l;

    local_f8 = (*(code *)PTR__objc_retain_00110460)(local_58);

    local_f0 = local_e8;

    local_150 = puVar1;

    local_148 = 0xc2000000;

    local_144 = 0;

    local_140 = 

    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_2

    ;

    local_138 = &___block_descriptor_49_e8_32s40bs_e8_v12__0B8l;

    local_120 = local_8a & 1;

    local_130 = (*(code *)PTR__objc_retain_00110460)(local_98);

    local_128 = (*(code *)PTR__objc_retain_00110460)(local_78);

    _objc_msgSend_animateWithDuration_animations_completion_

              (uVar8,&_OBJC_CLASS___UIView,local_258,&local_118,&local_150);

    _objc_storeStrong(&local_128);

    _objc_storeStrong(&local_130,0);

    _objc_storeStrong(&local_f8,0);

    _objc_storeStrong(&local_98,0);

  }

  else if (local_80 == 2) {

    _objc_msgSend_imageViewAssimilateToView_(0,local_48,local_258,local_60);

    local_158 = _objc_retainAutoreleasedReturnValue();

    lVar3 = local_60;

    local_198 = _objc_msgSend_bounds(local_60,local_258);

    local_190 = dVar9;

    local_188 = dVar10;

    local_180 = dVar11;

    local_1c0 = _objc_msgSend_convertRect_toView_(local_198,lVar3,local_258,local_58);

    dStack_1b8 = dVar9;

    local_1b0 = dVar10;

    dStack_1a8 = dVar11;

    local_178 = local_1c0;

    dStack_170 = dVar9;

    local_168 = dVar10;

    dStack_160 = dVar11;

    _objc_msgSend_setFrame_(local_1c0,dVar9,dVar10,dVar11,local_158,local_258);

    _objc_msgSend_setImage_(local_158,local_258,local_68);

    _objc_msgSend_addSubview_(local_58,local_258,local_158);

    _objc_msgSend_backgroundColor(local_58,local_258);

    local_1c8 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_colorWithAlphaComponent_(0,local_1c8,local_258);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setBackgroundColor_(local_58,local_258);

    (*(code *)PTR__objc_release_00110458)(uVar8);

    uVar8 = _objc_msgSend_showDuration(local_48,local_258);

    puVar1 = PTR___NSConcreteStackBlock_001104f0;

    local_220 = PTR___NSConcreteStackBlock_001104f0;

    local_218 = 0xc2000000;

    local_214 = 0;

    local_210 = 

    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_4

    ;

    local_208 = &___block_descriptor_88_e8_32s40s48s_e5_v8__0l;

    local_200 = (*(code *)PTR__objc_retain_00110460)(local_158);

    dStack_1e0 = dStack_38;

    local_1e8 = local_40;

    dStack_1d0 = dStack_28;

    local_1d8 = local_30;

    local_1f8 = (*(code *)PTR__objc_retain_00110460)(local_58);

    local_1f0 = (*(code *)PTR__objc_retain_00110460)(local_1c8);

    local_250 = puVar1;

    local_248 = 0xc2000000;

    local_244 = 0;

    local_240 = 

    ___120__WCMYBIBAnimatedTransition_wcm_yb_showTransitioningWithContainer_startView_startImage_endFrame_orientation_completion___block_invoke_5

    ;

    local_238 = &___block_descriptor_48_e8_32s40bs_e8_v12__0B8l;

    local_228 = (*(code *)PTR__objc_retain_00110460)(local_78);

    local_230 = (*(code *)PTR__objc_retain_00110460)(local_158);

    _objc_msgSend_animateWithDuration_animations_completion_

              (uVar8,&_OBJC_CLASS___UIView,local_258,&local_220,&local_250);

    _objc_storeStrong(&local_230);

    _objc_storeStrong(&local_228,0);

    _objc_storeStrong(&local_1f0,0);

    _objc_storeStrong(&local_1f8,0);

    _objc_storeStrong(&local_200,0);

    _objc_storeStrong(&local_1c8,0);

    _objc_storeStrong(&local_158,0);

  }

  _objc_storeStrong(&local_78);

  _objc_storeStrong(&local_68,0);

  _objc_storeStrong(&local_60,0);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d2] imageView @0x6ab38 ----
// CALLERS: layoutSubviews, showToView:containerSize:, wcm_yb_imageViewFrameWithContainerSize:imageSize:orientation:, initWithFrame:, setImage:type:, reset, setImageView:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageScrollView::imageView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ID IVar3;

  undefined8 local_30;

  

  if (*(long *)(param_1 + (long)_imageView) == 0) {

    uVar1 = _objc_opt_new(&objc::class_t::WCMYYAnimatedImageView);

    uVar2 = *(undefined8 *)(param_1 + (long)_imageView);

    *(undefined8 *)(param_1 + (long)_imageView) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _objc_msgSend_setContentMode_(*(undefined8 *)(param_1 + (long)_imageView),local_30,2);

    _objc_msgSend_layer(*(undefined8 *)(param_1 + (long)_imageView),local_30);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setMasksToBounds_(uVar1,local_30,1);

    (*(code *)PTR__objc_release_00110458)(uVar1);

  }

  IVar3 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_imageView));

  return IVar3;

}






// ---- [d2] setImage: @0x7cf24 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBImageData::setImage_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x78);

  return;

}






// ---- [d2] showDuration @0x88ccc ----
// CALLERS: initWithFrame:, showToView:orientation:, setShowDuration:, wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$showDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBSheetView::showDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + (long)_showDuration);

}






// ---- [d2] imageViewAssimilateToView: @0x8e80c ----
// CALLERS: wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$imageViewAssimilateToView:
// CALLEES: imageView


/* Function Stack Size: 0x18 bytes */



ID WCMYBIBAnimatedTransition::imageViewAssimilateToView_(ID param_1,SEL param_2,ID param_3)



{

  uint uVar1;

  undefined4 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ID IVar5;

  undefined8 uVar6;

  undefined8 local_58;

  undefined8 local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = _objc_opt_new(&_OBJC_CLASS___UIImageView);

  uVar4 = local_28;

  _objc_opt_self(&_OBJC_CLASS___UIImageView);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = _objc_opt_isKindOfClass(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  if ((uVar1 & 1) == 0) {

    _objc_msgSend_setContentMode_(local_30,local_58,2);

  }

  else {

    uVar4 = _objc_msgSend_contentMode(local_28,local_58);

    _objc_msgSend_setContentMode_(local_30,local_58,uVar4);

  }

  _objc_msgSend_layer(local_28,local_58);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar2 = _objc_msgSend_masksToBounds(uVar4,local_58);

  _objc_msgSend_layer(local_30,local_58);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setMasksToBounds_(uVar3,local_58,uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_layer(local_28,local_58);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar6 = _objc_msgSend_cornerRadius(uVar4,local_58);

  _objc_msgSend_layer(local_30,local_58);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCornerRadius_(uVar6,uVar3,local_58);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  _objc_msgSend_layer(local_28,local_58);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  uVar3 = _objc_msgSend_backgroundColor(uVar4,local_58);

  _objc_msgSend_layer(local_30,local_58);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setBackgroundColor_(uVar6,local_58,uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar4);

  uVar4 = (*(code *)PTR__objc_retain_00110460)(local_30);

  _objc_storeStrong(&local_30);

  _objc_storeStrong(&local_28,0);

  IVar5 = _objc_autoreleaseReturnValue(uVar4);

  return IVar5;

}






// ---- [d2] showType @0x8ea58 ----
// CALLERS: wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$showType
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBAnimatedTransition::showType(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d2] showDuration @0x8ead8 ----
// CALLERS: showToView:orientation:, wcm_yb_showTransitioningWithContainer:startView:startImage:endFrame:orientation:completion:, _objc_msgSend$showDuration
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



double WCMYBIBAnimatedTransition::showDuration(ID param_1,SEL param_2)



{

  return *(double *)(param_1 + 0x18);

}






// ---- [d2] setImage: @0x934ac ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYYImageFrame::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x48,param_3);

  return;

}






// ---- [d2] setImage: @0x9e194 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: image, image, setImage:withType:, image, image, image, image


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_image(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,1);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d2] setImage: @0xab96c ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewController::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setImage: @0xac990 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOActivityCroppedImageProvider::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setImage: @0xadc14 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropViewControllerTransitioning::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + 0x10,param_3);

  return;

}






// ---- [d2] setImage: @0xbb800 ----
// CALLERS: setPullDistance:, showLoading, finishWithSuccess:, tableView:cellForRowAtIndexPath:, _WCMEmojiText, tableView:cellForRowAtIndexPath:, collectionView:cellForItemAtIndexPath:, activateVideo
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMTOCropView::setImage_(ID param_1,SEL param_2,ID param_3)



{

  _objc_storeStrong(param_1 + (long)_image,param_3);

  return;

}






// ---- [d2] setFrame: @0xbd0e8 ----
// CALLERS: layoutIndicatorContent, layoutSubviews, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, containerViewWillLayoutSubviews, ___37-[WCMCommentPresentation_dragHeader:]_block_invoke, animateTransition:
// CALLEES: layoutLines, outerLineViews


/* Function Stack Size: 0x30 bytes */



void WCMTOCropOverlayView::setFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  undefined8 local_58;

  ID local_50;

  class_t *local_48;

  SEL local_40;

  ID local_38;

  double local_30;

  double local_28;

  double local_20;

  double local_18;

  

  local_18 = param_3.field1_0x10.field1_0x8;

  local_20 = param_3.field1_0x10.field0_0x0;

  local_28 = param_3.field0_0x0.field1_0x8;

  local_30 = param_3.field0_0x0.field0_0x0;

  local_48 = &objc::class_t::WCMTOCropOverlayView;

  local_50 = param_1;

  local_40 = param_2;

  local_38 = param_1;

  _objc_msgSendSuper2(local_30,local_28,local_20,local_18,&local_50,"setFrame:");

  if (*(long *)(local_38 + (long)_outerLineViews) != 0) {

    _objc_msgSend_layoutLines(local_38,local_58);

  }

  return;

}






// ---- [d3] image @0x7cf08 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x78);

}






// ---- [d3] image @0x93490 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYImageFrame::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x48);

}






// ---- [d3] setImage:withType: @0x9e720 ----
// CALLERS: setImage:, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, initWithCoder:, _objc_msgSend$setImage:withType:
// CALLEES: setImage:, resetAnimated, setHighlightedImage:, setAnimationImages:, setHighlightedAnimationImages:, imageChanged, stopAnimating


/* Function Stack Size: 0x20 bytes */



void WCMYYAnimatedImageView::setImage_withType_

               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)



{

  undefined8 local_78;

  ID local_70;

  class_t *local_68;

  ID local_60;

  class_t *local_58;

  ID local_50;

  class_t *local_48;

  ID local_40;

  class_t *local_38;

  unsigned_long_long local_30;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  local_30 = param_4;

  _objc_msgSend_stopAnimating(local_18,local_78);

  if (*(long *)(local_18 + (long)_link) != 0) {

    _objc_msgSend_resetAnimated(local_18,local_78);

  }

  _objc_storeStrong(local_18 + (long)_curFrame,0);

  if (local_30 != 0) {

    if (local_30 == 1) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"setImage:",local_28);

    }

    else if (local_30 == 2) {

      local_50 = local_18;

      local_48 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_50,"setHighlightedImage:",local_28);

    }

    else if (local_30 == 3) {

      local_60 = local_18;

      local_58 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_60,"setAnimationImages:",local_28);

    }

    else if (local_30 == 4) {

      local_70 = local_18;

      local_68 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_70,"setHighlightedAnimationImages:",local_28);

    }

  }

  _objc_msgSend_imageChanged(local_18,local_78);

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d3] image @0xab948 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewController::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] image @0xac96c ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOActivityCroppedImageProvider::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] image @0xadbf8 ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropViewControllerTransitioning::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x10);

}






// ---- [d3] image @0xbb7dc ----
// CALLERS: layoutSubviews, collectionView:cellForItemAtIndexPath:, showToView:containerSize:, initWithData:scale:decodeDecision:, animatedImageFrameAtIndex:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, wcm_yb_imageData:startLoadingWithStatus:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropView::image(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_image);

}






// ---- [d3] layoutLines @0xbd1e0 ----
// CALLERS: setFrame:, didMoveToSuperview, setDisplayHorizontalGridLines:, setDisplayVerticalGridLines:, _objc_msgSend$layoutLines
// CALLEES: setFrame:, horizontalGridLines, verticalGridLines, outerLineViews, topLeftLineViews, bottomLeftLineViews, bottomRightLineViews, topRightLineViews


/* Function Stack Size: 0x10 bytes */



void WCMTOCropOverlayView::layoutLines(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double in_d2;

  double dVar9;

  double in_d3;

  double local_4f0;

  undefined8 local_488;

  undefined8 local_3f0;

  long local_3e8;

  undefined8 local_3e0;

  double local_3d8;

  double local_3d0;

  double local_3c8;

  undefined8 local_3c0;

  double dStack_3b8;

  double local_3b0;

  double dStack_3a8;

  undefined8 local_3a0;

  double dStack_398;

  double local_390;

  double dStack_388;

  undefined8 local_380;

  double local_378;

  double local_370;

  double local_368;

  undefined8 local_360;

  double dStack_358;

  double local_350;

  double dStack_348;

  undefined8 local_340;

  long local_338;

  undefined8 local_330;

  double local_328;

  double local_320;

  double local_318;

  double local_310;

  long local_308;

  double local_300;

  double local_2f8;

  float local_2ec;

  double local_2e8;

  undefined8 local_2e0;

  double dStack_2d8;

  undefined8 local_2d0;

  undefined8 uStack_2c8;

  undefined8 local_2c0;

  double dStack_2b8;

  undefined8 local_2b0;

  undefined8 uStack_2a8;

  double local_2a0;

  double dStack_298;

  undefined8 local_290;

  undefined8 uStack_288;

  double local_280;

  double dStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  double local_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  double local_240;

  undefined8 uStack_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 local_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 local_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  double local_1e0;

  double dStack_1d8;

  double local_1d0;

  double dStack_1c8;

  double local_1c0;

  double dStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 local_198;

  long local_190;

  undefined8 local_188;

  double local_180;

  double dStack_178;

  double local_170;

  double dStack_168;

  double local_160;

  double dStack_158;

  double local_150;

  double dStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  double dStack_128;

  undefined8 local_120;

  double dStack_118;

  double local_110;

  undefined8 uStack_108;

  double local_100;

  undefined8 uStack_f8;

  undefined8 local_f0;

  double dStack_e8;

  undefined8 local_e0;

  undefined8 uStack_d8;

  double local_d0;

  undefined8 uStack_c8;

  double local_c0;

  double dStack_b8;

  double local_b0;

  double dStack_a8;

  undefined8 local_a0;

  long local_98;

  undefined8 local_90;

  double local_70;

  double dStack_68;

  SEL local_58;

  ID local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined8 local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_58 = param_2;

  local_50 = param_1;

  local_90 = _objc_msgSend_bounds(param_1);

  local_70 = in_d2;

  dStack_68 = in_d3;

  for (local_98 = 0; local_98 < 4; local_98 = local_98 + 1) {

    _objc_msgSend_outerLineViews(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_98);

    local_a0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_c0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_a8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_b0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_98 == 0) {

      local_e0 = 0xbff0000000000000;

      uStack_d8 = 0xbff0000000000000;

      local_d0 = local_70 + 2.0;

      uStack_c8 = 0x3ff0000000000000;

      dStack_b8 = -1.0;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_d0;

    }

    else if (local_98 == 1) {

      local_100 = local_70;

      uStack_f8 = 0;

      local_f0 = 0x3ff0000000000000;

      dStack_e8 = dStack_68;

      dStack_b8 = 0.0;

      local_c0 = local_70;

      dStack_a8 = dStack_68;

      local_b0 = 1.0;

    }

    else if (local_98 == 2) {

      local_120 = 0xbff0000000000000;

      dStack_118 = dStack_68;

      local_110 = local_70 + 2.0;

      uStack_108 = 0x3ff0000000000000;

      dStack_b8 = dStack_68;

      local_c0 = -1.0;

      dStack_a8 = 1.0;

      local_b0 = local_110;

    }

    else if (local_98 == 3) {

      local_140 = 0xbff0000000000000;

      uStack_138 = 0;

      local_130 = 0x3ff0000000000000;

      dStack_128 = dStack_68 + 1.0;

      dStack_b8 = 0.0;

      local_c0 = -1.0;

      local_b0 = 1.0;

      dStack_a8 = dStack_128;

    }

    dStack_158 = dStack_b8;

    local_160 = local_c0;

    dStack_148 = dStack_a8;

    local_150 = local_b0;

    dStack_178 = dStack_b8;

    local_180 = local_c0;

    dStack_168 = dStack_a8;

    local_170 = local_b0;

    in_d2 = local_b0;

    in_d3 = dStack_a8;

    _objc_msgSend_setFrame_(local_c0,dStack_b8,local_a0,local_488);

    _objc_storeStrong(&local_a0,0);

  }

  _objc_msgSend_topLeftLineViews(local_98 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar1;

  _objc_msgSend_topRightLineViews(local_50,local_488);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_40 = uVar2;

  _objc_msgSend_bottomRightLineViews(local_50,local_488);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_38 = uVar3;

  _objc_msgSend_bottomLeftLineViews(local_50,local_488);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_30 = uVar4;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_488,&local_48,4);

  local_188 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar4);

  (*(code *)PTR__objc_release_00110458)(uVar3);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  for (local_190 = 0; local_190 < 4; local_190 = local_190 + 1) {

    _objc_msgSend_objectAtIndexedSubscript_(local_188,local_488,local_190);

    local_198 = _objc_retainAutoreleasedReturnValue();

    dStack_1b8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1c0 = *(double *)PTR__CGRectZero_001108d8;

    uStack_1a8 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1b0 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_1d8 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_1e0 = *(double *)PTR__CGRectZero_001108d8;

    dStack_1c8 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_1d0 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    if (local_190 == 0) {

      local_200 = 0xc008000000000000;

      uStack_1f8 = 0xc008000000000000;

      local_1f0 = 0x4008000000000000;

      uStack_1e8 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_220 = 0;

      uStack_218 = 0xc008000000000000;

      local_210 = 0x4034000000000000;

      uStack_208 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      local_1e0 = 0.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

    }

    else if (local_190 == 1) {

      local_240 = local_70;

      uStack_238 = 0xc008000000000000;

      local_230 = 0x4008000000000000;

      uStack_228 = 0x4037000000000000;

      dStack_1b8 = -3.0;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_260 = local_70 - 20.0;

      uStack_258 = 0xc008000000000000;

      local_250 = 0x4034000000000000;

      uStack_248 = 0x4008000000000000;

      dStack_1d8 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_260;

    }

    else if (local_190 == 2) {

      local_280 = local_70;

      dStack_278 = dStack_68 - 20.0;

      local_270 = 0x4008000000000000;

      uStack_268 = 0x4037000000000000;

      local_1c0 = local_70;

      uStack_1a8 = 0x4037000000000000;

      local_1b0 = 0x4008000000000000;

      local_2a0 = local_70 - 20.0;

      dStack_298 = dStack_68;

      local_290 = 0x4034000000000000;

      uStack_288 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      dStack_1c8 = 3.0;

      local_1d0 = 20.0;

      local_1e0 = local_2a0;

      dStack_1b8 = dStack_278;

    }

    else if (local_190 == 3) {

      local_2c0 = 0xc008000000000000;

      dStack_2b8 = dStack_68 - 20.0;

      local_2b0 = 0x4008000000000000;

      uStack_2a8 = 0x4034000000000000;

      local_1c0 = -3.0;

      uStack_1a8 = 0x4034000000000000;

      local_1b0 = 0x4008000000000000;

      local_2e0 = 0xc008000000000000;

      dStack_2d8 = dStack_68;

      local_2d0 = 0x4037000000000000;

      uStack_2c8 = 0x4008000000000000;

      dStack_1d8 = dStack_68;

      local_1e0 = -3.0;

      dStack_1c8 = 3.0;

      local_1d0 = 23.0;

      dStack_1b8 = dStack_2b8;

    }

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setFrame_(local_1c0,dStack_1b8,local_1b0,uStack_1a8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_msgSend_objectAtIndexedSubscript_(local_198,local_488,1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    in_d2 = local_1d0;

    in_d3 = dStack_1c8;

    _objc_msgSend_setFrame_(local_1e0,dStack_1d8,uVar1,local_488);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_198,0);

  }

  local_2ec = 1.0;

  _objc_msgSend_traitCollection(local_190 + -4,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  dVar6 = (double)_objc_msgSend_displayScale(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_4f0 = dVar6;

  if (dVar6 <= (double)local_2ec) {

    local_4f0 = (double)local_2ec;

  }

  local_300 = local_4f0;

  local_2e8 = 1.0 / local_4f0;

  local_2f8 = dVar6;

  _objc_msgSend_horizontalGridLines(local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  lVar5 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_308 = lVar5;

  local_330 = _objc_msgSend_bounds(local_50,local_488);

  local_328 = local_4f0;

  local_320 = in_d2;

  local_318 = in_d3;

  dVar6 = (double)_CGRectGetHeight(local_330,local_4f0,in_d2);

  dVar8 = (double)(local_308 + 1);

  local_310 = (dVar6 - (double)local_308 * local_2e8) / dVar8;

  for (local_338 = 0; local_338 < local_308; local_338 = local_338 + 1) {

    _objc_msgSend_horizontalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_338);

    local_340 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dStack_358 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    local_360 = *(undefined8 *)PTR__CGRectZero_001108d8;

    local_350 = *(double *)(PTR__CGRectZero_001108d8 + 0x10);

    dStack_348 = local_2e8;

    local_380 = _objc_msgSend_bounds(local_50,local_488);

    local_378 = dVar8;

    local_370 = dVar6;

    local_368 = in_d3;

    dVar6 = (double)_CGRectGetWidth(local_380,dVar8,dVar6,in_d3);

    dVar8 = local_2e8 * (double)local_338 + (double)(local_338 + 1) * local_310;

    local_3a0 = local_360;

    dStack_388 = dStack_348;

    local_3c0 = local_360;

    dStack_3a8 = dStack_348;

    in_d3 = dStack_348;

    dStack_3b8 = dVar8;

    local_3b0 = dVar6;

    dStack_398 = dVar8;

    local_390 = dVar6;

    dStack_358 = dVar8;

    local_350 = dVar6;

    _objc_msgSend_setFrame_(local_360,local_340,local_488);

    _objc_storeStrong(&local_340,0);

  }

  _objc_msgSend_verticalGridLines(local_338 - local_308,local_50,local_488);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_308 = _objc_msgSend_count(uVar1,local_488);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  local_3e0 = _objc_msgSend_bounds(local_50,local_488);

  local_3d8 = dVar8;

  local_3d0 = dVar6;

  local_3c8 = in_d3;

  dVar8 = (double)_CGRectGetWidth(local_3e0,dVar8,dVar6);

  local_310 = (dVar8 - (double)local_308 * local_2e8) / (double)(local_308 + 1);

  dVar6 = (double)(local_308 + 1);

  for (local_3e8 = 0; local_3e8 < local_308; local_3e8 = local_3e8 + 1) {

    _objc_msgSend_verticalGridLines(local_50,local_488);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectAtIndexedSubscript_(uVar1,local_488,local_3e8);

    local_3f0 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    dVar9 = local_2e8;

    dVar7 = *(double *)(PTR__CGRectZero_001108d8 + 8);

    uVar1 = _objc_msgSend_bounds(local_50,local_488);

    in_d3 = (double)_CGRectGetHeight(uVar1,dVar6,dVar8,in_d3);

    _objc_msgSend_setFrame_

              (local_2e8 * (double)local_3e8 + (double)(local_3e8 + 1) * local_310,local_3f0,

               local_488);

    _objc_storeStrong(&local_3f0,0);

    dVar6 = dVar7;

    dVar8 = dVar9;

  }

  _objc_storeStrong(local_3e8 - local_308,&local_188,0);

  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);

  }

  return;

}






// ---- [d3] outerLineViews @0xbe9c0 ----
// CALLERS: setup, setFrame:, didMoveToSuperview, layoutLines, setOuterLineViews:, .cxx_destruct, _objc_msgSend$outerLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::outerLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_outerLineViews);

}






// ---- [d4] resetAnimated @0x9db04 ----
// CALLERS: ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke, ___39-[WCMYYAnimatedImageView_resetAnimated]_block_invoke.71, setHighlighted:, setImage:withType:, imageChanged, _objc_msgSend$resetAnimated
// CALLEES: currentAnimatedImageIndex


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::resetAnimated(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_a8;

  undefined *local_88;

  undefined4 local_80;

  undefined4 local_7c;

  code *local_78;

  undefined *local_70;

  undefined8 local_68;

  undefined8 local_60;

  undefined *local_58;

  undefined4 local_50;

  undefined4 local_4c;

  code *local_48;

  undefined *local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  undefined8 local_20;

  long *local_18;

  

  lVar3 = (long)_onceToken;

  local_58 = PTR___NSConcreteStackBlock_001104f0;

  local_50 = 0xc2000000;

  local_4c = 0;

  local_48 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke;

  local_40 = &___block_descriptor_40_e8_32s_e5_v8__0l;

  local_30 = param_2;

  local_28 = param_1;

  local_38 = (*(code *)PTR__objc_retain_00110460)(param_1);

  local_18 = (long *)(param_1 + lVar3);

  local_20 = 0;

  _objc_storeStrong(&local_20,&local_58);

  if (*local_18 + 1 != 0) {

    _dispatch_once(*local_18 + 1,local_18,local_20);

  }

  _objc_storeStrong(&local_20,0);

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_28 + (long)_requestQueue),local_a8);

  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_28 + (long)_lock),0xffffffffffffffff);

  lVar3 = _objc_msgSend_count(*(undefined8 *)(local_28 + (long)_buffer),local_a8);

  if (lVar3 != 0) {

    local_60 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(local_28 + (long)_buffer));

    uVar1 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);

    uVar2 = *(undefined8 *)(local_28 + (long)_buffer);

    *(undefined8 *)(local_28 + (long)_buffer) = uVar1;

    (*(code *)PTR__objc_release_00110458)(uVar2);

    _dispatch_get_global_queue(-2,0);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    local_88 = PTR___NSConcreteStackBlock_001104f0;

    local_80 = 0xc2000000;

    local_7c = 0;

    local_78 = ___39__WCMYYAnimatedImageView_resetAnimated__block_invoke_71;

    local_70 = &___block_descriptor_40_e8_32s_e5_v8__0l;

    local_68 = (*(code *)PTR__objc_retain_00110460)(local_60);

    _dispatch_async(uVar1,&local_88);

    (*(code *)PTR__objc_release_00110458)(uVar1);

    _objc_storeStrong(&local_68);

    _objc_storeStrong(&local_60,0);

  }

  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_28 + (long)_lock));

  _objc_msgSend_setPaused_(*(undefined8 *)(local_28 + (long)_link),local_a8,1);

  *(undefined8 *)(local_28 + (long)_time) = 0;

  if (*(long *)(local_28 + (long)_curIndex) != 0) {

    _objc_msgSend_willChangeValueForKey_(local_28,local_a8);

    *(undefined8 *)(local_28 + (long)_curIndex) = 0;

    _objc_msgSend_didChangeValueForKey_(local_28,local_a8,&cf_currentAnimatedImageIndex);

  }

  _objc_storeStrong(local_28 + (long)_curAnimatedImage);

  _objc_storeStrong(local_28 + (long)_curFrame,0);

  *(undefined8 *)(local_28 + (long)_curLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalLoop) = 0;

  *(undefined8 *)(local_28 + (long)_totalFrameCount) = 1;

  *(undefined1 *)(local_28 + (long)_loopEnd) = 0;

  *(undefined1 *)(local_28 + (long)_bufferMiss) = 0;

  *(undefined8 *)(local_28 + (long)_incrBufferCount) = 0;

  _objc_storeStrong(&local_38,0);

  return;

}






// ---- [d4] setHighlightedImage: @0x9e23c ----
// CALLERS: initWithImage:highlightedImage:, setImage:withType:, initWithCoder:, _objc_msgSend$setHighlightedImage:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedImage_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedImage(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,2);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d4] setAnimationImages: @0x9e2e4 ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_animationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,3);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d4] setHighlightedAnimationImages: @0x9e38c ----
// CALLERS: setImage:withType:
// CALLEES: setImage:withType:


/* Function Stack Size: 0x18 bytes */



void WCMYYAnimatedImageView::setHighlightedAnimationImages_(ID param_1,SEL param_2,ID param_3)



{

  long lVar1;

  long lVar2;

  undefined8 local_48;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  _objc_msgSend_highlightedAnimationImages(local_18,local_48);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = local_28;

  (*(code *)PTR__objc_release_00110458)();

  if (lVar2 - lVar1 != 0) {

    _objc_msgSend_setImage_withType_(lVar2 - lVar1,local_18,local_48,local_28,4);

  }

  _objc_storeStrong(&local_28,0);

  return;

}






// ---- [d4] imageChanged @0x9e8c8 ----
// CALLERS: setHighlighted:, setImage:withType:, _objc_msgSend$imageChanged
// CALLEES: _CGRectMake, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount, animatedImageContentsRectAtIndex:, animatedImageFrameCount, animatedImageLoopCount, animatedImageFrameCount, animatedImageLoopCount


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::imageChanged(ID param_1,SEL param_2)



{

  uint uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined8 local_100;

  byte local_49;

  ulong local_48;

  undefined8 local_40;

  undefined8 local_38;

  SEL local_30;

  ID local_28;

  

  local_30 = param_2;

  local_28 = param_1;

  local_38 = _objc_msgSend_currentImageType(param_1);

  _objc_msgSend_imageForType_(local_28,local_100,local_38);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_48 = 0;

  local_49 = 0;

  local_40 = uVar2;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);

  if ((((uVar4 & 1) != 0) &&

      (uVar4 = _objc_msgSend_conformsToProtocol_

                         (local_40,local_100,&objc::protocol_t::WCMYYAnimatedImage),

      (uVar4 & 1) != 0)) &&

     (local_48 = _objc_msgSend_animatedImageFrameCount(local_40,local_100), 1 < local_48)) {

    local_49 = _objc_opt_respondsToSelector(local_40,"animatedImageContentsRectAtIndex:");

    local_49 = local_49 & 1;

  }

  if ((local_49 == 0) && ((*(byte *)(local_28 + (long)_curImageHasContentsRect) & 1) != 0)) {

    _objc_msgSend_layer(local_28,local_100);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    uVar3 = _objc_msgSend_contentsRect(uVar2,local_100);

    _CGRectMake(0);

    uVar1 = _CGRectEqualToRect(uVar3);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if ((uVar1 & 1) == 0) {

      _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_100);

      _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_100,1);

      in_d1 = 0;

      in_d3 = 0x3ff0000000000000;

      in_d2 = 0x3ff0000000000000;

      uVar3 = _CGRectMake(0);

      _objc_msgSend_layer(local_28,local_100);

      uVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_msgSend_setContentsRect_(uVar3,uVar2,local_100);

      (*(code *)PTR__objc_release_00110458)(uVar2);

      _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_100);

    }

  }

  *(byte *)(local_28 + (long)_curImageHasContentsRect) = local_49;

  if (local_49 != 0) {

    uVar2 = _objc_msgSend_animatedImageContentsRectAtIndex_(local_40,local_100,0);

    _objc_msgSend_setContentsRect_forImage_(uVar2,in_d1,in_d2,in_d3,local_28,local_100,local_40);

  }

  if (local_48 != 0 && local_48 - 1 != 0) {

    _objc_msgSend_resetAnimated(local_48 - 1,local_28,local_100);

    _objc_storeStrong(local_28 + (long)_curAnimatedImage,local_40);

    _objc_storeStrong(local_28 + (long)_curFrame,local_40);

    uVar2 = _objc_msgSend_animatedImageLoopCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalLoop) = uVar2;

    uVar2 = _objc_msgSend_animatedImageFrameCount

                      (*(undefined8 *)(local_28 + (long)_curAnimatedImage),local_100);

    *(undefined8 *)(local_28 + (long)_totalFrameCount) = uVar2;

    _objc_msgSend_calcMaxBufferCount(local_28,local_100);

  }

  _objc_msgSend_setNeedsDisplay(local_28,local_100);

  _objc_msgSend_didMoved(local_28,local_100);

  _objc_storeStrong(&local_40,0);

  return;

}






// ---- [d4] stopAnimating @0x9eff0 ----
// CALLERS: setImage:withType:, step:, didMoved, _objc_msgSend$stopAnimating
// CALLEES: setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::stopAnimating(ID param_1,SEL param_2)



{

  undefined8 local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = &objc::class_t::WCMYYAnimatedImageView;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = param_1;

  _objc_msgSendSuper2(&local_30,"stopAnimating");

  _objc_msgSend_cancelAllOperations(*(undefined8 *)(local_18 + (long)_requestQueue),local_38);

  _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_38,1);

  _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_38,0);

  return;

}






// ---- [d4] horizontalGridLines @0xbe900 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayHorizontalGridLines:, setHorizontalGridLines:, .cxx_destruct, _objc_msgSend$horizontalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::horizontalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_horizontalGridLines);

}






// ---- [d4] verticalGridLines @0xbe960 ----
// CALLERS: layoutLines, setGridHidden:animated:, ___47-[WCMTOCropOverlayView_setGridHidden:animated:]_block_invoke, setDisplayVerticalGridLines:, setVerticalGridLines:, .cxx_destruct, _objc_msgSend$verticalGridLines
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::verticalGridLines(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_verticalGridLines);

}






// ---- [d4] topLeftLineViews @0xbea20 ----
// CALLERS: setup, layoutLines, setTopLeftLineViews:, .cxx_destruct, _objc_msgSend$topLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topLeftLineViews);

}






// ---- [d4] bottomLeftLineViews @0xbea80 ----
// CALLERS: setup, layoutLines, setBottomLeftLineViews:, .cxx_destruct, _objc_msgSend$bottomLeftLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomLeftLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomLeftLineViews);

}






// ---- [d4] bottomRightLineViews @0xbeae0 ----
// CALLERS: setup, layoutLines, setBottomRightLineViews:, .cxx_destruct, _objc_msgSend$bottomRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::bottomRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_bottomRightLineViews);

}






// ---- [d4] topRightLineViews @0xbeb40 ----
// CALLERS: setup, layoutLines, setTopRightLineViews:, .cxx_destruct, _objc_msgSend$topRightLineViews
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMTOCropOverlayView::topRightLineViews(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_topRightLineViews);

}






// ---- [d5] currentAnimatedImageIndex @0xa07cc ----
// CALLERS: resetAnimated, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, automaticallyNotifiesObserversForKey:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentAnimatedImageIndex(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_curIndex);

}






// ---- [d5] _CGRectMake @0x77fc ----
// CALLERS: positionIndicator, layoutIndicatorContent, viewDidLoad, viewDidLayoutSubviews, tableView:cellForRowAtIndexPath:, _WCMEmojiText, frameOfPresentedViewInContainerView, viewDidLoad
// CALLEES: (叶)


undefined1  [16] _CGRectMake(ulong param_1)



{

  undefined1 auVar1 [16];

  

  auVar1._8_8_ = 0;

  auVar1._0_8_ = param_1;

  return auVar1;

}






// ---- [d5] animatedImageFrameCount @0x69f4c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x69f84 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageFrameCount @0x8f170 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: contentRects


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x8f1a8 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d5] animatedImageContentsRectAtIndex: @0x8f2ac ----
// CALLERS: contentsRectForCALayerAtIndex:, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke, _objc_msgSend$animatedImageContentsRectAtIndex:
// CALLEES: contentRects


/* Function Stack Size: 0x18 bytes */



CGRect WCMYYSpriteSheetImage::animatedImageContentsRectAtIndex_

                 (ID param_1,SEL param_2,unsigned_long_long param_3)



{

  CGRect CVar1;

  ulong uVar2;

  undefined8 uVar3;

  undefined8 in_d1;

  undefined8 in_d2;

  double in_d3;

  undefined8 local_60;

  undefined8 local_30;

  undefined8 uStack_28;

  undefined8 local_20;

  double dStack_18;

  

  uVar2 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_contentRects));

  if (param_3 < uVar2) {

    _objc_msgSend_objectAtIndexedSubscript_

              (*(undefined8 *)(param_1 + (long)_contentRects),local_60,param_3);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    local_30 = _objc_msgSend_CGRectValue(uVar3,local_60);

    (*(code *)PTR__objc_release_00110458)(uVar3);

    uStack_28 = in_d1;

    local_20 = in_d2;

    dStack_18 = in_d3;

  }

  else {

    uStack_28 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 8);

    local_30 = *(undefined8 *)PTR__CGRectZero_001108d8;

    dStack_18 = *(double *)(PTR__CGRectZero_001108d8 + 0x18);

    local_20 = *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10);

  }

  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;

  CVar1.field0_0x0.field0_0x0 = (double)local_30;

  CVar1.field1_0x10.field0_0x0 = (double)local_20;

  CVar1.field1_0x10.field1_0x8 = dStack_18;

  return CVar1;

}






// ---- [d5] animatedImageFrameCount @0x9087c ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: frameCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_frameCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageLoopCount @0x908b4 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount, loopCount, loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  unsigned_long_long uVar1;

  

  uVar1 = _objc_msgSend_loopCount(*(undefined8 *)(param_1 + (long)_decoder));

  return uVar1;

}






// ---- [d5] animatedImageFrameCount @0x9c370 ----
// CALLERS: imageChanged, setCurrentAnimatedImageIndex:, encodeWithCoder:, _objc_msgSend$animatedImageFrameCount
// CALLEES: imagePath, imageData


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageFrameCount(ID param_1,SEL param_2)



{

  undefined8 local_30;

  undefined8 local_18;

  

  if (*(long *)(param_1 + (long)_imagePaths) == 0) {

    if (*(long *)(param_1 + (long)_imageDatas) == 0) {

      local_18 = 1;

    }

    else {

      local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imageDatas),local_30);

    }

  }

  else {

    local_18 = _objc_msgSend_count(*(undefined8 *)(param_1 + (long)_imagePaths),local_30);

  }

  return local_18;

}






// ---- [d5] animatedImageLoopCount @0x9c410 ----
// CALLERS: imageChanged, _objc_msgSend$animatedImageLoopCount
// CALLEES: loopCount


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageLoopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d5] conformsToProtocol: @0x9ce14 ----
// CALLERS: ___34-[WCMYBIBImageData_loadImageBlock]_block_invoke, ___43-[WCMYBIBImageData_wcm_yb_saveToPhotoAlbum]_block_invoke_2.110, imageChanged, encodeWithCoder:, _objc_msgSend$conformsToProtocol:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



bool _YYImageWeakProxy::conformsToProtocol_(ID param_1,SEL param_2,ID param_3)



{

  bool bVar1;

  undefined8 uVar2;

  undefined8 local_50;

  undefined8 local_28;

  SEL local_20;

  ID local_18;

  

  local_28 = 0;

  local_20 = param_2;

  local_18 = param_1;

  _objc_storeStrong(&local_28,param_3);

  uVar2 = _objc_loadWeakRetained(local_18 + (long)_target);

  bVar1 = _objc_msgSend_conformsToProtocol_(uVar2,local_50,local_28);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_storeStrong(&local_28,0);

  return bVar1;

}






// ---- [d5] curImage @0x9d58c ----
// CALLERS: main, setCurImage:, .cxx_destruct, imageChanged, step:, ___55-[WCMYYAnimatedImageView_setCurrentAnimatedImageIndex:]_block_invoke
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID _YYAnimatedImageViewFetchOperation::curImage(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_curImage);

}






// ---- [d5] imageForType: @0x9e4b8 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$imageForType:
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x18 bytes */



ID WCMYYAnimatedImageView::imageForType_(ID param_1,SEL param_2,unsigned_long_long param_3)



{

  ID IVar1;

  undefined8 local_40;

  undefined8 local_18;

  

  if (param_3 == 0) {

    local_18 = 0;

  }

  else if (param_3 == 1) {

    _objc_msgSend_image(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 2) {

    _objc_msgSend_highlightedImage(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 3) {

    _objc_msgSend_animationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else if (param_3 == 4) {

    _objc_msgSend_highlightedAnimationImages(0,param_1,local_40);

    local_18 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_18 = 0;

  }

  IVar1 = _objc_autoreleaseReturnValue(local_18);

  return IVar1;

}






// ---- [d5] currentImageType @0x9e5b0 ----
// CALLERS: imageChanged, startAnimating, _objc_msgSend$currentImageType
// CALLEES: image, image, image, image, image, image


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::currentImageType(ID param_1,SEL param_2)



{

  ulong uVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 local_40;

  undefined8 local_28;

  

  local_28 = 0;

  uVar1 = _objc_msgSend_isHighlighted(param_1);

  if ((uVar1 & 1) != 0) {

    _objc_msgSend_highlightedAnimationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_highlightedImage(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 2;

      }

    }

    else {

      local_28 = 4;

    }

  }

  if (local_28 == 0) {

    _objc_msgSend_animationImages(param_1,local_40);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    lVar3 = _objc_msgSend_count(uVar2,local_40);

    (*(code *)PTR__objc_release_00110458)(uVar2);

    if (lVar3 == 0) {

      _objc_msgSend_image(param_1,local_40);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      (*(code *)PTR__objc_release_00110458)();

      if (lVar3 != 0) {

        local_28 = 1;

      }

    }

    else {

      local_28 = 3;

    }

  }

  return local_28;

}






// ---- [d5] calcMaxBufferCount @0x9ecb0 ----
// CALLERS: main, imageChanged, _objc_msgSend$calcMaxBufferCount
// CALLEES: animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, animatedImageBytesPerFrame, maxBufferSize, __YYDeviceMemoryTotal, __YYDeviceMemoryFree


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::calcMaxBufferCount(ID param_1,SEL param_2)



{

  long lVar1;

  long lVar2;

  ulong local_90;

  ulong local_88;

  double local_80;

  double local_78;

  ulong local_40;

  long local_28;

  

  local_28 = _objc_msgSend_animatedImageBytesPerFrame

                       (*(undefined8 *)(param_1 + (long)_curAnimatedImage));

  if (local_28 == 0) {

    local_28 = 0x400;

  }

  lVar1 = __YYDeviceMemoryTotal();

  lVar2 = __YYDeviceMemoryFree();

  local_80 = (double)lVar2 * 0.6;

  if ((double)lVar1 * 0.2 < local_80) {

    local_80 = (double)lVar1 * 0.2;

  }

  local_88 = (ulong)local_80;

  if ((long)local_88 < 0xa00000) {

    local_88 = 0xa00000;

  }

  local_40 = local_88;

  if (*(long *)(param_1 + (long)_maxBufferSize) != 0) {

    if (*(ulong *)(param_1 + (long)_maxBufferSize) < local_88) {

      local_90 = *(ulong *)(param_1 + (long)_maxBufferSize);

    }

    else {

      local_90 = local_88;

    }

    local_40 = local_90;

  }

  local_78 = (double)(long)local_40 / (double)local_28;

  if (1.0 <= local_78) {

    if (512.0 < local_78) {

      local_78 = 512.0;

    }

  }

  else {

    local_78 = 1.0;

  }

  *(long *)(param_1 + (long)_maxBufferCount) = (long)local_78;

  return;

}






// ---- [d5] setContentsRect:forImage: @0x9ffd8 ----
// CALLERS: imageChanged, step:, _objc_msgSend$setContentsRect:forImage:
// CALLEES: _CGRectMake, size


/* Function Stack Size: 0x38 bytes */



void WCMYYAnimatedImageView::setContentsRect_forImage_

               (ID param_1,SEL param_2,CGRect param_3,ID param_4)



{

  ulong uVar1;

  undefined8 uVar2;

  double dVar3;

  double dVar4;

  double dVar5;

  undefined8 local_140;

  undefined8 local_80;

  double dStack_78;

  double local_70;

  double dStack_68;

  long local_58;

  SEL local_50;

  ID local_48;

  double local_40;

  double local_38;

  double local_30;

  double local_28;

  

  local_28 = param_3.field1_0x10.field1_0x8;

  local_30 = param_3.field1_0x10.field0_0x0;

  local_38 = param_3.field0_0x0.field1_0x8;

  local_40 = param_3.field0_0x0.field0_0x0;

  local_58 = 0;

  local_50 = param_2;

  local_48 = param_1;

  _objc_storeStrong(&local_58,param_4);

  dStack_78 = 0.0;

  dStack_68 = 1.0;

  local_70 = 1.0;

  local_80 = _CGRectMake(0);

  if (((local_58 != 0) &&

      (dVar5 = dStack_78, dVar3 = (double)_objc_msgSend_size(local_58,local_140), 0.01 < dVar3)) &&

     (0.01 < dVar5)) {

    dVar4 = local_40 / dVar3;

    dStack_78 = local_38 / dVar5;

    local_70 = local_30 / dVar3;

    dStack_68 = local_28 / dVar5;

    _CGRectMake(0);

    local_80 = _CGRectIntersection(dVar4);

    uVar1 = _CGRectIsNull(local_80,dStack_78,local_70,dStack_68);

    if (((uVar1 & 1) != 0) ||

       (uVar1 = _CGRectIsEmpty(local_80,dStack_78,local_70,dStack_68), (uVar1 & 1) != 0)) {

      dStack_78 = 0.0;

      dStack_68 = 1.0;

      local_70 = 1.0;

      local_80 = _CGRectMake(0);

    }

  }

  _objc_msgSend_begin(&_OBJC_CLASS___CATransaction,local_140);

  _objc_msgSend_setDisableActions_(&_OBJC_CLASS___CATransaction,local_140,1);

  _objc_msgSend_layer(local_48,local_140);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setContentsRect_(local_80,dStack_78,local_70,dStack_68,uVar2,local_140);

  (*(code *)PTR__objc_release_00110458)(uVar2);

  _objc_msgSend_commit(&_OBJC_CLASS___CATransaction,local_140);

  _objc_storeStrong(&local_58,0);

  return;

}






// ---- [d5] didMoved @0xa026c ----
// CALLERS: imageChanged, didMoveToWindow, didMoveToSuperview, _objc_msgSend$didMoved
// CALLEES: stopAnimating, startAnimating, autoPlayAnimatedImage


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::didMoved(ID param_1,SEL param_2)



{

  bool bVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  undefined8 local_40;

  

  uVar2 = _objc_msgSend_autoPlayAnimatedImage(param_1);

  if ((uVar2 & 1) != 0) {

    _objc_msgSend_superview(param_1,local_40);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    bVar1 = false;

    if (lVar3 != 0) {

      _objc_msgSend_window(param_1,local_40);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      bVar1 = lVar4 != 0;

      (*(code *)PTR__objc_release_00110458)(lVar4);

    }

    (*(code *)PTR__objc_release_00110458)(lVar3);

    if (bVar1) {

      _objc_msgSend_startAnimating(param_1,local_40);

    }

    else {

      _objc_msgSend_stopAnimating(param_1,local_40);

    }

  }

  return;

}






// ---- [d5] setCurrentIsPlayingAnimation: @0xa1060 ----
// CALLERS: stopAnimating, startAnimating, _objc_msgSend$setCurrentIsPlayingAnimation:
// CALLEES: currentIsPlayingAnimation


/* Function Stack Size: 0x14 bytes */



void WCMYYAnimatedImageView::setCurrentIsPlayingAnimation_(ID param_1,SEL param_2,bool param_3)



{

  *(byte *)(param_1 + (long)_currentIsPlayingAnimation) = (byte)param_3 & 1;

  return;

}






// ---- [d6] frameCount @0x9772c ----
// CALLERS: initWithData:scale:decodeDecision:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:, initWithData:scale:, setPreloadAllAnimatedImageFrames:, animatedImageFrameCount, animatedImageFrameAtIndex:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::frameCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb0);

}






// ---- [d6] loopCount @0x8f3c8 ----
// CALLERS: animatedImageLoopCount, initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, animatedImageLoopCount, animatedImageLoopCount, initWithImagePaths:oneFrameDuration:loopCount:, initWithImagePaths:frameDurations:loopCount:, initWithImageDataArray:oneFrameDuration:loopCount:, initWithImageDataArray:frameDurations:loopCount:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_loopCount);

}






// ---- [d6] loopCount @0x97748 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xb8);

}






// ---- [d6] loopCount @0x9a214 ----
// CALLERS: animatedImageLoopCount, animatedImageLoopCount, _objc_msgSend$loopCount
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::loopCount(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x28);

}






// ---- [d6] contentRects @0x8f380 ----
// CALLERS: initWithSpriteSheetImage:contentRects:frameDurations:loopCount:, contentsRectForCALayerAtIndex:, animatedImageFrameCount, animatedImageContentsRectAtIndex:, .cxx_destruct
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYYSpriteSheetImage::contentRects(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + (long)_contentRects);

}






// ---- [d6] imagePath @0x7ce60 ----
// CALLERS: loadData, loadYBImage, initWithImagePaths:frameDurations:loopCount:, animatedImageFrameCount, animatedImageFrameAtIndex:, .cxx_destruct, _objc_msgSend$imagePath
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imagePath(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x68);

}






// ---- [d6] imageData @0x7ceb4 ----
// CALLERS: galleryImageData:, wcm_yb_imageData:startLoadingWithStatus:, wcm_yb_imageData:readyForImage:, wcm_yb_imageData:readyForCompressedImage:, wcm_yb_imageData:readyForThumbImage:, wcm_yb_imageData:downloadProgress:, loadData, loadOriginImage
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBImageData::imageData(ID param_1,SEL param_2)



{

  return *(ID *)(param_1 + 0x70);

}






// ---- [d6] animatedImageBytesPerFrame @0x69fbc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYBImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d6] animatedImageBytesPerFrame @0x8f1cc ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYSpriteSheetImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return 0;

}






// ---- [d6] animatedImageBytesPerFrame @0x908ec ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_bytesPerFrame);

}






// ---- [d6] animatedImageBytesPerFrame @0x9c434 ----
// CALLERS: calcMaxBufferCount, _objc_msgSend$animatedImageBytesPerFrame
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYFrameImage::animatedImageBytesPerFrame(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_oneFrameBytes);

}






// ---- [d6] maxBufferSize @0xa10b4 ----
// CALLERS: calcMaxBufferCount, setMaxBufferSize:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYAnimatedImageView::maxBufferSize(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + (long)_maxBufferSize);

}






// ---- [d6] __YYDeviceMemoryTotal @0xa11d4 ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryTotal(void)



{

  undefined8 uVar1;

  undefined8 local_30;

  long local_18;

  

  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_18 = _objc_msgSend_physicalMemory(uVar1,local_30);

  (*(code *)PTR__objc_release_00110458)(uVar1);

  if (local_18 < -1) {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d6] __YYDeviceMemoryFree @0xa124c ----
// CALLERS: calcMaxBufferCount
// CALLEES: (叶)


long __YYDeviceMemoryFree(void)



{

  kern_return_t kVar1;

  uint local_64 [15];

  vm_size_t local_28;

  mach_msg_type_number_t local_20;

  host_t local_1c;

  long local_18;

  

  local_1c = _mach_host_self();

  local_20 = 0xf;

  kVar1 = _host_page_size(local_1c,&local_28);

  if (kVar1 == 0) {

    kVar1 = _host_statistics(local_1c,2,(host_info_t)local_64,&local_20);

    if (kVar1 == 0) {

      local_18 = local_64[0] * local_28;

    }

    else {

      local_18 = -1;

    }

  }

  else {

    local_18 = -1;

  }

  return local_18;

}






// ---- [d6] size @0xaf0e4 ----
// CALLERS: layoutSubviews, ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke, updateGallery, ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke, showToView:containerSize:, wcm_yb_orientationChangeAnimationWithExpectOrientation:, updateImageLayoutWithOrientation:previousImageSize:, cuttingImage_
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



CGSize WCMTOCropViewControllerAspectRatioPreset::size(ID param_1,SEL param_2)



{

  return *(CGSize *)(param_1 + 0x10);

}






// ---- [d6] startAnimating @0x9f080 ----
// CALLERS: didMoved, _objc_msgSend$startAnimating
// CALLEES: imageForType:, currentImageType, setCurrentIsPlayingAnimation:


/* Function Stack Size: 0x10 bytes */



void WCMYYAnimatedImageView::startAnimating(ID param_1,SEL param_2)



{

  long lVar1;

  ulong uVar2;

  undefined8 local_48;

  ID local_40;

  class_t *local_38;

  undefined8 local_30;

  long local_28;

  SEL local_20;

  ID local_18;

  

  local_20 = param_2;

  local_18 = param_1;

  local_28 = _objc_msgSend_currentImageType(param_1);

  if ((local_28 == 3) || (local_28 == 4)) {

    _objc_msgSend_imageForType_(0,local_18,local_48,local_28);

    local_30 = _objc_retainAutoreleasedReturnValue();

    lVar1 = _objc_msgSend_count(local_30,local_48);

    if (lVar1 != 0) {

      local_40 = local_18;

      local_38 = &objc::class_t::WCMYYAnimatedImageView;

      _objc_msgSendSuper2(&local_40,"startAnimating");

      _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

    }

    _objc_storeStrong(&local_30,0);

  }

  else if ((*(long *)(local_18 + (long)_curAnimatedImage) != 0) &&

          (uVar2 = _objc_msgSend_isPaused(*(undefined8 *)(local_18 + (long)_link),local_48),

          (uVar2 & 1) != 0)) {

    *(undefined8 *)(local_18 + (long)_curLoop) = 0;

    *(undefined1 *)(local_18 + (long)_loopEnd) = 0;

    _objc_msgSend_setPaused_(*(undefined8 *)(local_18 + (long)_link),local_48,0);

    _objc_msgSend_setCurrentIsPlayingAnimation_(local_18,local_48,1);

  }

  return;

}






// ---- [d6] autoPlayAnimatedImage @0xa0fd8 ----
// CALLERS: init, initWithFrame:, initWithImage:, initWithImage:highlightedImage:, didMoved, initWithCoder:, encodeWithCoder:, setAutoPlayAnimatedImage:
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::autoPlayAnimatedImage(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_autoPlayAnimatedImage) & 1;

}






// ---- [d6] currentIsPlayingAnimation @0xa1034 ----
// CALLERS: isAnimating, setCurrentIsPlayingAnimation:, _objc_msgSend$currentIsPlayingAnimation
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



bool WCMYYAnimatedImageView::currentIsPlayingAnimation(ID param_1,SEL param_2)



{

  return *(byte *)(param_1 + (long)_currentIsPlayingAnimation) & 1;

}





