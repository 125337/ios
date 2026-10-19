// startImageViewAnimation @0x806c8

/* Function Stack Size: 0x10 bytes */

void WCMYBIBLoadingView::startImageViewAnimation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_animationWithKeyPath_
            (&_OBJC_CLASS___CABasicAnimation,param_2,&cf_transform_rotation_z);
  local_28 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_numberWithFloat_(0x40c90fdb,&_OBJC_CLASS___NSNumber,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setToValue_(local_28,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setDuration_(0x3ff0000000000000,local_28,local_48);
  _objc_msgSend_setCumulative_(local_28,local_48,1);
  _objc_msgSend_setRepeatCount_(0x7f800000,local_28,local_48);
  _objc_msgSend_setRemovedOnCompletion_(local_28,local_48,0);
  _objc_msgSend_setFillMode_(local_28,local_48,*(undefined8 *)PTR__kCAFillModeForwards_001101e8);
  _objc_msgSend_imageView(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_layer(uVar1,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addAnimation_forKey_(uVar2,local_48,local_28,&cf_ra);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

