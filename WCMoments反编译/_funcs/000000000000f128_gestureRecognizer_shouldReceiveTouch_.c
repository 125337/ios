// gestureRecognizer:shouldReceiveTouch: @0xf128

/* Function Stack Size: 0x20 bytes */

bool WCMCommentPresentation::gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double in_d1;
  undefined8 local_70;
  byte local_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_38;
  _objc_msgSend_presentedView(local_20,local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_locationInView_(uVar2,local_70);
  local_58 = 0;
  if (in_d1 < 56.0) {
    _objc_msgSend_view(local_38,local_70);
    local_50 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIControl);
    local_58 = _objc_opt_isKindOfClass(local_50,uVar2);
    local_58 = local_58 ^ 1;
  }
  local_11 = local_58 & 1;
  if (in_d1 < 56.0) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

