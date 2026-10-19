// imageForType: @0x9e4b8

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

