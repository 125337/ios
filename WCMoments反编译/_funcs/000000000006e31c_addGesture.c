// addGesture @0x6e31c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::addGesture(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  local_28 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToTapSingle:");
  _objc_msgSend_setNumberOfTapsRequired_(local_28,local_60);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  local_30 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToTapDouble:");
  _objc_msgSend_setNumberOfTapsRequired_(local_30,local_60,2);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);
  local_38 = _objc_msgSend_initWithTarget_action_(uVar1,local_60,local_18,"respondsToPan:");
  _objc_msgSend_setMaximumNumberOfTouches_(local_38,local_60,1);
  _objc_msgSend_setDelegate_(local_38,local_60,local_18);
  _objc_msgSend_requireGestureRecognizerToFail_(local_28,local_60,local_30);
  _objc_msgSend_requireGestureRecognizerToFail_(local_28,local_60,local_38);
  _objc_msgSend_requireGestureRecognizerToFail_(local_30,local_60,local_38);
  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_28);
  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_30);
  _objc_msgSend_addGestureRecognizer_(local_18,local_60,local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

