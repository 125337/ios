// showLoading @0x866c

/* Function Stack Size: 0x10 bytes */

void WCMQQRefreshControl::showLoading(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_positionIndicator(param_1);
  _objc_msgSend_qqSymbolView(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_d0,1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _memcpy(auStack_60,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_qqSymbolView(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_90,auStack_60,0x30);
  _objc_msgSend_setTransform_(uVar2,local_d0,auStack_90);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = _UIAccessibilityIsReduceMotionEnabled();
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0x3fd47ae147ae147b;
  }
  local_b8 = PTR___NSConcreteStackBlock_001104f0;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = ___34__WCMQQRefreshControl_showLoading__block_invoke;
  local_a0 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_98 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            (uVar2,0,0x3fe8f5c28f5c28f6,&_OBJC_CLASS___UIView,local_d0,4,&local_b8,0);
  IVar1 = local_28;
  lVar4 = _objc_msgSend_qqFeedbackGeneration(local_28,local_d0);
  _objc_msgSend_setQqFeedbackGeneration_(IVar1,local_d0,lVar4 + 1);
  _objc_msgSend_setQqShowingFeedback_(local_28,local_d0,0);
  _objc_msgSend_qqIndicatorView(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_d0,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_qqIndicatorView(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0x3ff0000000000000,uVar2,local_d0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_qqMessageLabel(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar2,local_d0,&cf_ck_W7Re_);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_layoutIndicatorContent(local_28,local_d0);
  _objc_msgSend_qqMessageLabel(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_text(uVar2,local_d0);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAccessibilityLabel_(local_28,local_d0);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_d0,&cf_arrow_clockwise);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_qqSymbolView(local_28,local_d0);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar5,local_d0,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_28;
  _objc_msgSend_systemBlueColor(&_OBJC_CLASS___UIColor,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_drawRing_color_(0x3fe8f5c28f5c28f6,IVar1,local_d0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_qqRingLayer(local_28,local_d0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAnimationForKey_(uVar2,local_d0,&cf_refresh);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = _UIAccessibilityIsReduceMotionEnabled();
  if ((uVar3 & 1) == 0) {
    _objc_msgSend_animationWithKeyPath_
              (&_OBJC_CLASS___CABasicAnimation,local_d0,&cf_transform_rotation_z);
    local_c0 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setByValue_(local_c0,local_d0,&PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f438);
    _objc_msgSend_setDuration_(0x3fe999999999999a,local_c0,local_d0);
    _objc_msgSend_setRepeatCount_(0x7f800000,local_c0,local_d0);
    _objc_msgSend_qqRingLayer(local_28,local_d0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_addAnimation_forKey_(uVar2,local_d0,local_c0,&cf_refresh);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_98,0);
  return;
}

