// -[UIViewController(WCMoments)_wcm_toggleFeed] @0x5bc14

void __UIViewController_WCMoments__wcm_toggleFeed_(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&_PanelKey);
  local_28 = _objc_retainAutoreleasedReturnValue();
  if (local_28 == 0) {
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBool_forKey_(uVar1,local_38,0,&cf_WCMomentsDisabled);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _Attach(local_18);
  }
  else {
    _objc_msgSend_stop(local_28,local_38);
    _objc_msgSend_restoreChrome(local_28,local_38);
    _objc_msgSend_willMoveToParentViewController_(local_28,local_38);
    _objc_msgSend_view(local_28,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_removeFromSuperview(uVar1,local_38);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_removeFromParentViewController(local_28,local_38);
    _objc_setAssociatedObject(local_18,&_PanelKey,0,1);
    _objc_getAssociatedObject(local_18,&_ButtonKey);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setTitle_(uVar1,local_38,&cf_SRgSW);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBool_forKey_(uVar1,local_38,1,&cf_WCMomentsDisabled);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

