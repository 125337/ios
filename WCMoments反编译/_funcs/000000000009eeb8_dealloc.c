// dealloc @0x9eeb8

/* Function Stack Size: 0x10 bytes */

void WCMYYAnimatedImageView::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_cancelAllOperations(*(undefined8 *)(param_1 + (long)_requestQueue));
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObserver_name_object_
            (uVar1,local_38,local_18,
             *(undefined8 *)PTR__UIApplicationDidReceiveMemoryWarningNotification_00110088);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObserver_name_object_
            (uVar1,local_38,local_18,
             *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_00110080,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_invalidate(*(undefined8 *)(local_18 + (long)_link),local_38);
  local_30 = local_18;
  local_28 = &objc::class_t::WCMYYAnimatedImageView;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}

