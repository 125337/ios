// presentationControllerDidDismiss: @0x2d4bc

/* Function Stack Size: 0x18 bytes */

void WCMCacheController::presentationControllerDidDismiss_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_onClose(local_18,local_38);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_onClose(local_18,local_38);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

