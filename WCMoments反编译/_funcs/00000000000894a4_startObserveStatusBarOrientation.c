// startObserveStatusBarOrientation @0x894a4

/* Function Stack Size: 0x10 bytes */

void WCMYBIBScreenRotationHandler::startObserveStatusBarOrientation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_statusBarOrientation(uVar1,local_38);
  _objc_msgSend_setCurrentOrientation_(param_1,local_38,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addObserver_selector_name_object_
            (uVar1,local_38,param_1,"applicationDidChangedStatusBarOrientationNotification:",
             *(undefined8 *)PTR__UIApplicationDidChangeStatusBarOrientationNotification_00110078);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addObserver_selector_name_object_
            (uVar1,local_38,param_1,"applicationWillChangeStatusBarOrientationNotification:",
             *(undefined8 *)PTR__UIApplicationWillChangeStatusBarOrientationNotification_00110098,0)
  ;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

