// dealloc @0x11f28

/* Function Stack Size: 0x10 bytes */

void WCMVideoComments::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_timer(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar1,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObserver_(uVar1,local_40,local_18);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_30 = local_18;
  local_28 = &objc::class_t::WCMVideoComments;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

