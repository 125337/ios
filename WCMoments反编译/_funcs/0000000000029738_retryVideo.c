// retryVideo @0x29738

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::retryVideo(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  _objc_msgSend_preparedItems(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_index(param_1,local_28);
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_28,uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObjectForKey_(uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_probeTimes(param_1,local_28);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_index(param_1,local_28);
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_28,uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObjectForKey_(uVar1,local_28);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_activateVideo(param_1,local_28);
  return;
}

