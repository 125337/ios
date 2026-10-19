// gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer: @0xb930

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

bool WCMInboxController::gestureRecognizer_shouldRecognizeSimultaneouslyWithGestureRecognizer_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_68;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  lVar1 = local_30[0];
  _objc_msgSend_tableView(local_18,local_68);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_panGestureRecognizer(uVar2,local_68);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return (uint)(lVar1 == lVar3);
}

