// startObserveDeviceOrientation @0x895b0

/* Function Stack Size: 0x10 bytes */

void WCMYBIBScreenRotationHandler::startObserveDeviceOrientation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_addObserver_selector_name_object_
            (uVar1,local_30,param_1,"deviceOrientationDidChangeNotification:",
             *(undefined8 *)PTR__UIDeviceOrientationDidChangeNotification_001100a8,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

