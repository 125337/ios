// control:action: @0x17d50

/* Function Stack Size: 0x20 bytes */

ID WCMVideoController::control_action_(ID param_1,SEL param_2,ID param_3,SEL param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_c8;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  _objc_msgSend_buttonWithType_(&objc::class_t::WCMGlassButton,local_c8,1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_c8,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(local_48,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(local_48,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_layer(local_48,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCornerRadius_(0x4036000000000000,uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setClipsToBounds_(local_48,local_c8,1);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
  _objc_msgSend_effectWithStyle_(&_OBJC_CLASS___UIBlurEffect,local_c8,0x11);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_50 = _objc_msgSend_initWithEffect_(uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _objc_msgSend_bounds(local_48,local_c8);
  _objc_msgSend_setFrame_(uVar1,in_d1,in_d2,in_d3,local_50,local_c8);
  _objc_msgSend_setAutoresizingMask_(local_50,local_c8,0x12);
  _objc_msgSend_setUserInteractionEnabled_(local_50,local_c8,0);
  _objc_msgSend_insertSubview_atIndex_(local_48,local_c8,local_50,0);
  _objc_msgSend_addTarget_action_forControlEvents_(local_48,local_c8,local_28,local_40,0x40);
  _objc_msgSend_view(local_28,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addSubview_(uVar1,local_c8,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}

