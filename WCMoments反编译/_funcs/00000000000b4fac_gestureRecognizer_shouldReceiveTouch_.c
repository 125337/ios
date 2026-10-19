// gestureRecognizer:shouldReceiveTouch: @0xb4fac

/* Function Stack Size: 0x20 bytes */

bool WCMTOCropView::gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_58;
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
  _objc_msgSend_gridPanGestureRecognizer(local_20,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_state(uVar1,local_58);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_11 = lVar2 != 2;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

